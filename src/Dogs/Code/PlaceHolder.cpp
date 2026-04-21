#include "common.h"

#include "Dogs/PlaceHolder.h"

#ifdef NON_MATCHING

PlaceHolder::PlaceHolder(ClassInfo* arg1, SimObj_Universe* arg2, int arg3, short arg4) : WorldObject(arg1 = 0, arg2, arg3, arg4) {
    if (arg1 != 0) {
        s_classInfo = arg1;
    }

    if (arg1 == NULL) {
        s_classInfo->unk4 = 1;
    }
}
#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/PlaceHolder", __11PlaceHolderP9ClassInfoP15SimObj_Universeis);
#endif

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/PlaceHolder", func_0014D138); // PlaceHolder virtual

#ifdef NON_MATCHING
void PlaceHolder::func_0014D160(float fparg0) {
    if (fparg0 != 0.0f) {
        //func_00185550();
        //func_00185DD8(arg0, fparg0);
    }
}
#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/PlaceHolder", func_0014D160__11PlaceHolderf);
#endif

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/PlaceHolder", D_003B3740);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/PlaceHolder", D_003B3768);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/PlaceHolder", D_003B3788);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/PlaceHolder", D_003B37A0);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/PlaceHolder", D_003B37B8);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/PlaceHolder", D_003B37D0);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/PlaceHolder", D_003B37E8);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/PlaceHolder", D_003B4A08);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/PlaceHolder", D_003B4A48);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/PlaceHolder", D_003B4A60);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/PlaceHolder", D_003B4A78);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/PlaceHolder", func_0014D1B0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/PlaceHolder", _$_11PlaceHolder);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/PlaceHolder", __tf11PlaceHolder);

ClassInfo* PlaceHolder::func_0014D3E8() {
    return s_classInfo;
}

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/PlaceHolder", func_0014D3F0);
