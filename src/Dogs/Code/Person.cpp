#include "common.h"

#include "Dogs/Person.h"

extern ClassInfo* D_0044D2E8;

#ifdef NON_MATCHING
Person::Person(ClassInfo* arg1, SimObj_Universe* arg2, int arg3, short arg4) : WorldObject(arg1 = 0, arg2, arg3, arg4) {
    if (arg1 != 0) {
        D_0044D2E8 = arg1;
    }

    this->unk5C0 = 0.0f;
    this->unk5C4 = 0.0f;
    this->unk5C8 = 0.0f;
    //

    //this->unk654 = 0.0f;
    this->unk658 = 50.0f;
    this->unk65C = 200.0f;
    // animvars here?
    this->unk6B0 = 0;
    this->unk6B4 = 0;
    this->unk6B8 = 0;
    this->unk6BC = 0;
    this->unk6C0 = 0;
    this->unk6C4 = 0;
    this->unk6C8 = 0;

    if (arg1 == NULL) {
        D_0044D2E8->unk4 = 1;
    }
    //
}
#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Person", __6PersonP9ClassInfoP15SimObj_Universeis);
#endif

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Person", _$_6Person);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Person", func_0014A398__6Person);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Person", func_0014A650); // Person member

float Person::func_0014A840() {
    return 100.0f;
}

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Person", func_0014A850); // accesory function

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Person", func_0014AB50); /* PersonRepulsor(float) */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Person", func_0014ADC8); // "Person may have fallen through floor: %s\n"

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Person", func_0014B070);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Person", func_0014B4C0); // "Acos out of range"

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Person", func_0014BE60__6Person);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Person", func_0014BF90__6Person);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Person", func_0014C000__6Personf); // advance animvars?

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Person", func_0014C068);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Person", func_0014C0D8); // Person member

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Person", func_0014C0F0); // Person member

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Person", func_0014C1B8__6Person); /* return 0x64 */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Person", func_0014C1C0__6Person);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Person", func_0014C230);


#ifdef NON_MATCHING
int Person::func_0014C240() {
    this->unk6B8 = 1;
    return 0;
}
#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Person", func_0014C240__6Person);
#endif

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Person", func_0014C250); // Person virtual

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Person", func_0014C5B0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Person", func_0014C648);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Person", func_0014C720);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Person", func_0014C820);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Person", func_0014C878);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Person", func_0014C888);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Person", func_0014C9C8);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Person", D_003B1E10);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Person", D_003B1E28);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Person", _vt$24PersonVehicleHitReceiver);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Person", _vt$23PersonHitSizeCalculator);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Person", D_003B1E80);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Person", D_003B1EA8);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Person", D_003B1EC8);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Person", D_003B1EE0);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Person", D_003B1EF8);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Person", D_003B1F10);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Person", D_003B1F28);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Person", D_003B3148);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Person", D_003B3188);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Person", D_003B31A0);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Person", D_003B31B8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Person", func_0014C9F0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Person", func_0014CA40);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Person", func_0014CA90);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Person", func_0014CAE8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Person", func_0014CB38);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Person", __tf6Person);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Person", func_0014CBD0);

#ifdef NON_MATCHING
float Person::func_0014CBD8() {
    return this->unk5C0;
}
#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Person", func_0014CBD8__6Person);
#endif

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Person", func_0014CBE0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Person", func_0014CBF0);

ClassInfo* Person::func_0014CC08() {
    return D_0044D2E8;
}

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Person", __tf23PersonHitSizeCalculator);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Person", func_0014CC60); // PersonHitSizeCalculator member

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Person", __tf24PersonVehicleHitReceiver);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Person", func_0014CD08);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Person", __tf14PersonRepulsor);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Person", func_0014CD78);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Person", func_0014CE98);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Person", D_003B3568);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Person", func_0014CF20);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Person", func_0014CF70);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Person", func_0014CFA8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Person", func_0014CFF8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Person", func_0014D038);
