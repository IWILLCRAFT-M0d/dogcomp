#include "common.h"

#include "Dogs/Button.h"

#ifdef NON_MATCHING
Button::Button(ClassInfo* arg1, SimObj_Universe* arg2, int arg3, short arg4) : WorldObject(arg1 = 0, arg2, arg3, arg4) {
    if (arg1 != 0) {
        s_classInfo = arg1;
    }
    //

    this->unk5C0 = 0;
    this->unk5E0 = 0;
    this->unk5E4 = 0;
    this->unk5E8 = 1;
    this->unk5EC = 0;

    if (arg1 == NULL) {
        s_classInfo->unk4 = 1;
    }
}
#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Button", __6ButtonP9ClassInfoP15SimObj_Universeis);
#endif

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Button", _$_6Button);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Button", func_0010A150__6Button); // activate?

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Button", func_0010A178); // button::Extra?

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Button", func_0010A370__6Buttonf); // button action updater?

#ifdef NON_MATCHING
void Button::func_0010A4E0() {
    this->unk5C4 = 2.0f;
    //
}
#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Button", func_0010A4E0__6Button); // button action?
#endif

#ifdef NON_MATCHING
int Button::func_0010A550() {
    return this->unk5EC;
}
#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Button", func_0010A550__6Button);
#endif

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Button", func_0010A558);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Button", __tf6Button);

ClassInfo* Button::func_0010A6F0() {
    return s_classInfo;
}

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Button", func_0010A6F8);
// vtables
INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Button", D_0039C1D0);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Button", D_0039C1F8);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Button", D_0039C218);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Button", D_0039C230);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Button", D_0039C248);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Button", D_0039C260);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Button", D_0039C278);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Button", D_0039D498);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Button", D_0039D4D8);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Button", D_0039D4F0);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Button", D_0039D508);


