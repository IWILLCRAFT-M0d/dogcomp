#include "common.h"
#include "debug.h"

#include "Dogs/Landscape.h"
#include "Dogs/Levelres.h"
#include "Dogs/Objects.h"
#include "unk.h"


INCLUDE_ASM("asm/nonmatchings/text_001E5870", main);

INCLUDE_ASM("asm/nonmatchings/text_001E5870", func_001E5C98);

INCLUDE_ASM("asm/nonmatchings/text_001E5870", func_001E5D68);

INCLUDE_ASM("asm/nonmatchings/text_001E5870", func_001E5EB8);

INCLUDE_ASM("asm/nonmatchings/text_001E5870", func_001E60C8);

//INCLUDE_ASM("asm/nonmatchings/text_001E5870", func_001E6428); /* Mien::Mien */
Mien::Mien(){
    this->unk0 = 3;
    this->unk4 = -1;
    this->unk8 = 0;
    this->unkC = 0.5f;
    this->unk10 = 0;
    this->unk18 = 0;
    this->unk1C = 0;
    this->unk20 = 5.0f;

}

INCLUDE_ASM("asm/nonmatchings/text_001E5870", _$_4Mien); /* Mien::~Mien */

INCLUDE_RODATA("asm/nonmatchings/text_001E5870", D_003E5900);

INCLUDE_RODATA("asm/nonmatchings/text_001E5870", D_003E5910);

INCLUDE_RODATA("asm/nonmatchings/text_001E5870", D_003E59E8);

INCLUDE_RODATA("asm/nonmatchings/text_001E5870", D_003E5A10);

INCLUDE_RODATA("asm/nonmatchings/text_001E5870", D_003E5AA0); /* "TimeDecayDistanceDecay" */

INCLUDE_ASM("asm/nonmatchings/text_001E5870", func_001E64A8);

INCLUDE_ASM("asm/nonmatchings/text_001E5870", func_001E6958);

INCLUDE_ASM("asm/nonmatchings/text_001E5870", func_001E6C68);

INCLUDE_ASM("asm/nonmatchings/text_001E5870", func_001E6C80);

INCLUDE_ASM("asm/nonmatchings/text_001E5870", func_001E6CC8);

INCLUDE_ASM("asm/nonmatchings/text_001E5870", func_001E6CD0);
/* food health logic/set mien ?
 * negative values in float parameter make jake lose health/go sad */
INCLUDE_ASM("asm/nonmatchings/text_001E5870", func_001E6CF8);

INCLUDE_ASM("asm/nonmatchings/text_001E5870", func_001E6EC0);

INCLUDE_ASM("asm/nonmatchings/text_001E5870", __tf4Mien);

INCLUDE_ASM("asm/nonmatchings/text_001E5870", func_001E6FD0);

INCLUDE_ASM("asm/nonmatchings/text_001E5870", func_001E6FD8);

INCLUDE_ASM("asm/nonmatchings/text_001E5870", func_001E6FE0);

INCLUDE_ASM("asm/nonmatchings/text_001E5870", func_001E6FE8);

INCLUDE_RODATA("asm/nonmatchings/text_001E5870", _vt$4Mien);
