#include "common.h"
#include "unk.h"
#include "shape_unk.h"

#include "FGDK3/ShapeParams.h"

ShapeParams_Dynamic::ShapeParams_Dynamic() {
    // this->unk0 = 0;
    // this->unk4 = 1;
}

ShapeParams_Dynamic::ShapeParams_Dynamic(int size) {
    // this->unk0 = 0;
    // this->unk4 = 1;
    SetSize(size);
}


INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/ShapeParams", _$_19ShapeParams_Dynamic);

#ifdef NON_MATCHING
void ShapeParams_Dynamic::SetSize(int size) {
    if (this->unk0 != NULL) {
        delete[] this->unk0;
    }
    if (size != 0) {
        this->unk0 = new char[size << 2];
    }
}
#else
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/ShapeParams", SetSize__19ShapeParams_Dynamici);
#endif

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/ShapeParams", func_0030B7B8); /* __tf11ShapeParams */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/ShapeParams", func_0030B7F8); // unreferenced

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/ShapeParams", _vt$19ShapeParams_Dynamic);

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/ShapeParams", D_00447D50); /* "11ShapeParams" */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/ShapeParams", __tf19ShapeParams_Dynamic);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/ShapeParams", func_0030B898); // unreferenced

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/ShapeParams", func_0030B8A0); // unreferenced

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/ShapeParams", func_0030B920); // unreferenced

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/ShapeParams", func_0030BA18);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/ShapeParams", func_0030BB10); // unreferenced

void func_0030BEC0() { // unreferenced
    return;
}

void func_0030BEC8() {
    func_00291770();
}

void func_0030BEE8() {
    func_00291778();
}

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/ShapeParams", func_0030BF08); // RCT3 ShapeData::ReceiveContents(File*) ?

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/ShapeParams", func_0030BF28); // RCT3 ShapeData::EmptyContents?

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/ShapeParams", func_0030BF48); // unreferenced

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/ShapeParams", func_0030BF98); // unreferenced

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/ShapeParams", func_0030BFC0); // called by unreferenced function

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/ShapeParams", func_0030C180); // unreferenced

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/ShapeParams", func_0030C198); // unreferenced

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/ShapeParams", func_0030C1D0); // unreferenced

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/ShapeParams", func_0030C458); // unreferenced

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/ShapeParams", func_0030C4A8); // unreferenced

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/ShapeParams", func_0030C598); // unreferenced

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/ShapeParams", func_0030C5C0); // called by unreferenced functions

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/ShapeParams", func_0030C680); // unreferenced

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/ShapeParams", func_0030CB50); // called by unreferenced function

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/ShapeParams", func_0030CC28); // unreferenced

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/ShapeParams", func_0030CC48); // unreferenced

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/ShapeParams", func_0030CC68); // unreferenced

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/ShapeParams", func_0030CC80); // called by unreferenced function

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/ShapeParams", func_0030CCD8); // called by unreferenced function

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/ShapeParams", func_0030CD28); // unreferenced

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/ShapeParams", func_0030CD60); // unreferenced

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/ShapeParams", func_0030CE18); // unreferenced

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/ShapeParams", func_0030CF98); // ShapeDataNamedBoneWriter member

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/ShapeParams", _vt$24ShapeDataNamedBoneWriter);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/ShapeParams", __tf24ShapeDataNamedBoneWriter);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/ShapeParams", __tf26CustomParameterBlockWriter);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/ShapeParams", func_0030D0C0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/ShapeParams", func_0030D120);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/ShapeParams", func_0030D188);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/ShapeParams", func_0030D250);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/ShapeParams", func_0030D300);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/ShapeParams", func_0030D3D0); // ~RelocationBlock?

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/ShapeParams", func_0030D430);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/ShapeParams", func_0030D470);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/ShapeParams", func_0030D550);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/ShapeParams", func_0030D598);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/ShapeParams", func_0030D5F8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/ShapeParams", func_0030D688);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/ShapeParams", func_0030D738);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/ShapeParams", func_0030D7A0); // unreferenced

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/ShapeParams", func_0030D818); // unreferenced

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/ShapeParams", func_0030D8B8); // unreferenced

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/ShapeParams", func_0030DD08); // called by unreferenced function

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/ShapeParams", func_0030DDC8);

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/ShapeParams", _vt$15RelocationBlock);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/ShapeParams", __tf15RelocationBlock);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/ShapeParams", func_0030DEF8); // unreferenced
/* return a0->unk2C */
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/ShapeParams", func_0030DF00);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/ShapeParams", func_0030DF20);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/ShapeParams", func_0030E008);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/ShapeParams", func_0030E3D0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/ShapeParams", func_0030E820);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/ShapeParams", func_0030E8C0); // unreferenced

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/ShapeParams", func_0030E920); // unreferenced

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/ShapeParams", func_0030E990); // unreferenced

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/ShapeParams", func_0030EC70); // unreferenced

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/ShapeParams", func_0030F678); // unreferenced

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/ShapeParams", func_0030F6C8); // called by unreferenced functions

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/ShapeParams", func_0030F7E8); // unreferenced

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/ShapeParams", func_0030F868); // unreferenced

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/ShapeParams", func_0030F9D0); // unreferenced

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/ShapeParams", func_0030FA20); // unreferenced

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/ShapeParams", func_0030FAC8); // unreferenced

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/ShapeParams", func_0030FBD0); // unreferenced

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/ShapeParams", func_0030FC00); // unreferenced

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/ShapeParams", func_0030FC98); // unreferenced

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/ShapeParams", func_0030FCD8); // unreferenced

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/ShapeParams", func_0030FD28); // unreferenced

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/ShapeParams", func_0030FEC8); // unreferenced

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/ShapeParams", func_0030FFB0); // unreferenced

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/ShapeParams", func_0030FFE8); // unreferenced

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/ShapeParams", func_00310038); // unreferenced

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/ShapeParams", func_003100E0); // unreferenced

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/ShapeParams", func_00310148); // unreferenced

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/ShapeParams", func_00310158); // unreferenced

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/ShapeParams", func_00310170); // unreferenced

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/ShapeParams", func_003101C0); // called by unreferenced function

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/ShapeParams", func_00310250); // called by unreferenced function

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/ShapeParams", func_003102E0); // unreferenced

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/ShapeParams", func_00310370); // unreferenced

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/ShapeParams", func_00310438); // MeshTransforms virtual

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/ShapeParams", func_00310448); // MeshTransforms virtual

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/ShapeParams", func_00310478); // unreferenced

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/ShapeParams", func_00310490); // unreferenced

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/ShapeParams", func_003104E0); // unreferenced

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/ShapeParams", func_00310560); // unreferenced

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/ShapeParams", func_00310A98); // unreferenced

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/ShapeParams", func_00310AE0); // unreferenced

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/ShapeParams", _vt$14MeshTransforms);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/ShapeParams", __tf14MeshTransforms);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/ShapeParams", func_00310BA8); /* __tf17GE_TransformState */

