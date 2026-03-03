#include "common.h"

#include "Dogs/Selector.h"

#ifdef NON_MATCHING
extern ClassInfo* D_0044D708;
Selector::Selector(ClassInfo* arg1, SimObj_Universe* arg2, int arg3, short arg4) : WorldObject(arg1 = 0, arg2, arg3, arg4) {
    if (arg1 != 0) {
        D_0044D708 = arg1;
    }

    this->unk5C0 = 1;
    this->unk5C4 = 0;
    this->unk5C8 = 0;
    this->unk5CC = 0;

    if (arg1 == 0) {
        D_0044D708->unk4 = 1;
    }

}
#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Selector", __8SelectorP9ClassInfoP15SimObj_Universeis); /* Selector::Selector */
#endif

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Selector", _$_8Selector);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Selector", func_00160560);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Selector", func_00160738);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Selector", func_00160758);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Selector", func_00160778);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Selector", func_00160B68);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Selector", func_00160D10);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Selector", D_003BD2F8);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Selector", D_003BD320);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Selector", D_003BD350);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Selector", D_003BD3B0);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Selector", D_003BD3D8);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Selector", D_003BD3F8);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Selector", D_003BD410);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Selector", D_003BD428);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Selector", D_003BD440);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Selector", D_003BD458);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Selector", D_003BE678);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Selector", D_003BE6B8);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Selector", D_003BE6D0);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Selector", D_003BE6E8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Selector", func_00160D20);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Selector", func_00160FB8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Selector", __tf8Selector);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Selector", func_00161038);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Selector", func_00161040);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Selector", func_00161060);

