#include "common.h"

#include "Dogs/Fish.h"

extern ClassInfo* D_0044CF60;

#ifdef NON_MATCHING
Fish::Fish(ClassInfo* arg1, SimObj_Universe* arg2, int arg3, short arg4) : WorldObject(arg1 = 0, arg2, arg3, arg4) {
    if (arg1 != 0) {
        D_0044CF60 = arg1;
    }
    this->unk5F0 = 1500.0;
    this->unk5F4 = 1000.0;
    this->unk600 = 0;
    this->unk5D0 = 0;
    this->unk5D4 = 1;
    this->unk5D8 = 0;
    this->unk5F8 = 0;
    this->unk5FC = 0;
    if (arg1 == 0) {
        D_0044CF60->unk4 = 1;
    }
}
#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Fish", __4FishP9ClassInfoP15SimObj_Universeis);
#endif

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Fish", _$_4Fish);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Fish", func_0013B440__4Fish); // "Fish can\'t find the surface of the water!"

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Fish", func_0013B550);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Fish", func_0013B570__4Fish); // fish rendering?

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Fish", func_0013B590); // fish movement?

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Fish", func_0013B640);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Fish", func_0013B790); // "Making fish jump when its out of water!"

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Fish", func_0013BDE8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Fish", func_0013BE70); // fish jump?

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Fish", func_0013BEB0);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Fish", D_003A87DC);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Fish", D_003A8808);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Fish", D_003A8830);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Fish", D_003A8850);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Fish", D_003A8868);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Fish", D_003A8880);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Fish", D_003A8898);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Fish", D_003A88B0);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Fish", D_003A9AD0);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Fish", D_003A9B10);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Fish", D_003A9B28);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Fish", D_003A9B40);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Fish", func_0013BF40);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Fish", func_0013C1E8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Fish", __tf4Fish);

ClassInfo* Fish::func_0013C290() {
    return D_0044CF60;
}

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Fish", func_0013C298);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Fish", func_0013C2B8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Fish", func_0013C308);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Fish", func_0013C348);
