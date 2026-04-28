#include "common.h"

#include "Dogs/Basket.h"

extern ClassInfo* D_0044C7F8;

#ifdef NON_MATCHING
Basket::Basket(ClassInfo* arg1, SimObj_Universe* arg2, int arg3, short arg4) : Container(arg1 = 0, arg2, arg3, arg4) {
    if (arg1 != 0) {
        D_0044C7F8 = arg1;
    }

    this->unk620 = 0;
    this->unk628 = 0;
    this->unk660 = 0;
}
#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Basket", __6BasketP9ClassInfoP15SimObj_Universeis);
#endif

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Basket", func_00104CC0); // Basket member

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Basket", func_00104CE8__6Basket);

int Basket::func_00104D78() {
    return 100;
}

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Basket", func_00104D80__6Basket);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Basket", func_00104DA0); // Basket member

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Basket", func_001057C0); // Basket virtual
// func_002D5B40("its triggering from bottom")

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Basket", func_00105998);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Basket", func_001059D0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Basket", func_00105A50);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Basket", func_00105C10); // Basket member

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Basket", func_00105C98); // Basket member

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Basket", func_00105D10); // Basket member

#ifdef NON_MATCHING
void Basket::func_00105DF8() {
    //func_00186BF0
    this->unk628 = false;
    this->unk620 = false;
}
#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Basket", func_00105DF8__6Basket);
#endif

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Basket", func_00105E28); // min<float> ?
// vtables
INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Basket", D_003960E8);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Basket", D_00396100);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Basket", D_00396128);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Basket", D_00396148);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Basket", D_00396160);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Basket", D_00396178);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Basket", D_00396190);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Basket", D_003961A8);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Basket", D_003973C8);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Basket", D_00397408);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Basket", D_00397420);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Basket", D_00397438);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Basket", D_00397708);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Basket", func_00105E48);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Basket", func_00105FC8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Basket", __tf9Basket_IF);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Basket", _$_6Basket);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Basket", __tf6Basket);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Basket", func_00106190);

ClassInfo* Basket::func_00106198() {
    return D_0044C7F8;
}

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Basket", D_00397730);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Basket", D_00397740);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Basket", __tft9Interface1Z9Basket_IF);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Basket", func_001061E0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Basket", func_00106200);

