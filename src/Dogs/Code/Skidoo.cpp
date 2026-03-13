#include "common.h"

#include "Dogs/Skidoo.h"

#ifdef NON_MATCHING
extern ClassInfo* D_0044D820;
Skidoo::Skidoo(ClassInfo* arg1, SimObj_Universe* arg2, int arg3, short arg4) : WheeledVehicle(3, arg1 = 0, arg2, arg3, arg4) {
    if (arg1 != 0) {
        D_0044D820 = arg1;
    }

    if (arg1 == 0) {
        D_0044D820->unk4 = 1;
    }

    //
}
#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Skidoo", __6SkidooP9ClassInfoP15SimObj_Universeis);
#endif

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Skidoo", _$_6Skidoo);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Skidoo", func_00169478__6Skidoo);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Skidoo", func_00169498); // "Unknown extra for Skidoo"

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Skidoo", func_00169518);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Skidoo", func_00169698);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Skidoo", func_00169B38);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Skidoo", func_0016A950);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Skidoo", func_0016ACF8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Skidoo", func_0016AE38);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Skidoo", __tf6Skidoo);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Skidoo", func_0016AEB8__6Skidoo); /* return D_0044D820 */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Skidoo", func_0016AEC0);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Skidoo", D_003BFA50);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Skidoo", D_003BFA80);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Skidoo", D_003BFA98);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Skidoo", D_003BFAC0);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Skidoo", D_003BFAE0);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Skidoo", D_003BFAF8);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Skidoo", D_003BFB10);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Skidoo", D_003BFB28);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Skidoo", D_003BFB40);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Skidoo", D_003C0D60);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Skidoo", D_003C0DA0);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Skidoo", D_003C0DB8);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Skidoo", D_003C0DD0);
