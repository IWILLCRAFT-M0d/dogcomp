#include "common.h"

#include "Dogs/Slidable.h"

extern ClassInfo* D_0044D8B0;

#ifdef NON_MATCHING
Slidable::Slidable(ClassInfo* arg1, SimObj_Universe* arg2, int arg3, short arg4) : WorldObject(arg1 = 0, arg2, arg3, arg4) {
    if (arg1 != 0) {
        D_0044D8B0 = arg1;
    }

    //
    this->unk5F0 = 0;
    this->unk610 = 0xFFFF;
    this->unk618 = -1.0f;
    this->unk624 = -1;
    this->unk5C0 = 0;
    this->unk5C4 = 0;
    this->unk5C8 = 0;
    this->unk5D0 = 0;
    this->unk614 = -1.0f;
    this->unk61C = 0;
    this->unk620 = 0;

    if (arg1 == 0) {
        D_0044D8B0->unk4 = 1;
    }

}
#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Slidable", __8SlidableP9ClassInfoP15SimObj_Universeis);
#endif

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Slidable", _$_8Slidable);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Slidable", D_003C2900);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Slidable", D_003C2928);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Slidable", D_003C2958);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Slidable", func_0016BFD8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Slidable", func_0016C2E8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Slidable", func_0016C320);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Slidable", func_0016C340);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Slidable", func_0016CB18);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Slidable", func_0016CD80);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Slidable", func_0016CE50);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Slidable", func_0016CF38);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Slidable", func_0016CF80);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Slidable", func_0016D068);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Slidable", func_0016D168);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Slidable", func_0016D358);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Slidable", func_0016D3C0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Slidable", func_0016D6A8);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Slidable", D_003C2B00);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Slidable", D_003C2B28);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Slidable", D_003C2B48);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Slidable", D_003C2B60);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Slidable", D_003C2B78);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Slidable", D_003C2B90);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Slidable", D_003C2BA8);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Slidable", D_003C3C3C);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Slidable", D_003C3DC8);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Slidable", D_003C3E08);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Slidable", D_003C3E20);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Slidable", D_003C3E38);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Slidable", func_0016D730);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Slidable", __tf8Slidable);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Slidable", func_0016D8C8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Slidable", func_0016D8D0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Slidable", func_0016D8E0);

ClassInfo* Slidable::func_0016D8E8() {
    return D_0044D8B0;
}

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Slidable", func_0016D8F0);

