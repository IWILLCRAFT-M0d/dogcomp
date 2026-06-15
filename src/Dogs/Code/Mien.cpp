#include "common.h"
#include "Dogs/Mien.h"

Mien::Mien() {
    this->unk0 = 3;
    this->unk4 = -1;
    this->unk8 = 0.0f;
    this->unkC = 0.5f;
    this->unk10 = 0.0f;
    this->unk18 = 0.0f;
    this->unk1C = 0.0f;
    this->unk20 = 5.0f;

}

#ifdef NON_MATCHING
Mien::~Mien() {

}
#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Mien", _$_4Mien);
#endif

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Mien", D_003E5900);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Mien", D_003E5910);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Mien", D_003E59E8);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Mien", D_003E5A10);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Mien", D_003E5AA0); /* "TimeDecayDistanceDecay" */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Mien", func_001E64A8); // Mien function

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Mien", func_001E6958);

// Used by Console::Mien
void Mien::func_001E6C68(unsigned int arg1) {
    if (arg1 < 4) {
        this->unk4 = arg1;
    }
}


// called when jake is moving around
#ifdef NON_MATCHING
void Mien::func_001E6C80(float fparg0) {
    if (fparg0 < -0.5f) {
        this->unkC = -0.5f;
        return;
    }

    if (!(fparg0 > 0.5f)) {
        this->unkC = fparg0;
        return;
    }
    this->unkC = 0.5f;
}
#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Mien", func_001E6C80__4Mienf);
#endif

void Mien::func_001E6CC8(float fparg0) {
    this->unk20 = fparg0;
}

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Mien", func_001E6CD0);

// food health logic/set mien ?
// negative values in float parameter make jake lose health/go sad */
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Mien", func_001E6CF8); /* Mien::Set(float) ? */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Mien", func_001E6EC0);

#ifndef NON_MATCHING
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Mien", __tf4Mien);
#endif

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Mien", func_001E6FD0); // return (float) a0->unk8
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Mien", func_001E6FD8); // return (float) a0->unkC
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Mien", func_001E6FE0); // return (float) a0->unk10
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Mien", func_001E6FE8);

#ifndef NON_MATCHING
INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Mien", _vt$4Mien);
#endif
