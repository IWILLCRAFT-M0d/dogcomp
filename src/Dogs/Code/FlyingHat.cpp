#include "common.h"

#include "Dogs/FlyingHat.h"

extern ClassInfo* D_0044CFB8;

#ifdef NON_MATCHING
FlyingHat::FlyingHat(ClassInfo* arg1, SimObj_Universe* arg2, int arg3, short arg4) : SmallThing(arg1 = 0, arg2, arg3, arg4) {
    if (arg1 != 0) {
        D_0044CFB8 = arg1;
    }

    this->unk700 = 0;
    this->unk704 = 0;

    if (arg1 == NULL) {
        D_0044CFB8->unk4 = 1;
    }
}
#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/FlyingHat", __9FlyingHatP9ClassInfoP15SimObj_Universeis);
#endif

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/FlyingHat", _$_9FlyingHat);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/FlyingHat", func_0013C518__9FlyingHat);
/*
void FlyingHat::func_0013C518() {
    this->unk700 = 1;
}
*/
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/FlyingHat", func_0013C528__9FlyingHat);
/*
void FlyingHat::func_0013C528() {
    this->unk700 = 0;
}
*/
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/FlyingHat", func_0013C530);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/FlyingHat", func_0013C570);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/FlyingHat", func_0013CAD8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/FlyingHat", func_0013CC20);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/FlyingHat", D_003A9FD0);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/FlyingHat", D_003A9FE8);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/FlyingHat", D_003AA010);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/FlyingHat", D_003AA030);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/FlyingHat", D_003AA048);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/FlyingHat", D_003AA060);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/FlyingHat", D_003AA078);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/FlyingHat", D_003AA090);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/FlyingHat", D_003AB2B0);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/FlyingHat", D_003AB2F0);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/FlyingHat", D_003AB308);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/FlyingHat", D_003AB320);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/FlyingHat", func_0013CC88);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/FlyingHat", func_0013CDC8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/FlyingHat", func_0013CDF0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/FlyingHat", __tf9FlyingHat);

ClassInfo* FlyingHat::func_0013CE70() {
    return D_0044CFB8;
}

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/FlyingHat", func_0013CE78);
