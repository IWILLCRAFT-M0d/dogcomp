#include "common.h"
#include "unk.h"
#include "shape_unk.h"

// MeshUtil or MeshManage?
#ifdef NON_MATCHING
MeshInstance::MeshInstance(const MeshData* meshdata) {
    this->unk4 = meshdata;
    this->unk0 = 0x40;
    // this->unk14 = 0;
    // this->unk18 = 0;
    //

}
#else
INCLUDE_ASM("asm/nonmatchings/text_0028F150", __12MeshInstancePC8MeshData); // RCT3 MeshInstance::MeshInstance
#endif

INCLUDE_ASM("asm/nonmatchings/text_0028F150", _$_12MeshInstance);

INCLUDE_ASM("asm/nonmatchings/text_0028F150", func_0028F208);

INCLUDE_ASM("asm/nonmatchings/text_0028F150", Render__12MeshInstanceP9GE_Device); /* rct3 MeshInstance::Render ? */

int func_00290D08() { // MeshInstance method? ; called by unreferenced function
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/text_0028F150", func_00290D10); // , GE_Device*,
// if stubbed, shapeinstances do not render
// RCT3 MeshInstance::CalcLod?

INCLUDE_ASM("asm/nonmatchings/text_0028F150", func_00290E50); // unreferenced

INCLUDE_ASM("asm/nonmatchings/text_0028F150", func_00290E60);

INCLUDE_ASM("asm/nonmatchings/text_0028F150", func_00290EC0);

INCLUDE_ASM("asm/nonmatchings/text_0028F150", func_00290ED8);

INCLUDE_ASM("asm/nonmatchings/text_0028F150", func_00290EE8); // unreferenced

INCLUDE_ASM("asm/nonmatchings/text_0028F150", func_00290F38);
