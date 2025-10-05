"""
Configures the project for building. Invokes splat to split the binary and
creates build files for ninja.
"""
#! /usr/bin/env python3
import argparse
import os
import shutil
import sys
import json
import re
from pathlib import Path
from typing import Dict, List, Set, Union

import ninja_syntax
import splat
import splat.scripts.split as split
from splat.segtypes.linker_entry import LinkerEntry

# Constants
ROOT      = Path(__file__).parent.resolve()
TOOLS_DIR = ROOT / "tools"
OUT_DIR   = "build"
LINK_DIR  = "linkers"

CONFIG_PATH  = "configs"
YAML_FILE    = Path(f"{CONFIG_PATH}/main.yaml")
BASENAME     = "SCES_512.48"
LD_PATH      = f"{LINK_DIR}/{BASENAME}.ld"
ELF_PATH     = f"{OUT_DIR}/{BASENAME}"
MAP_PATH     = f"{OUT_DIR}/{BASENAME}.map"
PRE_ELF_PATH = f"{OUT_DIR}/{BASENAME}.elf"

# Compilation Flags
INCLUDE_PATHS        = "-Iinclude"
CC_DIR               = f"{TOOLS_DIR}/ee-gcc2.95.3-136/bin"
COMMON_COMPILE_FLAGS = f"-x c++ -B{TOOLS_DIR}/cc/lib/gcc-lib/ee/2.95.2/ -O2 -G0 -ffast-math"
COMPILER_FLAGS_C     = "-O2 -g0 -x c"
COMPILER_FLAGS_CPP   = "-O2 -g0 -x c++ -fno-exceptions -G0"

COMPILE_CMD_C = (
    f"{CC_DIR}/ee-gcc.exe -c {INCLUDE_PATHS} {COMPILER_FLAGS_C}"
)
COMPILE_CMD_CPP = (
    f"{CC_DIR}/ee-gcc.exe -c {INCLUDE_PATHS} {COMPILER_FLAGS_CPP}"
)

if sys.platform == "linux" or sys.platform == "linux2":
    COMPILE_CMD_C = f"wine {COMPILE_CMD_C}"
    COMPILE_CMD_CPP = f"wine {COMPILE_CMD_CPP}"


CATEGORY_MAP = {
    "game": "Main",
    "data": "Data"
}

def clean():
    """
    Clean all products of the build process.
    """
    files_to_clean = [
        ".splache",
        ".ninja_log",
        "build.ninja",
        "objdiff.json",
        LD_PATH
    ]
    for filename in files_to_clean:
        if os.path.exists(filename):
            os.remove(filename)

    shutil.rmtree("asm", ignore_errors=True)
    shutil.rmtree(LINK_DIR, ignore_errors=True)
    shutil.rmtree("target", ignore_errors=True)
    shutil.rmtree(OUT_DIR, ignore_errors=True)


#MARK: Build
def build_stuff(linker_entries: List[LinkerEntry], skip_checksum=False, objects_only=False, dual_objects=False):
    """
    Build the objects and the final ELF file.
    If objects_only is True, only build objects and skip linking/checksum.
    If dual_objects is True, build objects twice: once normally, once with -DSKIP_ASM.
    """
    built_objects: Set[Path] = set()
    objdiff_units = []  # For objdiff.json

    def build(
        object_paths: Union[Path, List[Path]],
        src_paths: List[Path],
        task: str,
        variables: Dict[str, str] = None,
        implicit_outputs: List[str] = None,
        out_dir: str = None,
        extra_flags: str = "",
        collect_objdiff: bool = False,
        orig_entry=None,
    ):
        """
        Helper function to build objects.
        """
        # Handle none parameters
        if variables is None:
            variables = {}

        if implicit_outputs is None:
            implicit_outputs = []

        # Convert object_paths to list if it is not already
        if not isinstance(object_paths, list):
            object_paths = [object_paths]

        # Only rewrite output path to .o if out_dir is set (i.e. --objects mode)
        if out_dir:
            new_object_paths = []
            for obj in object_paths:
                obj = Path(obj)
                stem = obj.stem
                if obj.suffix in [".s", ".c"]:
                    stem = obj.stem
                else:
                    if obj.suffix == ".o" and obj.with_suffix("").suffix in [".s", ".c"]:
                        stem = obj.with_suffix("").stem
                target_dir = out_dir if out_dir else obj.parent
                new_obj = Path(target_dir) / (stem + ".o")
                new_object_paths.append(new_obj)
            obj_path = str(object_paths[0])
            object_paths = new_object_paths

        # Otherwise, use the original object_paths (with .s.o, .c.o, etc.)

        # Add object paths to built_objects
        for idx, object_path in enumerate(object_paths):
            if object_path.suffix == ".o":
                built_objects.add(object_path)

            # Add extra_flags to variables if present
            build_vars = variables.copy()
            if extra_flags:
                build_vars["cflags"] = extra_flags
            ninja.build(
                outputs=[str(object_path)],
                rule=task,
                inputs=[str(s) for s in src_paths],
                variables=build_vars,
                implicit_outputs=implicit_outputs,
            )

            # Collect for objdiff.json if requested
            if collect_objdiff and orig_entry is not None:
                src = src_paths[0] if src_paths else None
                if src:
                    src = Path(src)
                    # Always use the final "matched" name, i.e. as if it will be in src/ with no asm/ prefix
                    try:
                        # If the file is in asm/, replace asm/ with nothing (just drop asm/)
                        if src.parts[0] == "asm":
                            rel = Path(*src.parts[1:])
                        elif src.parts[0] == "src":
                            rel = Path(*src.parts[1:])
                        else:
                            rel = src
                        # Remove extension for the name
                        name = str(rel.with_suffix(""))
                    except Exception:
                        name = str(src.with_suffix(""))
                else:
                    name = object_path.stem
                    # Ensure `rel` is defined so later code can compute src-based paths
                    try:
                        rel = Path(object_path)
                    except Exception:
                        rel = Path(str(object_path))

                if "target" in str(object_path):
                    target_path = str(object_path)

                    # Determine if a .c or .cpp file exists in src/ for this unit (recursively)
                    src_base = rel.with_suffix("")
                    src_c_files = list(Path("src").rglob(src_base.name + ".c"))
                    src_cpp_files = list(Path("src").rglob(src_base.name + ".cpp"))
                    has_src = bool(src_c_files or src_cpp_files)

                    # Determine the category based on the name
                    categories = [name.split("/")[0]]
                    if "text" == name or "src" in name:
                        categories = ["game"]

                    unit = {
                        "name": name,
                        "base_path": obj_path,
                        "target_path": target_path,
                        "metadata": {
                            "progress_categories": categories,
                        }
                    }

                    if has_src:
                        # Replace only the path segment named 'target' with 'current',
                        # preserving any filenames that may contain the substring "target".
                        op = Path(object_path)
                        parts = list(op.parts)
                        for idx, part in enumerate(parts):
                            if part == "target":
                                parts[idx] = "current"
                                break
                        base_path = str(Path(*parts))
                        unit["base_path"] = base_path
                    objdiff_units.append(unit)

    ninja = ninja_syntax.Writer(open(str(ROOT / "build.ninja"), "w", encoding="utf-8"), width=9999)

    #MARK: Rules
    cross = "mips-linux-gnu-"

    ld_args = f"-EL -T {LINK_DIR}/undefined_syms_auto.txt -T {LINK_DIR}/undefined_funcs_auto.txt -Map $mapfile -T $in -o $out"

    ninja.rule(
        "as",
        description="as $in",
        command=f"cpp {INCLUDE_PATHS} $in -o  - | {cross}as -no-pad-sections -EL -march=5900 -mabi=eabi -Iinclude -o $out",
    )

    ninja.rule(
        "cc",
        description="cc $in",
        command=f"{COMPILE_CMD_C} $in -o $out && {cross}strip $out -N dummy-symbol-name",
    )

    ninja.rule(
        "cpp",
        description="cpp $in",
        command=f"{COMPILE_CMD_CPP} $in -o $out && {cross}strip $out -N dummy-symbol-name",
    )

    ninja.rule(
        "ld",
        description="link $out",
        command=f"{cross}ld {ld_args}",
    )

    ninja.rule(
        "sha1sum",
        description="sha1sum $in",
        command="sha1sum -c $in && touch $out",
    )

    ninja.rule(
        "elf",
        description="elf $out",
        command=f"{cross}objcopy $in $out -O binary",
    )

    TARGET_DIR = f"target"

    # Build all the objects
    for entry in linker_entries:
        seg = entry.segment

        if seg.type[0] == ".":
            continue

        if entry.object_path is None:
            continue

        if isinstance(seg, splat.segtypes.common.asm.CommonSegAsm) or isinstance(
            seg, splat.segtypes.common.data.CommonSegData):
            if dual_objects:
                build(entry.object_path, entry.src_paths, "as", out_dir=TARGET_DIR, collect_objdiff=True, orig_entry=entry)
                build(entry.object_path, entry.src_paths, "as", extra_flags="-DSKIP_ASM")
            else:
                build(entry.object_path, entry.src_paths, "as")
        elif isinstance(seg, splat.segtypes.common.c.CommonSegC):
            if dual_objects:
                build(entry.object_path, entry.src_paths, "cc", out_dir=TARGET_DIR, collect_objdiff=True, orig_entry=entry)
                build(entry.object_path, entry.src_paths, "cc", extra_flags="-DSKIP_ASM")
            else:
                build(entry.object_path, entry.src_paths, "cpp")
        elif isinstance(seg, splat.segtypes.common.cpp.CommonSegCpp):
            if dual_objects:
                build(entry.object_path, entry.src_paths, "cpp", out_dir=TARGET_DIR, collect_objdiff=True, orig_entry=entry)
                build(entry.object_path, entry.src_paths, "cpp", extra_flags="-DSKIP_ASM")
            else:
                build(entry.object_path, entry.src_paths, "cpp")
        elif isinstance(seg, splat.segtypes.common.databin.CommonSegDatabin):
            if dual_objects:
                build(entry.object_path, entry.src_paths, "as", out_dir=TARGET_DIR, collect_objdiff=True, orig_entry=entry)
                build(entry.object_path, entry.src_paths, "as", extra_flags="-DSKIP_ASM")
            else:
                build(entry.object_path, entry.src_paths, "as")
        elif isinstance(seg, splat.segtypes.common.rodatabin.CommonSegRodatabin):
            if dual_objects:
                build(entry.object_path, entry.src_paths, "as", out_dir=TARGET_DIR, collect_objdiff=True, orig_entry=entry)
                build(entry.object_path, entry.src_paths, "as", extra_flags="-DSKIP_ASM")
            else:
                build(entry.object_path, entry.src_paths, "as")
        elif isinstance(seg, splat.segtypes.common.textbin.CommonSegTextbin):
            if dual_objects:
                build(entry.object_path, entry.src_paths, "as", out_dir=TARGET_DIR, collect_objdiff=True, orig_entry=entry)
                build(entry.object_path, entry.src_paths, "as", extra_flags="-DSKIP_ASM")
            else:
                build(entry.object_path, entry.src_paths, "as")
        elif isinstance(seg, splat.segtypes.common.bin.CommonSegBin):
            if dual_objects:
                build(entry.object_path, entry.src_paths, "as", out_dir=TARGET_DIR, collect_objdiff=True, orig_entry=entry)
                build(entry.object_path, entry.src_paths, "as", extra_flags="-DSKIP_ASM")
            else:
                build(entry.object_path, entry.src_paths, "as")
        else:
            print(f"ERROR: Unsupported build segment type {seg.type}")
            sys.exit(1)

    if objects_only:
        # Write objdiff.json if dual_objects (i.e. -diff)
        if dual_objects:
            objdiff = {
                "$schema": "https://raw.githubusercontent.com/encounter/objdiff/main/config.schema.json",
                "custom_make": "ninja",
                "custom_args": [],
                "build_target": False,
                "build_base": True,
                "watch_patterns": [
                    "src/**/*.c",
                    "src/**/*.cp",
                    "src/**/*.cpp",
                    "src/**/*.cxx",
                    "src/**/*.h",
                    "src/**/*.hp",
                    "src/**/*.hpp",
                    "src/**/*.hxx",
                    "src/**/*.s",
                    "src/**/*.S",
                    "src/**/*.asm",
                    "src/**/*.inc",
                    "src/**/*.py",
                    "src/**/*.yml",
                    "src/**/*.txt",
                    "src/**/*.json"
                ],
                "units": objdiff_units,
                "progress_categories": [ {"id": id, "name": name} for id, name in CATEGORY_MAP.items() ],
            }
            with open("objdiff.json", "w", encoding="utf-8") as f:
                json.dump(objdiff, f, indent=2)
        return

    ninja.build(
        PRE_ELF_PATH,
        "ld",
        LD_PATH,
        implicit=[str(obj) for obj in built_objects],
        variables={"mapfile": MAP_PATH},
    )

    ninja.build(
        ELF_PATH,
        "elf",
        PRE_ELF_PATH,
    )

    if not skip_checksum:
        ninja.build(
            ELF_PATH + ".ok",
            "sha1sum",
            f"{CONFIG_PATH}/checksum.sha1",
            implicit=[ELF_PATH],
        )
    else:
        print("Skipping checksum step")

def main():
    parser = argparse.ArgumentParser(description="Configure the project")
    parser.add_argument(
        "-c",
        "--clean",
        help="Clean artifacts and build",
        action="store_true",
    )
    parser.add_argument(
        "-C",
        "--clean-only",
        help="Only clean artifacts",
        action="store_true",
    )
    parser.add_argument(
        "-s",
        "--skip-checksum",
        help="Skip the checksum step",
        action="store_true",
    )
    parser.add_argument(
        "-diff",
        "--objdiff",
        help="Create Objdiff's configuration and compiles target object files",
        action="store_true",
    )
    args = parser.parse_args()

    do_clean         = (args.clean or args.clean_only) or False
    do_skip_checksum = args.skip_checksum or False
    do_objects       = args.objdiff or False

    if do_clean:
        clean()
        if args.clean_only:
            return

    split.main([YAML_FILE], modes="all", verbose=False)

    linker_entries = split.linker_writer.entries
    
    if do_objects:
        build_stuff(linker_entries, skip_checksum=True, objects_only=True, dual_objects=True)
    else:
        build_stuff(linker_entries, do_skip_checksum)
    

if __name__ == "__main__":
    main()
