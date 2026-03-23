#include "common.h"

#include "Dogs/SoundCreature.h"

#ifdef NON_MATCHING
extern ClassInfo* D_0044DA08;
SoundCreature::SoundCreature(ClassInfo* arg1, SimObj_Universe* arg2, int arg3, short arg4) : SimObject(arg1 = 0, arg2, arg3, arg4) {
    if (arg1 != 0) {
        D_0044DA08 = arg1;
    }
    this->unk110 = 0;
    this->unk114 = 0;
    this->unk120 = 0;
    this->unk124 = 0;
    this->unk134 = 0;
    this->unk138 = 0;
    if (arg1 == NULL) {
        D_0044DA08->unk4 = 1;
    }
}
#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SoundCreature", __13SoundCreatureP9ClassInfoP15SimObj_Universeis);
#endif

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SoundCreature", _$_13SoundCreature);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SoundCreature", func_00173318);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SoundCreature", func_00173588);
// vtables
INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/SoundCreature", D_003C7818);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/SoundCreature", D_003C7830);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/SoundCreature", D_003C7848);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SoundCreature", func_00173718);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SoundCreature", __tf13SoundCreature);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SoundCreature", func_001738B0); /* return D_0044DA08; */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SoundCreature", func_001738B8);


