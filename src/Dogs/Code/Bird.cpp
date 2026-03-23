#include "common.h"

#include "Dogs/Bird.h"

extern ClassInfo* D_0044C848; // s_classInfo?

#ifdef NON_MATCHING
Bird::Bird(ClassInfo* arg1, SimObj_Universe* arg2, int arg3, short arg4) : WorldObject(arg1 = 0, arg2, arg3, arg4) {
    if (arg1 != 0) {
        D_0044C848 = arg1;
    }

    //
    this->unk648 = 0;
    this->unk64C = 50;
    this->unk650 = 0;
    this->unk654 = 0;
    this->unk670 = 0;
    this->unk674 = 0;

    if (arg1 == NULL) {
        D_0044C848->unk4 = 1;
    }
}
#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Bird", __4BirdP9ClassInfoP15SimObj_Universeis);
#endif

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Bird", func_00106340); // Bird member

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Bird", func_001063A8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Bird", func_00106410__4Birdf);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Bird", func_00106528__4Birdf);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Bird", func_00106F30__4Bird);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Bird", func_00106F68__4Birdf);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Bird", func_00106F88__4Birdf);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Bird", func_00106FD0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Bird", func_00107040);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Bird", func_00107060);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Bird", func_00107080);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Bird", func_00107098);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Bird", func_001070A0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Bird", func_00107158);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Bird", func_001071A8);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Bird", D_003978D8);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Bird", D_003978F0);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Bird", _vt$17PHitPrimDisplayer);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Bird", D_00397928);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Bird", D_00397950);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Bird", D_00397970);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Bird", D_00397988);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Bird", D_003979A0);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Bird", D_003979B8);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Bird", D_003979D0);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Bird", D_00398BF0);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Bird", D_00398C30);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Bird", D_00398C48);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Bird", D_00398C60);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Bird", D_00398F18);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Bird", __tf21SimObj_RayHitReceiver);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Bird", _$_4Bird);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Bird", __tf4Bird);

ClassInfo* Bird::func_00107430() {
    return D_0044C848;
}

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Bird", __tf17PHitPrimDisplayer);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Bird", func_00107488);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Bird", func_001074C0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Bird", func_00107520);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Bird", func_00107588);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Bird", D_00398F80);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Bird", func_001076B0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Bird", func_00107700);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Bird", func_00107740);
