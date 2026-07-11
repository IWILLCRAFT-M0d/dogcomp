#include "common.h"

#include "Dogs/DiggablePatch.h"

#ifdef NON_MATCHING
DiggablePatch::DiggablePatch(ClassInfo* arg1, SimObj_Universe* arg2, int arg3, short arg4) : WorldObject(arg1 = 0, arg2, arg3, arg4) {
    if (arg1 != 0) {
        s_classInfo = arg1;
    }

    //
    this->unk5C4 = 1.0f;
    //this->unk5D0
    this->unk5C0.f = 1.0f;
    //this->unk5C8
    //this->unk5CC
    this->unk5D4 = 0;
    this->unk5D8 = 0;
    this->unk5DC = 0;
    this->unk5E0 = 0.0f;

    if (arg1 == NULL) {
        s_classInfo->unk4 = 1;
    }
}
#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/DiggablePatch", __13DiggablePatchP9ClassInfoP15SimObj_Universeis);
#endif

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/DiggablePatch", _$_13DiggablePatch);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/DiggablePatch", func_00127EE8); // DiggablePatch member

#ifdef NON_MATCHING
int DiggablePatch::func_00127F78(float arg) { // set digRate?
    this->unk5E0 = arg;
    return 0;
}
#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/DiggablePatch", func_00127F78__13DiggablePatch);
#endif

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/DiggablePatch", func_00127F88); // DiggablePatch member

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/DiggablePatch", func_00128030); // DiggablePatch member

#ifdef NON_MATCHING
int DiggablePatch::func_00128120(float arg) { // set depth?
    this->unk5C4 = arg;
    return 0;
}
#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/DiggablePatch", func_00128120__13DiggablePatchf);
#endif

#ifdef NON_MATCHING
int DiggablePatch::func_00128130() {
    return this->unk5C0.i;
}
#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/DiggablePatch", func_00128130__13DiggablePatch);
#endif

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/DiggablePatch", D_003A3588);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/DiggablePatch", D_003A35B0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/DiggablePatch", func_00128138); // DiggablePatch member

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/DiggablePatch", D_003A3660); /* "BriberyBone" */

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/DiggablePatch", D_003A3670); /* "DiggingRaceGod" */

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/DiggablePatch", D_003A3680); /* "BriberyBonePatch" */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/DiggablePatch", func_00128498); // DiggablePatch member

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/DiggablePatch", func_001285B0); // DiggablePatch virtual

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/DiggablePatch", func_001286D8); // DiggablePatch member

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/DiggablePatch", func_00128BB0); // unreferenced

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/DiggablePatch", func_00128C48); // unreferenced

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/DiggablePatch", func_00128CA8); // unreferenced

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/DiggablePatch", func_00128CC8); // unreferenced

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/DiggablePatch", func_00128CE8); // unreferenced

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/DiggablePatch", func_00128D80); // unreferenced

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/DiggablePatch", func_00128DE0); // unreferenced

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/DiggablePatch", func_00128E00); // unreferenced

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/DiggablePatch", func_00128E98); // unreferenced

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/DiggablePatch", func_00128EF8); // unreferenced

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/DiggablePatch", func_00128F90); // unreferenced

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/DiggablePatch", func_00128FF0); // unreferenced

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/DiggablePatch", func_00129010); // unreferenced

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/DiggablePatch", func_001290A8); // unreferenced

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/DiggablePatch", D_003A36C0);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/DiggablePatch", D_003A36E8);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/DiggablePatch", D_003A3708);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/DiggablePatch", D_003A3720);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/DiggablePatch", D_003A3738);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/DiggablePatch", D_003A3750);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/DiggablePatch", D_003A3768);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/DiggablePatch", D_003A4988);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/DiggablePatch", D_003A49C8);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/DiggablePatch", D_003A49E0);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/DiggablePatch", D_003A49F8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/DiggablePatch", func_00129108);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/DiggablePatch", __tf13DiggablePatch);

ClassInfo* DiggablePatch::func_001292A0() {
    return s_classInfo;
}

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/DiggablePatch", func_001292A8);
