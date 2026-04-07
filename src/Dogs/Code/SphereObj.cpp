#include "common.h"

#include "Dogs/SphereObj.h"

#ifdef NON_MATCHING
extern ClassInfo* D_0044DA60;
SphereObj::SphereObj(ClassInfo* arg1, SimObj_Universe* arg2, int arg3, short arg4) : WorldObject(arg1 = 0, arg2, arg3, arg4) {
    if (arg1 != 0) {
        D_0044DA60 = arg1;
    }
    this->unk5C4 = 1.0;
    this->unk5F0 = -10000.0;
    this->unk5F4 = 10000.0;
    this->unk5F8 = 0.65;
    this->unk5C0 = 0;
    this->unk5C8 = 0;
    this->unk5CC = 0;
    this->unk5D0 = 0;
    this->unk5D4 = 0;
    this->unk5D8 = 0;
    this->unk5DC = 0;
    this->unk5E0 = 0;
    this->unk5E4 = 0;
    this->unk5E8 = 0;
    this->unk5EC = 0;

    if (arg1 == NULL) {
        D_0044DA60->unk4 = 1;
    }
}
#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SphereObj", __9SphereObjP9ClassInfoP15SimObj_Universeis);
#endif



INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SphereObj", func_00173A20); // SphereObj member

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SphereObj", func_00173AA0); // SphereObj virtual

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SphereObj", func_00173B58); /* BallHitReceiver */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SphereObj", func_00173BD0);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/SphereObj", D_003C7AD8);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/SphereObj", D_003C7B00);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/SphereObj", D_003C7B30);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SphereObj", func_00173DF8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SphereObj", func_00175340);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SphereObj", func_001753B0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SphereObj", func_00175450);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SphereObj", func_001754E0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SphereObj", func_001755B0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SphereObj", func_00175628);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SphereObj", func_001764F8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SphereObj", func_001765B0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SphereObj", func_00176898);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SphereObj", func_00176F60);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SphereObj", func_00176F70);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SphereObj", func_00176F80);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SphereObj", func_00176F90);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SphereObj", func_001771B8);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/SphereObj", _vt$15BallHitReceiver);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/SphereObj", D_003C7CE0);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/SphereObj", D_003C7D08);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/SphereObj", D_003C7D28);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/SphereObj", D_003C7D40);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/SphereObj", D_003C7D58);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/SphereObj", D_003C7D70);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/SphereObj", D_003C7D88);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/SphereObj", D_003C8FA8);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/SphereObj", D_003C8FE8);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/SphereObj", D_003C9000);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/SphereObj", D_003C9018);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SphereObj", func_001771D8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SphereObj", func_00177318);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SphereObj", func_00177340);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SphereObj", func_00177390);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SphereObj", func_001773E0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SphereObj", func_00177438);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SphereObj", func_00177488);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SphereObj", func_001774C8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SphereObj", __tf9SphereObj);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SphereObj", func_001775C0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SphereObj", func_001775D0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SphereObj", func_001775D8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SphereObj", func_001775F8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SphereObj", func_00177648);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SphereObj", __tf15BallHitReceiver);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SphereObj", func_001776D8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SphereObj", func_00177728);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/SphereObj", func_00177768);
