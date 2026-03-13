#include "common.h"
#include "unk.h"

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

INCLUDE_ASM("asm/nonmatchings/text_0026FFB8", _$_13ShapeInstance);

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

    }
}
#else
INCLUDE_ASM("asm/nonmatchings/text_0026FFB8", Fill__13ShapeInstance);
#endif

void ShapeInstance::SetShape(void* shapeData) {
    if (this->m_shapeData != shapeData) {
        Empty();
        this->m_shapeData = shapeData;
        Fill();
    }
}

INCLUDE_ASM("asm/nonmatchings/text_0026FFB8", func_00270408); /* rct3 ShapeInstance::GetParameterBlock ? */

INCLUDE_ASM("asm/nonmatchings/text_0026FFB8", func_00270468);

INCLUDE_ASM("asm/nonmatchings/text_0026FFB8", func_00270498); // shapeinstance member

INCLUDE_ASM("asm/nonmatchings/text_0026FFB8", func_002704D8); // shapeinstance member

float ShapeInstance::func_002704F8() {
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

#ifdef NON_MATCHING
void ShapeInstance::Render(GE_Device* arg1) {
    if (this->unk20 != NULL) {
        //func_0028F228
    }
}
#else
INCLUDE_ASM("asm/nonmatchings/text_0026FFB8", Render__13ShapeInstanceP9GE_Device); /* rct3 ShapeInstance::Render */
#endif

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

INCLUDE_ASM("asm/nonmatchings/text_0026FFB8", func_00271908);

INCLUDE_ASM("asm/nonmatchings/text_0026FFB8", func_00271938);

INCLUDE_ASM("asm/nonmatchings/text_0026FFB8", func_00271970);

INCLUDE_ASM("asm/nonmatchings/text_0026FFB8", func_002719A8);

INCLUDE_ASM("asm/nonmatchings/text_0026FFB8", func_002719E0);

INCLUDE_ASM("asm/nonmatchings/text_0026FFB8", func_00271A18); /* return a0->unk20 */
