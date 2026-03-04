#include "common.h"

#include "Dogs/Smell.h"

#ifdef NON_MATCHING
extern ClassInfo* D_0044D968;
Smell::Smell(ClassInfo* arg1, SimObj_Universe* arg2, int arg3, short arg4) : SimObject(arg1 = 0, arg2, arg3, arg4) {
    if (arg1 != 0) {
        D_0044D968 = arg1;
    }
    this->unk110 = 0xFFFF;
    this->unk114 = 0;
    this->unk118 = 0;
    this->unk134 = 0;

    if (arg1 == 0) {
        D_0044D968->unk4 = 1;
    }
}
#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Smell", __5SmellP9ClassInfoP15SimObj_Universeis);
#endif

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Smell", _$_5Smell);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Smell", func_00171470);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Smell", func_00171490);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Smell", func_00171548);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Smell", func_001715C0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Smell", func_00171AC8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Smell", func_001721A8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Smell", func_00172870);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Smell", func_00172890);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Smell", __tf5Smell);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Smell", func_00172A28); /* return D_0044D968 */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Smell", func_00172A30);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Smell", D_003C5C38);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Smell", D_003C5C50);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Smell", D_003C5C68);

