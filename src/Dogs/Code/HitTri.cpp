#include "common.h"

#include "Dogs/HitTri.h"

#ifdef NON_MATCHING
extern ClassInfo* D_0044ECA8;
HitTri_Object::HitTri_Object(ClassInfo* arg1, SimObj_Universe* arg2, int arg3, short arg4) : WorldObject(arg1 = 0, arg2, arg3, arg4) {
    if (arg1 != 0) {
        D_0044ECA8 = arg1;
    }

    this->unk5DC = 1;
    this->unk5D0 = 0;
    this->unk5D4 = 0;

    //
}
#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/HitTri", __13HitTri_ObjectP9ClassInfoP15SimObj_Universeis);
#endif

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/HitTri", _$_13HitTri_Object);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/HitTri", func_001DD818__13HitTri_Object);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/HitTri", func_001DDC50);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/HitTri", func_001DDC88);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/HitTri", func_001DDCB0__13HitTri_Objectf);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/HitTri", func_001DDE90);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/HitTri", func_001DDF50);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/HitTri", func_001DE038);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/HitTri", func_001DE108);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/HitTri", D_003E3AD0);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/HitTri", D_003E3AE8);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/HitTri", D_003E3B10);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/HitTri", D_003E3B30);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/HitTri", D_003E3B48);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/HitTri", D_003E3B60);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/HitTri", D_003E3B78);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/HitTri", D_003E3B90);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/HitTri", D_003E4DB0);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/HitTri", D_003E4DF0);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/HitTri", D_003E4E08);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/HitTri", D_003E4E20);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/HitTri", func_001DE118);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/HitTri", __tf13HitTri_Object);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/HitTri", func_001DE2B8); /* return (float) a0->unk5D8 */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/HitTri", func_001DE2C0); /* return D_0044ECA8 */

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/HitTri", D_003E50F8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/HitTri", func_001DE2C8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/HitTri", func_001DE318);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/HitTri", func_001DE358);
