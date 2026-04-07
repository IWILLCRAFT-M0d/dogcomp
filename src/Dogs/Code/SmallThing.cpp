#include "common.h"

#include "Dogs/SmallThing.h"

extern ClassInfo* D_0044D910;

#ifdef NON_MATCHING
SmallThing::SmallThing(ClassInfo* arg1, SimObj_Universe* arg2, int arg3, short arg4) : HitTri_Object(arg1 = 0, arg2, arg3, arg4) {
    if (arg1 != 0) {
        D_0044D910 = arg1;
    }
    this->unk5F0 = 0;
    //
    this->unk690 = 0;
    this->unk694 = 0;
    this->unk698 = 0;
    this->unk69C = 0;
    this->unk6A0 = 0;
    this->unk6A4 = 0;
    this->unk6A8 = 0;
    this->unk6AC = 0;
    this->unk6B0 = 0;
    this->unk6B4 = 0;
    this->unk6B8 = 0;
    this->unk6BC = 0;
    this->unk6C0 = 0;
    this->unk6C4 = 0;
    this->unk6F0 = 0;
    this->unk6F4 = 0;
    this->unk6F8 = 0;

    if (arg1 == NULL) {
        D_0044D910->unk4 = 1;
    }

    //
}
#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SmallThing", __10SmallThingP9ClassInfoP15SimObj_Universeis);
#endif

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SmallThing", _$_10SmallThing);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SmallThing", func_0016DB80); // SmallThing member

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SmallThing", func_0016DCD0__10SmallThing);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SmallThing", func_0016E1A0); // SmallThing virtual

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SmallThing", func_0016E388__10SmallThing);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SmallThing", func_0016E458);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SmallThing", func_0016E488);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SmallThing", func_0016E490); // "Too many points being constrained - arrays will overflow and matrix won\'t solve!"

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SmallThing", func_0016EDF0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SmallThing", func_0016FAF0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SmallThing", func_0016FB10);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SmallThing", func_0016FB48);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SmallThing", func_0016FD80);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SmallThing", func_0016FFA8);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/SmallThing", D_003C43B8); /* "No watersplash manager in level! Splashes will not occur.\n" */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SmallThing", func_00170008);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SmallThing", func_00170F38);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SmallThing", func_00171030);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/SmallThing", D_003C4438);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/SmallThing", D_003C4450);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/SmallThing", D_003C4478);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/SmallThing", D_003C4498);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/SmallThing", D_003C44B0);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/SmallThing", D_003C44C8);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/SmallThing", D_003C44E0);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/SmallThing", D_003C44F8);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/SmallThing", D_003C5718);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/SmallThing", D_003C5758);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/SmallThing", D_003C5770);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/SmallThing", D_003C5788);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SmallThing", func_00171050);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SmallThing", func_00171190);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SmallThing", func_001711B8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SmallThing", func_001711E0); /* __tf21SimObj_RayHitReceiver */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SmallThing", __tf10SmallThing);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SmallThing", func_00171288);

ClassInfo* SmallThing::func_00171290() {
    return D_0044D910;
}

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SmallThing", func_00171298);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SmallThing", func_001712B8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SmallThing", func_00171308);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SmallThing", func_00171348);

