#include "common.h"

#include "Dogs/Motorbike.h"

#ifdef NON_MATCHING
extern ClassInfo* D_0044D1C0;
Motorbike::Motorbike(ClassInfo* arg1, SimObj_Universe* arg2, int arg3, short arg4) : WheeledVehicle(2, arg1, arg2, arg3, arg4) {
    if (arg1 != 0) {
        D_0044D1C0 = arg1;
    }

    if (arg1 == 0) {
        D_0044D1C0->unk4 = 1;
    }

    //
}
#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Motorbike", __9MotorbikeP9ClassInfoP15SimObj_Universeis);
#endif

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Motorbike", _$_9Motorbike);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Motorbike", func_00143220);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Motorbike", func_00143258); // "Unknown extra for Motorbike"

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Motorbike", func_001432D8); // wheel animation?

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Motorbike", func_00144350__9Motorbikef); // movement?
// vtables
INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Motorbike", D_003AE180);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Motorbike", D_003AE198);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Motorbike", D_003AE1C0);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Motorbike", D_003AE1E0);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Motorbike", D_003AE1F8);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Motorbike", D_003AE210);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Motorbike", D_003AE228);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Motorbike", D_003AE240);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Motorbike", D_003AF460);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Motorbike", D_003AF4A0);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Motorbike", D_003AF4B8);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Motorbike", D_003AF4D0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Motorbike", func_001449E0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Motorbike", func_00144B20);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Motorbike", __tf9Motorbike);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Motorbike", func_00144BA0); /* return D_0044D1C0 */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Motorbike", func_00144BA8);

