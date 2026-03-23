#include "common.h"

#include "Dogs/Car.h"

extern ClassInfo* D_0044CC80;

#ifdef NON_MATCHING
Car::Car(ClassInfo* arg1, SimObj_Universe* arg2, int arg3, short arg4) : WheeledVehicle(4, arg1 = 0, arg2, arg3, arg4) {
    if (arg1 != 0) {
        D_0044CC80 = arg1;
    }

    if (arg1 == NULL) {
        D_0044CC80->unk4 = 1;
    }

    //
}
#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Car", __3CarP9ClassInfoP15SimObj_Universeis);
#endif

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Car", _$_3Car);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Car", func_00123298__3Car);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Car", func_00123C28); // "Unknown extra for Car"

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Car", func_00123CA8__3Carf);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Car", func_00124900__3Carf);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Car", func_00124D10);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Car", func_00124E50);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Car", __tf3Car);

ClassInfo* Car::func_00124ED0(){
    return D_0044CC80;
}

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Car", func_00124ED8);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Car", D_003A04A8);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Car", D_003A04B8);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Car", D_003A04D0);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Car", D_003A04F8);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Car", D_003A0518);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Car", D_003A0530);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Car", D_003A0548);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Car", D_003A0560);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Car", D_003A0578);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Car", D_003A0824);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Car", D_003A1798);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Car", D_003A17D8);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Car", D_003A17F0);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Car", D_003A1808);
