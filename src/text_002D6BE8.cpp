#include "common.h"
#include "debug.h"
#include "unk.h"

#include <stdio.h>
#include <string.h>

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D6BE8);

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D6C40);
// this->unk0 = 1;
// this->unk4 = strlen(str);

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D6CB8);

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D6D50);

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D6DE8);

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D6E68);

#ifdef NON_MATCHING
string_ascii::string_ascii(const char* str) {
    // this->unk0 = new func_002D6C40(str);
}
#else
INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D6EA8); // RCT3 string_ascii::string_ascii(char const*) ?
#endif


INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D6EF0); // loading thing (contents?)

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D6F48);

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D6FE0);

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D7050);

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D70C0);

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D7178);

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D7228);

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D72D0);

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D73A0);

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D7448);

void func_002D74F8() {
    return;
}

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D7500);

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D75F0);

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D76D0);

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D76E8);

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D7710);

INCLUDE_RODATA("asm/nonmatchings/text_002D6BE8", D_00443B70); /* "0123456789abcdefghijklmnopqrstuvwxyz" */

#ifdef NON_MATCHING
// getTarget?
char* func_002D7738(int arg0) {
    switch (arg0) {
    case 0:
        //return &D_00452A28;
        return "Windows";
    case 1:
        //return &D_00452A30;
        return "PS2";
    case 2:
        //return &D_00452A38;
        return "Xbox";
    case 3:
        // D_00443b98
        return "GameCube";
    default:
        // D_00443ba8
        return "unknown_target";
    }
}

#else
INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D7738);
#endif

int func_002D77A8(char* arg0) {
    int var_16;

    var_16 = 0;
loop_1:
    if (strcasecmp(arg0, func_002D7738(var_16)) != 0) {
        var_16 += 1;
        if (var_16 >= 4) {
            return 4;
        }
        goto loop_1;
    }
    return var_16;
}

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D7808);

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D78D0); /* Endian::Endian */

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", _$_6Endian);

void Endian::func_002D7980(void) {
    return;
}

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D7988);

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D7998);

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D79A0);

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D7A18);

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D7A28);

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D7A78);

// split for Endian?
INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D7AB8);

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D7BD8);

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D7C20);

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D7F28);

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D7F70);

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D8100);

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D8148);

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D8178);

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D81C0); // in endian.cpp

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D84C8);

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D8510);

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D8538);

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D8588);

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D8630);

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D8680);

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D8700);

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D8750); // in Endian.cpp

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D87E0);

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", _$_16Endian_ExpandMem);

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D88A8);

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D89A8);

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D8AA0);

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", _$_11EndianFile);

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D8B48);

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D8BB8);

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D8CA0);

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D8D28);

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D8DB8);

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D9010);

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D9090);

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D9148);

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D91C8);

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", __tf6Endian);

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D9250);

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D9258);

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D9260);

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D9268);

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D9270);

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", _$_10Endian_Mem);

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", __tf10Endian_Mem);

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D9308);

INCLUDE_RODATA("asm/nonmatchings/text_002D6BE8", D_00443BB8); /* "c:/coding/fgdk3/Code/Common/Endian.cpp" */

INCLUDE_RODATA("asm/nonmatchings/text_002D6BE8", _vt$29Endian_GentleModificationFile);

INCLUDE_RODATA("asm/nonmatchings/text_002D6BE8", _vt$11EndianFile);

INCLUDE_RODATA("asm/nonmatchings/text_002D6BE8", _vt$16Endian_ExpandMem);

INCLUDE_RODATA("asm/nonmatchings/text_002D6BE8", _vt$10Endian_Mem);

INCLUDE_RODATA("asm/nonmatchings/text_002D6BE8", _vt$6Endian);

INCLUDE_RODATA("asm/nonmatchings/text_002D6BE8", D_00443D70); /* "10Endian_Mem" */

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", __tf16Endian_ExpandMem);

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D93C0);

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D93C8);

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D93D8);

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", __tf11Endian_File);

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D9468);

INCLUDE_RODATA("asm/nonmatchings/text_002D6BE8", D_00443D98); /* "11Endian_File" */

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", __tf29Endian_GentleModificationFile);

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D9520);

INCLUDE_ASM("asm/nonmatchings/text_002D6BE8", func_002D9540);
