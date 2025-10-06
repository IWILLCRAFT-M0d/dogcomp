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
CC_DIR               = f"{TOOLS_DIR}/ee-gcc2.95.2-274/bin"
COMMON_COMPILE_FLAGS = f"-x c++ -B{TOOLS_DIR}/cc/lib/gcc-lib/ee/2.95.2/ -O2 -g0"
COMPILER_FLAGS_C     = "-x c"
COMPILER_FLAGS_CPP   = "-x c++ -fno-exceptions -G16"

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

                    # Determine the category based on the path
                    if "src/" in str(orig_entry.src_paths[idx]):
                        categories = ["game"]
                    elif "asm/data" in str(orig_entry.src_paths[idx]):
                        categories = ["data"]

                    unit = {
                        "name": name,
                        "base_path": obj_path,
                        "target_path": target_path,
                        "metadata": {
                            "progress_categories": categories,
                        }
                    }

                    if has_src:
                        # Replace only the path segment named 'target' with 'build/obj/src',
                        # preserving any filenames that may contain the substring "target".
                        op = Path(object_path)
                        parts = list(op.parts)
                        for idx, part in enumerate(parts):
                            if part == "target":
                                parts[idx] = "build/obj/src"
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
        command=f"{COMPILE_CMD_C} $cflags $in -o $out && {cross}strip $out -N dummy-symbol-name",
    )

    ninja.rule(
        "cpp",
        description="cpp $in",
        command=f"{COMPILE_CMD_CPP} $cflags $in -o $out && {cross}strip $out -N dummy-symbol-name",
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
        
        if dual_objects == False:
            if isinstance(seg, splat.segtypes.common.asm.CommonSegAsm) or isinstance(
            seg, splat.segtypes.common.data.CommonSegData) or isinstance(
            seg, splat.segtypes.common.databin.CommonSegDatabin) or isinstance(
            seg, splat.segtypes.common.rodatabin.CommonSegRodatabin) or isinstance(
            seg, splat.segtypes.common.textbin.CommonSegTextbin) or isinstance(
            seg, splat.segtypes.common.bin.CommonSegBin):
                build(entry.object_path, entry.src_paths, "as")
            elif type(seg) == splat.segtypes.common.cpp.CommonSegCpp:
                build(entry.object_path, entry.src_paths, "cpp")
            elif type(seg) == splat.segtypes.common.c.CommonSegC:
                build(entry.object_path, entry.src_paths, "cc")
            else:
                print(f"ERROR: Unsupported build segment type {seg.type}")
                sys.exit(1)
        else:
            if isinstance(seg, splat.segtypes.common.asm.CommonSegAsm) or isinstance(
            seg, splat.segtypes.common.data.CommonSegData) or isinstance(
            seg, splat.segtypes.common.databin.CommonSegDatabin) or isinstance(
            seg, splat.segtypes.common.rodatabin.CommonSegRodatabin) or isinstance(
            seg, splat.segtypes.common.textbin.CommonSegTextbin) or isinstance(
            seg, splat.segtypes.common.bin.CommonSegBin):
                build(entry.object_path, entry.src_paths, "as", out_dir=TARGET_DIR, collect_objdiff=True, orig_entry=entry)
                build(entry.object_path, entry.src_paths, "as", extra_flags="-DSKIP_ASM")
            elif type(seg) == splat.segtypes.common.cpp.CommonSegCpp:
                build(entry.object_path, entry.src_paths, "cpp", out_dir=TARGET_DIR, collect_objdiff=True, orig_entry=entry)
                build(entry.object_path, entry.src_paths, "cpp", extra_flags="-DSKIP_ASM")
            elif type(seg) == splat.segtypes.common.c.CommonSegC:
                build(entry.object_path, entry.src_paths, "cc", out_dir=TARGET_DIR, collect_objdiff=True, orig_entry=entry)
                build(entry.object_path, entry.src_paths, "cc", extra_flags="-DSKIP_ASM")
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

#MARK: Short loop fix
# Pattern to workaround unintended nops around loops
COMMENT_PART = r"\/\* (.+) ([0-9A-Z]{2})([0-9A-Z]{2})([0-9A-Z]{2})([0-9A-Z]{2}) \*\/"
INSTRUCTION_PART = r"(\b(bne|bnel|beq|beql|beqz|bnez|bnezl|beqzl|bgez|bgezl|bgtz|bgtzl|blez|blezl|bltz|bltzl|b)\b.*)"
OPCODE_PATTERN = re.compile(f"{COMMENT_PART}  {INSTRUCTION_PART}")

PROBLEMATIC_FUNCS = set(
    [
        # text.cpp
        "func_00107760",
        "func_00107D68",
        "func_0010E998",
        "func_0010F568",
        "func_0012E2B8",
        "func_00139190",
        "func_00142470",
        "func_0014A398",
        "func_0010E998",
        "func_00123CA8",
        "func_00125270",
        "func_00144DC8",
        "func_0014D1B0",
        
        
        # text_00150120.cpp
        "func_0016BFD8",
        "func_00189A18",
        "func_0018FE80",
        "func_0017DC70",
        "func_00185878",
        
        
        # text_001A0020.cpp
        "func_001A2608",
        "func_001A2BA8",
        "func_001ABCA8",
        "func_001AC560",
        "func_001ADA80",
        "func_001C7BA8",
        "func_001D43F0",
        "func_001D4498",
        "func_001DF858",
        "func_001DFBB0",
        
        # text_001E14F8.cpp
        "func_001E1D30",
        "func_001E7780",
        "func_001FEC88",
        "func_0022CF80",

        
        # text_002401D8.cpp
        "func_00240A08",
        "func_00245AE8",
        "func_00278098",
        "func_0027C640",
        "func_0027D240",
        "func_0027EC50",
        "func_0028D6A8",
        "func_0028E4A0",
        "func_0028EC20",
        
        
        # text_00290D10.cpp
        "func_0029A198",
        "func_002AA498",
        "func_002AA978",
        "func_002AADF8",
        "func_002AB278",
        "func_002AB778",
        "func_002ABAE8",
        "func_002AF090",
        "func_002B1F40",
        "func_002B71E8",
        "func_002B9288",
        "func_002B9688",
        "func_002C0460",
        "func_002CA090",
        
        # text_002D0150.cpp
        "func_002F7A78",
        "func_002FC9B0",
        "func_0030A4C8",
        "func_00318BF8",
        "func_00319C28",
        "func_00327B78",
        "func_0032A680",
        "func_003326C0",
        "func_00333810",
        "func_00337B00",
        "func_00339120",
        "func_00339E68",
        "func_002FA958",
        "func_003120D0",
        "func_003374B0",
        "func_0033C5F8",
        "func_002FC288",
        "func_00302ED0",
        "func_00310370",
        "func_0033F640",
        "func_00303590",
        "func_0030BB10",
        "func_0030D8B8",
        "func_0031D298",
        "func_0032F0E0",
        "func_00335A80",
        "func_00335B84",
        "func_0034C230",
        "func_0030EC70",
        "func_00335258",
        "func_00336F9C",
        "func_0033739C",
        "func_0033B610",
        "func_00344A50",

        
    ]
)

def replace_instructions_with_opcodes(asm_folder: Path) -> None:
    """
    Replace branch instructions with raw opcodes for functions that trigger the short loop bug.
    """
    nm_folder = ROOT / asm_folder / "nonmatchings"

    for p in nm_folder.rglob("*.s"):
        if p.stem not in PROBLEMATIC_FUNCS:
            continue

        with p.open("r") as file:
            content = file.read()

        if re.search(OPCODE_PATTERN, content):
            # Reference found
            # Embed the opcode, we have to swap byte order for correct endianness
            content = re.sub(
                OPCODE_PATTERN,
                r"/* \1 \2\3\4\5 */  .word      0x\5\4\3\2 /* \6 */",
                content,
            )

            # Write the updated content back to the file
            with p.open("w") as file:
                file.write(content)

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
        
    replace_instructions_with_opcodes(split.config["options"]["asm_path"])
    

if __name__ == "__main__":
    main()
