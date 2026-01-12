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
INCLUDE_PATHS        = "-Iinclude -I include/MultiStream -I include/ee_gcc -I include/ee -I include/ee_gcc/gcc-lib -I include/ee_gcc/machine -I include/ee_gcc/sys -I include/common -I include/Dogs"
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
    "game": "Main",
    "data": "Data",
    "FGDK3": "Engine"
}

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

def ninja_build(linker_entries: List[LinkerEntry], objdiff_mode: bool, skip_checksum: bool):

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
        
        match str(entry.src_paths[0]):
            case "src/FGDK3/Code/Playstation2/Music.cpp" | "src/FGDK3/Code/Playstation2/GameShell.cpp" | "src/text_002FCF70.cpp":
                split_optimization = "-O0"
            case _:
                split_optimization = "-O2"
        
        # Matching file
        match seg.type:
            case "asm" | "data" | "sdata" | "bss" | "sbss" | "rodata" | "databin" | "gcc_except_table" | "textbin":
                ninja_file.build(outputs=str(entry.object_path), rule="as", inputs=str(entry.src_paths[0]), variables={ "cflags": split_optimization} )
            case "c":
                ninja_file.build(outputs=str(entry.object_path), rule="cc", inputs=str(entry.src_paths[0]), variables={ "cflags": split_optimization } )
            case "cpp":
                ninja_file.build(outputs=str(entry.object_path), rule="cpp", inputs=str(entry.src_paths[0]), variables={ "cflags": split_optimization } )
            case "bin":
                ninja_file.build(outputs=str(entry.object_path), rule="ld", inputs=str(entry.src_paths[0]))
            case _:
                print(f"ERROR: Unsupported build segment type {seg.type}")
                sys.exit(1)
        
        built_match_objects.add(entry.object_path)
        
        if objdiff_mode:
            
            target_path = re.sub(r"^build", r"target", str(entry.object_path))
            working_path = re.sub(r"^src", r"asm", str(entry.src_paths[0]))
            working_path = re.sub(r"\.cpp", r".s", working_path)
            working_path = re.sub(r"\.c", r".s", working_path)
            
            p = entry.src_paths[0]
            
            if re.search("^asm", str(entry.src_paths[0])):
                name = re.sub(".s", "", str(entry.src_paths[0].relative_to(f"{p.root}asm")))
            else:
                # Raw string required to avoid bad escape sequence warning in Python 3.12
                name = re.sub(r"\.cpp", "", str(entry.src_paths[0].relative_to(f"{p.root}src")))
                name = re.sub(r"\.c", "", name)
            
            if "src/" in str(entry.src_paths[0]):
                categories = ["game"]
                if "FGDK3" in str(entry.src_paths[0]):
                    categories += ["FGDK3"]
            elif "asm/data" in str(entry.src_paths[0]):
                categories = ["data"]
            
            unit = {
                "name": name,
                "base_path": str(entry.object_path),
                "target_path": target_path,
                "metadata": {
                    "progress_categories": categories,
                    "source_path": str(entry.src_paths[0])
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
            match seg.type:
                case "asm" | "data" | "sdata" | "bss" | "sbss" | "rodata" | "databin" | "gcc_except_table" | "textbin":
                    ninja_diff_file.build(outputs=target_path, rule="as", inputs=str(entry.src_paths[0]), variables={ "cflags": split_optimization } )
                case "c":
                    ninja_diff_file.build(outputs=target_path, rule="cc", inputs=str(entry.src_paths[0]), variables={ "cflags": split_optimization } )
                case "cpp":
                    ninja_diff_file.build(outputs=target_path, rule="cpp", inputs=str(entry.src_paths[0]), variables={ "cflags": split_optimization } )
            
            
            # # Replace previous code with this when Splat fixes the issue with target asm generation
            # # Objdiff working file
            # match seg.type:
            #     case "asm" | "data" | "sdata" | "bss" | "sbss" | "rodata" | "databin" | "gcc_except_table" | "textbin":
            #         ninja_nonmatching_file.build(outputs=str(entry.object_path), rule="as", inputs=str(entry.src_paths[0]), variables={ "cflags": split_optimization } )
            #     case "c":
            #         ninja_nonmatching_file.build(outputs=str(entry.object_path), rule="cc", inputs=str(entry.src_paths[0]), variables={ "cflags": f"{split_optimization} -DSKIP_ASM -DNON_MATCHING" } )
            #     case "cpp":
            #         ninja_nonmatching_file.build(outputs=str(entry.object_path), rule="cpp", inputs=str(entry.src_paths[0]), variables={ "cflags": f"{split_optimization} -snas -DSKIP_ASM -DNON_MATCHING" } )
            # 
            # # Objdiff target file
            # ninja_diff_file.build(outputs=target_path, rule="as", inputs=working_path)
            
    
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
        "func_002A8320",
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
        "SOUND_MemFree",
        "func_00291110",
        
        
        # text_00290D10.cpp
        "func_0029A198",
        "func_002AA498",
        "func_0029D728",
        "func_002AA978",
        "func_002AADF8",
        "func_002AB278",
        "func_002AB778",
        "func_002ABAE8",
        "func_002AE070",
        "func_002AF090",
        "func_002B1F40",
        "func_002B71E8",
        "func_002B9288",
        "func_002B9688",
        "func_002C0460",
        "func_002C0900",
        "func_002C3F98",
        "func_002CA090",
        
        # text_002D0150.cpp
        "func_002F7A78",
        "Controller_InternalInitialise__Fv",
        "func_0030A4C8",
        "func_00318BF8",
        "func_00319C28",
        "func_00327B78",
        "sceGsExecStoreImage",
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
        "func_0031CEA8",
        "func_0031D298",
        "func_0032F0E0",
        "memmove",
        "memset",
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
        help="Create Objdiff's configuration and compiles target object files. Note: the game can still be fully compilable as matching file by using \'ninja -f matching.ninja\'",
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
    
    
    split.main([YAML_FILE], modes="all", verbose=False, disassemble_all=True, make_full_disasm_for_code=False)
    
    # An issue at the moment of generating the target assembly makes impossible for now
    # to generate the target objects correctly
    ninja_build(split.linker_writer.entries, do_objects, do_skip_checksum)
    
    if do_objects:
        subprocess.call(["ninja", "-f", "objdiff.ninja"])
    
    replace_instructions_with_opcodes(split.config["options"]["asm_path"])
    

if __name__ == "__main__":
    main()
