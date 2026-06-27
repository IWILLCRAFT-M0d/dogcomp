#include "common.h"
#include "unk.h"
#include "shape_unk.h"

// Beginning of Shape.cpp?

#ifdef NON_MATCHING
ShapeInstance::ShapeInstance() {
    this->m_shapeData = NULL;
    this->unk20 = 0;
    this->unk24 = 0;
    this->unk28 = 0;
}
#else
INCLUDE_ASM("asm/nonmatchings/text_0026FFB8", __13ShapeInstance);
#endif

#ifdef NON_MATCHING
ShapeInstance::~ShapeInstance() {
    this->Empty();
}
#else
INCLUDE_ASM("asm/nonmatchings/text_0026FFB8", _$_13ShapeInstance);
#endif

#ifdef NON_MATCHING
void ShapeInstance::Empty() {
    if (this->m_shapeData != NULL) {

    }
}
#else
INCLUDE_ASM("asm/nonmatchings/text_0026FFB8", Empty__13ShapeInstance);
#endif


#ifdef NON_MATCHING
void ShapeInstance::Fill() {
    if (this->m_shapeData != NULL) {
        //this->unk8->SetSize
        //this->unk14->SetSize
        //this->unk20 = new MeshInstance


    }
}
#else
INCLUDE_ASM("asm/nonmatchings/text_0026FFB8", Fill__13ShapeInstance);
#endif

void ShapeInstance::SetShape(ShapeData* shapeData) {
    if (this->m_shapeData != shapeData) {
        Empty();
        this->m_shapeData = shapeData;
        Fill();
    }
}

#ifdef NON_MATCHING
int ShapeInstance::func_00270408(int arg1, int arg2) {
    if (this->m_shapeData != NULL) {

    }
}
#else
INCLUDE_ASM("asm/nonmatchings/text_0026FFB8", func_00270408__13ShapeInstanceii); // RCT3 ShapeInstance::GetParameterBlock ?
#endif

INCLUDE_ASM("asm/nonmatchings/text_0026FFB8", func_00270468); // RCT3 ShapeInstance::GetMatrix33 ?

INCLUDE_ASM("asm/nonmatchings/text_0026FFB8", func_00270498); // RCT3 ShapeInstance::GetMatrix44 ?

INCLUDE_ASM("asm/nonmatchings/text_0026FFB8", func_002704D8); // RCT3 ShapeInstance::GetVector3 ?

float ShapeInstance::func_002704F8() { // RCT3 ShapeInstance::GetFloat ?
    return 0.0f;
}

INCLUDE_RODATA("asm/nonmatchings/text_0026FFB8", D_0043BBC0); /* "<unknown shape>" */

#ifdef NON_MATCHING
void ShapeInstance::Execute() {
    if (this->m_shapeData == NULL) {
        return;
    }
    //
}
#else
INCLUDE_ASM("asm/nonmatchings/text_0026FFB8", Execute__13ShapeInstance); /* rct3 ShapeInstance::Execute*/
#endif

void ShapeInstance::Render(GE_Device* arg1) {
    if (this->unk20 != NULL) {
        this->unk20->Render(arg1);
    }
}

void func_002717B8(void) {
    return;
}

INCLUDE_ASM("asm/nonmatchings/text_0026FFB8", func_002717C0);
INCLUDE_ASM("asm/nonmatchings/text_0026FFB8", func_002717E8);
INCLUDE_ASM("asm/nonmatchings/text_0026FFB8", func_00271808);

INCLUDE_RODATA("asm/nonmatchings/text_0026FFB8", _vt$13ShapeInstance);

INCLUDE_RODATA("asm/nonmatchings/text_0026FFB8", _vt$11ShapeParams);

INCLUDE_ASM("asm/nonmatchings/text_0026FFB8", __tf11ShapeParams);

INCLUDE_ASM("asm/nonmatchings/text_0026FFB8", _$_11ShapeParams);

INCLUDE_ASM("asm/nonmatchings/text_0026FFB8", __tf13ShapeInstance);

INCLUDE_ASM("asm/nonmatchings/text_0026FFB8", func_002718D0);
INCLUDE_ASM("asm/nonmatchings/text_0026FFB8", func_002718F8); /* return a0->unk4 */
INCLUDE_ASM("asm/nonmatchings/text_0026FFB8", func_00271900);

#ifdef NON_MATCHING
const string_ascii ShapeInstance::func_00271908() {
    return string_ascii("<unknown shape>");
}
#else
INCLUDE_ASM("asm/nonmatchings/text_0026FFB8", func_00271908); // virtual ShapeInstance member; RCT3 ShapeInstance::GetShapeName?
#endif

INCLUDE_ASM("asm/nonmatchings/text_0026FFB8", func_00271938);
INCLUDE_ASM("asm/nonmatchings/text_0026FFB8", func_00271970);
INCLUDE_ASM("asm/nonmatchings/text_0026FFB8", func_002719A8);
INCLUDE_ASM("asm/nonmatchings/text_0026FFB8", func_002719E0);
INCLUDE_ASM("asm/nonmatchings/text_0026FFB8", func_00271A18); /* return a0->unk20 */
