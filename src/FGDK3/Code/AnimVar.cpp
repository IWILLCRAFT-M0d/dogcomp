#include "common.h"

#include "FGDK3/AnimVar.h"

AnimationVariable::AnimationVariable(float fparg0) {
    this->unk0 = fparg0;
    this->unkC = 1.0f;
    this->unk10 = 0;
}


INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/AnimVar", func_002ED9E0); // unreferenced

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/AnimVar", func_002ED9F8);


void AnimationVariable::SetDefaultNextValue(float fparg0) {
    this->unk4 = fparg0;
    this->unkC = 1.0f;
    this->unk10 = 0;
}

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/AnimVar", func_002EDA30);

void AnimationVariable::Advance() {
    if (this->unkC < 1.0f) {
        this->unk0 = ((this->unk8 * (1.0f - this->unkC)) + (this->unk4 * this->unkC));
        return;
    }
    this->unk0 = this->unk4;
}

#ifndef NON_MATCHING
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/AnimVar", func_002EDB30);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/AnimVar", func_002EDB90);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/AnimVar", func_002EDBB0);
#endif
