#include "common.h"

#include "Dogs/AnimatedObject.h"

#ifdef NON_MATCHING
AnimatedObject::AnimatedObject(ClassInfo* arg1, SimObj_Universe* arg2, int arg3, short arg4) : HitTri_Object(arg1 = 0, arg2, arg3, arg4) {
    if (arg1 != 0) {
        s_classInfo = arg1;
    }

    //

    this->unk690 = 1;
    this->unk634 = 0;
    this->unk638 = 0;
    this->unk63C = 0;
    this->unk644 = 0;
    this->unk648 = 0;
    this->unk680 = 0;

    this->unk694 = 0;
    //
}
#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/AnimatedObject", __14AnimatedObjectP9ClassInfoP15SimObj_Universeis);
#endif

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/AnimatedObject", _$_14AnimatedObject);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/AnimatedObject", func_00100408__14AnimatedObject); // AnimatedObject member

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/AnimatedObject", D_0038FF00);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/AnimatedObject", D_0038FFC8);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/AnimatedObject", D_0038FFF0);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/AnimatedObject", D_00390020);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/AnimatedObject", func_00100428); // "Unknown extra for AnimatedObject creature"

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/AnimatedObject", func_00100510__14AnimatedObject);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/AnimatedObject", func_00100530);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/AnimatedObject", func_001009F8); // "Unknown anim type in animatedObject.cpp"

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/AnimatedObject", func_00101348);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/AnimatedObject", func_00101418);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/AnimatedObject", func_001014C0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/AnimatedObject", func_00101650);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/AnimatedObject", func_00101820);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/AnimatedObject", func_00101928);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/AnimatedObject", func_00101968__14AnimatedObject);
/*
int AnimatedObject::func_00101968() {
    if ((this->unk638 == 0) && (this->unk634 == 0)) {
        return 1;
    }
    return 0;
}
*/

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/AnimatedObject", func_00101990);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/AnimatedObject", func_00101A38);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/AnimatedObject", func_00101B08__14AnimatedObject);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/AnimatedObject", func_00101BA8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/AnimatedObject", func_00101CC0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/AnimatedObject", func_00101DB8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/AnimatedObject", func_00101F30); // "Unknown extra for AnimatedObject_Complex creature"

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/AnimatedObject", func_00102088);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/AnimatedObject", func_00102190);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/AnimatedObject", func_001021B0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/AnimatedObject", func_00102260);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/AnimatedObject", func_00102588);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/AnimatedObject", func_00102648);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/AnimatedObject", func_00102728);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/AnimatedObject", func_001028D8); // "Object does not have hitcheck override extra set!"

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/AnimatedObject", func_001029E0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/AnimatedObject", func_00102A38);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/AnimatedObject", func_00102AA8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/AnimatedObject", func_00102B90);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/AnimatedObject", func_00102C78);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/AnimatedObject", _$_30AnimatedObject_ComplexPlatform);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/AnimatedObject", func_00102E70); // "Unknown extra for AnimatedObject_ComplexPlatform creature"

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/AnimatedObject", func_00102EE0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/AnimatedObject", func_00102F00); /* slotmachine ? */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/AnimatedObject", func_00103050); // "Unknown extra for SlotMachine creature"

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/AnimatedObject", func_00103140); // "Invalid matrix for rotation in slot machine!"

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/AnimatedObject", func_00103658);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/AnimatedObject", func_00103750);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/AnimatedObject", func_00103818);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/AnimatedObject", func_001038C0);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/AnimatedObject", _vt$33AnimatedObject_ComplexHitReceiver);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/AnimatedObject", D_00390248);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/AnimatedObject", D_00390260);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/AnimatedObject", D_00390288);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/AnimatedObject", D_003902A8);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/AnimatedObject", D_003902C0);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/AnimatedObject", D_003902D8);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/AnimatedObject", D_003902F0);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/AnimatedObject", D_00390308);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/AnimatedObject", D_00391528);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/AnimatedObject", D_00391568);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/AnimatedObject", D_00391580);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/AnimatedObject", D_00391598);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/AnimatedObject", D_00391850);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/AnimatedObject", D_00391868);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/AnimatedObject", D_00391890);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/AnimatedObject", D_003918B0);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/AnimatedObject", D_003918C8);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/AnimatedObject", D_003918E0);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/AnimatedObject", D_003918F8);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/AnimatedObject", D_00391910);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/AnimatedObject", D_00392B30);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/AnimatedObject", D_00392B70);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/AnimatedObject", D_00392B88);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/AnimatedObject", D_00392BA0);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/AnimatedObject", D_00392E58);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/AnimatedObject", D_00392E70);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/AnimatedObject", D_00392E98);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/AnimatedObject", D_00392EB8);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/AnimatedObject", D_00392ED0);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/AnimatedObject", D_00392EE8);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/AnimatedObject", D_00392F00);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/AnimatedObject", D_00392F18);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/AnimatedObject", D_00394138);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/AnimatedObject", D_00394178);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/AnimatedObject", D_00394190);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/AnimatedObject", D_003941A8);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/AnimatedObject", D_00394460);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/AnimatedObject", D_00394478);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/AnimatedObject", D_00394490);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/AnimatedObject", D_003944B8);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/AnimatedObject", D_003944D8);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/AnimatedObject", D_003944F0);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/AnimatedObject", D_00394508);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/AnimatedObject", D_00394520);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/AnimatedObject", D_00394538);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/AnimatedObject", D_00395758);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/AnimatedObject", D_00395798);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/AnimatedObject", D_003957B0);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/AnimatedObject", D_003957C8);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/AnimatedObject", _vt$17AnimatedObject_IF);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/AnimatedObject", func_00103990);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/AnimatedObject", func_00103E10);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/AnimatedObject", func_00103E40);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/AnimatedObject", __tf17AnimatedObject_IF);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/AnimatedObject", D_00395B08); /* "17AnimatedObject_IF" */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/AnimatedObject", __tf14AnimatedObject);

ClassInfo* AnimatedObject::func_00103F50() {
    return s_classInfo;
}

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/AnimatedObject", __tf22AnimatedObject_Complex);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/AnimatedObject", func_00103FB0__22AnimatedObject_Complex); /* return D_0044C768 */

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/AnimatedObject", D_00395B38);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/AnimatedObject", D_00395B48);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/AnimatedObject", __tf30AnimatedObject_ComplexPlatform);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/AnimatedObject", func_00104058); /* return D_0044C778 */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/AnimatedObject", _$_11SlotMachine);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/AnimatedObject", D_00395B90);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/AnimatedObject", __tf11SlotMachine);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/AnimatedObject", func_00104170__11SlotMachine); /* return D_0044C780 */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/AnimatedObject", __tf33AnimatedObject_ComplexHitReceiver);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/AnimatedObject", func_001041C8__33AnimatedObject_ComplexHitReceiver); /* this->unk10 = 1 */

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/AnimatedObject", D_00395BD8); /* "t9Interface1Z17AnimatedObject_IF" */

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/AnimatedObject", D_00395C00); /* "11Platform_IF" */

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/AnimatedObject", D_00395C10); /* "t9Interface1Z11Platform_IF" */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/AnimatedObject", __tf18SimObj_HitFilter);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/AnimatedObject", __tft9Interface1Z17AnimatedObject_IF);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/AnimatedObject", func_00104268);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/AnimatedObject", func_001042B8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/AnimatedObject", func_001042F8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/AnimatedObject", func_00104318);
