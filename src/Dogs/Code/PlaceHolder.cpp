#include "common.h"

#include "Dogs/PlaceHolder.h"

extern ClassInfo* D_0044D348;

#ifdef NON_MATCHING

PlaceHolder::PlaceHolder(ClassInfo* arg1, SimObj_Universe* arg2, int arg3, short arg4) : WorldObject(arg1 = 0, arg2, arg3, arg4) {
    if (arg1 != 0) {
        D_0044D348 = arg1;
    }

    if (arg1 == 0) {
        D_0044D348->unk4 = 1;
    }
}
#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/PlaceHolder", __11PlaceHolderP9ClassInfoP15SimObj_Universeis);
#endif

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/PlaceHolder", func_0014D138);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/PlaceHolder", func_0014D160);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/PlaceHolder", D_003B3740);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/PlaceHolder", D_003B3768);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/PlaceHolder", D_003B3788);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/PlaceHolder", D_003B37A0);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/PlaceHolder", D_003B37B8);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/PlaceHolder", D_003B37D0);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/PlaceHolder", D_003B37E8);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/PlaceHolder", D_003B4A08);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/PlaceHolder", D_003B4A48);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/PlaceHolder", D_003B4A60);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/PlaceHolder", D_003B4A78);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/PlaceHolder", func_0014D1B0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/PlaceHolder", _$_11PlaceHolder);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/PlaceHolder", __tf11PlaceHolder);

ClassInfo* PlaceHolder::func_0014D3E8() {
    return D_0044D348;
}

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/PlaceHolder", func_0014D3F0);
