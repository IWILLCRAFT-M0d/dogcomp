#include "common.h"

#include "ShapeRes.h"

#include "unk.h"

#ifdef NON_MATCHING

Status ShapeRes_InternalInitialise(void) {
    func_002757E8();
    return Status(0xffffffff, "c:/coding/fgdk3/ResLibs/ShapeRes/Code/ShapeRes.cpp", 0x59);
}
#else
INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/ShapeRes/Code/ShapeRes", ShapeRes_InternalInitialise__Fv);
#endif

INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/ShapeRes/Code/ShapeRes", ShapeRes_InternalFinalise__Fv);

INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/ShapeRes/Code/ShapeRes", ShapeRes_Initialise__Fv);

/*
Status ShapeRes_Initialise(void) {
    return StdInit_InitialisationSequence(&ShapeRes_StdInit_Description);
}
*/

INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/ShapeRes/Code/ShapeRes", ShapeRes_Finalise__Fv);

/*
void ShapeRes_Finalise(void) {
    StdInit_FinalisationSequence(&ShapeRes_StdInit_Description);
}
*/

INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/ShapeRes/Code/ShapeRes", func_0031EF78); /* load? */

INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/ShapeRes/Code/ShapeRes", func_0031F068); /* unload? */

INCLUDE_RODATA("asm/nonmatchings/FGDK3/ResLibs/ShapeRes/Code/ShapeRes", _vt$15Shape_Resources);

INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/ShapeRes/Code/ShapeRes", __tf15Shape_Resources);

INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/ShapeRes/Code/ShapeRes", func_0031F148); /* return "Shape"; */

INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/ShapeRes/Code/ShapeRes", func_0031F158); /* return "Shape"; */

INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/ShapeRes/Code/ShapeRes", __tft8Resource1Z9ShapeData);
