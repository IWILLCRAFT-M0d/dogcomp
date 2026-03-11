#include "common.h"

#include "Dogs/SwingBridge.h"

#ifdef NON_MATCHING
extern ClassInfo* D_0044DAB8;
SwingBridge::SwingBridge(ClassInfo* arg1, SimObj_Universe* arg2, int arg3, short arg4) : HitTri_Object(arg1 = 0, arg2, arg3, arg4) {
    if (arg1 != 0) {
        D_0044DAB8 = arg1;
    }

    this->unk600 = 360.0f;
    this->unk5F0 = 0;
    this->unk5F4 = 0;
    this->unk5F8 = 0.0f;
    this->unk5FC = 0.0f;
    this->unk604 = 0.0f;

    if (arg1 == 0) {
        D_0044DAB8->unk4 = 1;
    }
}
#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SwingBridge", __11SwingBridgeP9ClassInfoP15SimObj_Universeis);
#endif

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SwingBridge", _$_11SwingBridge);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SwingBridge", func_00177950); // SwingBridge member

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SwingBridge", func_001779C0); // SwingBridge member

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SwingBridge", func_001779E0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SwingBridge", func_001780F0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SwingBridge", func_001782A0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SwingBridge", func_001782F8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SwingBridge", func_00178368);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SwingBridge", func_001783D8);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/SwingBridge", D_003C9558);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/SwingBridge", D_003C9570);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/SwingBridge", D_003C9598);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/SwingBridge", D_003C95B8);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/SwingBridge", D_003C95D0);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/SwingBridge", D_003C95E8);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/SwingBridge", D_003C9600);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/SwingBridge", D_003C9618);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/SwingBridge", D_003CA838);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/SwingBridge", D_003CA878);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/SwingBridge", D_003CA890);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/SwingBridge", D_003CA8A8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SwingBridge", func_00178460);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SwingBridge", func_001785A0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SwingBridge", __tf11SwingBridge);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SwingBridge", func_00178620);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SwingBridge", func_00178630); /* return D_0044DAB8 */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SwingBridge", func_00178638);
