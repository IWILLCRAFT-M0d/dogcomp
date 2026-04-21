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
import subprocess
from pathlib import Path
from typing import Dict, List, Set, Union

import ninja_syntax
import splat
import splat.scripts.split as split
from splat.segtypes.linker_entry import LinkerEntry

# Constants
ROOT      = Path(__file__).parent.resolve()
TOOLS_DIR = ROOT / "tools"
BUILD_DIR = "build"
OUT_DIR   = f"{BUILD_DIR}/out"
LINK_DIR  = "linkers"

CONFIG_PATH  = "configs"
YAML_FILE    = Path(f"{CONFIG_PATH}/main.yaml")
BASENAME     = "SCES_512.48"
LD_PATH      = f"{LINK_DIR}/{BASENAME}.ld"
ELF_PATH     = f"{OUT_DIR}/{BASENAME}"
MAP_PATH     = f"{OUT_DIR}/{BASENAME}.map"
PRE_ELF_PATH = f"{OUT_DIR}/{BASENAME}.elf"
TARGET_DIR   = "target"

# Compilation Flags
INCLUDE_PATHS        = "-Iinclude -I include/MultiStream -I include/ee_gcc -I include/ee -I include/ee_gcc/gcc-lib -I include/ee_gcc/machine -I include/ee_gcc/sys -I include/common -I include/Dogs -I include/FGDK3 -I include/zlib-1.1.3"
CC_DIR               = f"{TOOLS_DIR}/ee-gcc2.95.3"
COMMON_COMPILE_FLAGS = f"-g0"
COMPILER_FLAGS_C     = f"-x c {COMMON_COMPILE_FLAGS}"
COMPILER_FLAGS_CPP   = f"-x c++ -fno-exceptions -G8 {COMMON_COMPILE_FLAGS}"
CROSS = "mips-linux-gnu-"
LD_ARGS = f"-EL -T {LINK_DIR}/undefined_syms_auto.txt -T {LINK_DIR}/undefined_funcs_auto.txt -Map $mapfile -T $in -o $out"


COMPILE_CMD_C = (
    f"{CC_DIR}/ee/gcc/bin/ee-gcc2953.exe -c {INCLUDE_PATHS} {COMPILER_FLAGS_C}"
)
COMPILE_CMD_CPP = (
    f"{CC_DIR}/ee/gcc/bin/ee-gcc2953.exe -c {INCLUDE_PATHS} {COMPILER_FLAGS_CPP}"
)

if sys.platform == "linux" or sys.platform == "linux2":
    COMPILE_CMD_C = f"tools/wibo {COMPILE_CMD_C}"
    COMPILE_CMD_CPP = f"tools/wibo {COMPILE_CMD_CPP}"


CATEGORY_MAP = {
    "game": "Game",
    "data": "Data",
    "FGDK3": "Engine"
}

O0_SPLITS = [
    "src/FGDK3/Code/Playstation2/Music.cpp",
    "src/FGDK3/Code/GameShell.cpp",
    "src/text_002FCF70.cpp",
    "src/text_00307D30.cpp",
    "src/FGDK3/Code/FileSystem_Zip.cpp"
]

UNCOMPATIBLE_SN_AS_SPLITS = [
    "src/text_002421F8.cpp",
    "src/text_0031FC50.cpp",
    "src/text_00330930.cpp",
    "src/text_00334BD0.cpp"
]

COMPLETED_SPLITS = [
]

def clean():
    """
    Clean all products of the build process.
    """
    files_to_clean = [
        ".splache",
        ".ninja_log",
        "rules.ninja",
        "build.ninja",
        "matching.ninja",
        "objdiff.ninja",
        "objdiff.json",
        LD_PATH
    ]
    for filename in files_to_clean:
        if os.path.exists(filename):
            os.remove(filename)

    shutil.rmtree("asm", ignore_errors=True)
    shutil.rmtree(LINK_DIR, ignore_errors=True)
    shutil.rmtree("target", ignore_errors=True)
    shutil.rmtree(BUILD_DIR, ignore_errors=True)

def ninja_build(linker_entries: List[LinkerEntry], objdiff_mode: bool, skip_checksum: bool, use_sn_as: bool = False):

    if objdiff_mode:
        ninja_file             = ninja_syntax.Writer(open("matching.ninja", "w", encoding="utf-8"), width=9999)
        ninja_diff_file        = ninja_syntax.Writer(open("objdiff.ninja", "w", encoding="utf-8"), width=9999)
        ninja_diff_file.include("rules.ninja")
        ninja_nonmatching_file = ninja_syntax.Writer(open("build.ninja", "w", encoding="utf-8"), width=9999)
        ninja_nonmatching_file.include("rules.ninja")
    else:
        ninja_file = ninja_syntax.Writer(open("build.ninja", "w", encoding="utf-8"), width=9999)
    
    ninja_file.include("rules.ninja")
    
    ninja_rules_file = ninja_syntax.Writer(open("rules.ninja", "w", encoding="utf-8"), width=9999)
    
    ninja_rules_file.rule(
        "as",
        description="as $in",
        command=f"cpp {INCLUDE_PATHS} $in -o  - | {CROSS}as -no-pad-sections -EL -march=5900 -mabi=eabi -Iinclude -o $out",
    )

    ninja_rules_file.rule(
        "cc",
        description="cc $in",
        command=f"{COMPILE_CMD_C} $cflags $in -o $out && {CROSS}strip $out -N dummy-symbol-name",
    )

    ninja_rules_file.rule(
        "cpp",
        description="cpp $in",
        command=f"{COMPILE_CMD_CPP} $cflags $in -o $out && {CROSS}strip $out -N dummy-symbol-name",
    )

    ninja_rules_file.rule(
        "ld",
        description="link $out",
        command=f"{CROSS}ld {LD_ARGS}",
    )

    ninja_rules_file.rule(
        "sha1sum",
        description="sha1sum $in",
        command="sha1sum -c $in && touch $out",
    )

    ninja_rules_file.rule(
        "elf",
        description="elf $out",
        command=f"{CROSS}objcopy $in $out -O binary",
    )
    
    built_match_objects: Set[Path] = set()
    built_objdiff_objects = []
    
    for entry in linker_entries:
        seg = entry.segment

        if seg.type[0] == ".":
            continue

        if entry.object_path is None:
            continue
        
        for o0_split in O0_SPLITS:
            if o0_split == str(entry.src_paths[0]):
                split_optimization = "-O0"
                break
            else:
                split_optimization = "-O2"
        
        split_state = ""
        
        if use_sn_as:
            split_state = "-snas"
            for split in UNCOMPATIBLE_SN_AS_SPLITS:
                if split == str(entry.src_paths[0]):
                    split_state = ""
                    break
        else:
            for split in COMPLETED_SPLITS:
                if split == str(entry.src_paths[0]):
                    split_state = "-snas"
                    break
        
        # Matching file
        match seg.type:
            case "asm" | "data" | "sdata" | "bss" | "sbss" | "rodata" | "databin" | "gcc_except_table" | "textbin":
                ninja_file.build(outputs=str(entry.object_path), rule="as", inputs=str(entry.src_paths[0]), variables={ "cflags": f"{split_optimization}"} )
            case "c":
                ninja_file.build(outputs=str(entry.object_path), rule="cc", inputs=str(entry.src_paths[0]), variables={ "cflags": f"{split_optimization} {split_state}" } )
            case "cpp":
                ninja_file.build(outputs=str(entry.object_path), rule="cpp", inputs=str(entry.src_paths[0]), variables={ "cflags": f"{split_optimization} {split_state}" } )
            case "bin":
                ninja_file.build(outputs=str(entry.object_path), rule="ld", inputs=str(entry.src_paths[0]))
            case _:
                print(f"ERROR: Unsupported build segment type {seg.type}")
                sys.exit(1)
        
        built_match_objects.add(entry.object_path)
        
        if objdiff_mode and not "vutext" in str(entry.object_path) and not "vudata" in str(entry.object_path):
            target_path = re.sub(r"^build", r"target", str(entry.object_path))
            working_path = re.sub(r"^src", r"asm", str(entry.src_paths[0]))
            working_path = re.sub(r"\.cpp", r".s", working_path)
            working_path = re.sub(r"\.c", r".s", working_path)
            
            p = entry.src_paths[0]
            ps = str(p)
            
            if re.search(r"^asm.(data.)?sce", str(entry.src_paths[0])):
                continue

            if re.search(r"^asm", str(p)):
                name = re.sub(r"\.s$", "", str(entry.src_paths[0].relative_to(f"{p.root}asm")))
            else:
                # Raw string required to avoid bad escape sequence warning in Python 3.12
                name = re.sub(r"\.cpp$", "", str(entry.src_paths[0].relative_to(f"{p.root}src")))
                name = re.sub(r"\.c$", "", name)
            
            categories = []
            
            if "src/" in ps:
                if "FGDK3" in ps:
                    categories = ["FGDK3"]
                elif "Dogs" in ps:
                    categories = ["game"]
            elif "asm/data" in ps:
                categories = ["data"]
            
            unit = {
                "name": name,
                "base_path": str(entry.object_path),
                "target_path": target_path,
                "metadata": {
                    "progress_categories": categories,
                    "source_path": str(p) if seg.type == "c" or seg.type == "cpp" else None
                }
            }
            
            built_objdiff_objects.append(unit)
            
            # Objdiff working file
            match seg.type:
                case "asm" | "data" | "sdata" | "bss" | "sbss" | "rodata" | "databin" | "gcc_except_table" | "textbin":
                    ninja_nonmatching_file.build(outputs=str(entry.object_path), rule="as", inputs=str(entry.src_paths[0]), variables={ "cflags": split_optimization } )
                case "c":
                    ninja_nonmatching_file.build(outputs=str(entry.object_path), rule="cc", inputs=str(entry.src_paths[0]), variables={ "cflags": f"{split_optimization} -DSKIP_ASM -DNON_MATCHING" } )
                case "cpp":
                    ninja_nonmatching_file.build(outputs=str(entry.object_path), rule="cpp", inputs=str(entry.src_paths[0]), variables={ "cflags": f"{split_optimization} -snas -DSKIP_ASM -DNON_MATCHING" } )
            
            # Objdiff target file
            ninja_diff_file.build(outputs=target_path, rule="as", inputs=working_path)
            
    
    if objdiff_mode:
        objdiff = {
            "custom_make": "ninja",
            "custom_args": [],
            "build_target": False,
            "build_base": False,
            "units": built_objdiff_objects,
            "progress_categories": [ {"id": id, "name": name} for id, name in CATEGORY_MAP.items() ]
        }
        with open("objdiff.json", "w", encoding="utf-8") as f:
            json.dump(objdiff, f, indent=2)
    
    ninja_file.build(
        PRE_ELF_PATH,
        "ld",
        LD_PATH,
        implicit=[str(obj) for obj in built_match_objects],
        variables={"mapfile": MAP_PATH},
    )

    ninja_file.build(
        ELF_PATH,
        "elf",
        PRE_ELF_PATH,
    )
    
    if not skip_checksum:
        ninja_file.build(
            ELF_PATH + ".ok",
            "sha1sum",
            f"{CONFIG_PATH}/checksum.sha1",
            implicit=[ELF_PATH],
        )
    else:
        print("Skipping checksum step")

COMMENT_PART = r"\/\* (.+) ([0-9A-Z]{2})([0-9A-Z]{2})([0-9A-Z]{2})([0-9A-Z]{2}) \*\/"
INSTRUCTION_PART = r"(\b(vadda\.xyz)\b.*)"
OPCODE_PATTERN = re.compile(f"{COMMENT_PART}  {INSTRUCTION_PART}")

PROBLEMATIC_FUNCS = {
    "func_001F9CD0",
    "func_00234A28",
    "func_00147650",
    "func_00110A08",
    "func_001134A0",
    "func_00113B10",
    "func_00116250",
    "func_0017A110",
    "func_00131970",
    "func_00169B38",
    "func_001E86F8",
    "func_00104DA0",
    "func_0017EBF8",
    "func_002EAD28",
    "func_002EA480",
    "func_002EBFC8",
    "func_002EB508",
    "func_002EB958",
    "func_002E55A8__17TurnFlexAnimation",
    "func_002E3E60",
    "func_002E1680",
    "func_002886B0"
}

def replace_instructions_with_opcodes(asm_folder: Path) -> None:
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
        "-sn_as",
        "--sn_assembler",
        help="Build the entire game and engine using the alternative SN Assembler",
        action="store_true",
    )
    parser.add_argument(
        "-diff",
        "--objdiff",
        help="Create Objdiff's configuration and compiles target object files. Note: the game can still be fully compilable as matching file by using \'ninja -f matching.ninja\'",
        action="store_true",
    )
    args = parser.parse_args()

    do_clean         = (args.clean or args.clean_only) or False
    do_skip_checksum = args.skip_checksum or False
    do_objects       = args.objdiff or False
    use_sn_as        = args.sn_assembler or False

    if do_clean:
        clean()
        if args.clean_only:
            return
    
    
    split.main([YAML_FILE], modes="all", verbose=False, disassemble_all=True, make_full_disasm_for_code=do_objects)
    
    ninja_build(split.linker_writer.entries, do_objects, do_skip_checksum, use_sn_as)
    
    if do_objects:
        subprocess.call(["ninja", "-f", "objdiff.ninja"])
    
    if use_sn_as:
        replace_instructions_with_opcodes(split.config["options"]["asm_path"])

if __name__ == "__main__":
    main()
