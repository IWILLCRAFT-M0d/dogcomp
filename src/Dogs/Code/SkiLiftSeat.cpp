#include "common.h"

#include "Dogs/SkiLiftSeat.h"

#ifdef NON_MATCHING
SkiLiftSeat::SkiLiftSeat(ClassInfo* arg1, SimObj_Universe* arg2, int arg3, short arg4) : WorldObject(arg1 = 0, arg2, arg3, arg4) {
    this->unk5C4 = 10;

    this->unk5F0 = 2700.0f;
    this->unk5F4 = 1000.0f;

}
#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SkiLiftSeat", __11SkiLiftSeatP9ClassInfoP15SimObj_Universeis); /* SkiLiftSeat::SkiLiftSeat */
#endif

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SkiLiftSeat", _$_11SkiLiftSeat);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SkiLiftSeat", func_0016B110);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SkiLiftSeat", func_0016B238);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SkiLiftSeat", func_0016B290);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SkiLiftSeat", func_0016B2B0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SkiLiftSeat", func_0016B2D8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SkiLiftSeat", func_0016B480);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SkiLiftSeat", func_0016B4A8);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/SkiLiftSeat", D_003C1220);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/SkiLiftSeat", D_003C1248);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/SkiLiftSeat", D_003C1268);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/SkiLiftSeat", D_003C1280);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/SkiLiftSeat", D_003C1298);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/SkiLiftSeat", D_003C12B0);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/SkiLiftSeat", D_003C12C8);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/SkiLiftSeat", D_003C24E8);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/SkiLiftSeat", D_003C2528);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/SkiLiftSeat", D_003C2540);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/SkiLiftSeat", D_003C2558);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SkiLiftSeat", func_0016BB90);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SkiLiftSeat", func_0016BCD0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SkiLiftSeat", __tf11SkiLiftSeat);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SkiLiftSeat", func_0016BD50);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SkiLiftSeat", func_0016BD58); /* return D_0044D868 */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SkiLiftSeat", func_0016BD60);
