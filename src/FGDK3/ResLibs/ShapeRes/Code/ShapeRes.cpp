#include "common.h"

#include "FGDK3/ResLibs/ShapeRes/ShapeRes.h"
#include "FGDK3/ThrowCat.h"

#include "unk.h"

#ifdef NON_MATCHING

Status ShapeRes_InternalInitialise() {
    func_002757E8();
    return Status(0xFFFFFFFF, "c:/coding/fgdk3/ResLibs/ShapeRes/Code/ShapeRes.cpp", 89);
}
#else
INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/ShapeRes/Code/ShapeRes", ShapeRes_InternalInitialise__Fv);
#endif

void ShapeRes_InternalFinalise() {
    func_002757F0();
}

#ifdef NON_MATCHING

StdInit_ModuleDescription ShapeRes_StdInit_Description = {
    0,
    &ShapeRes_StdInit_UsedModules
};

void * const ShapeRes_StdInit_UsedModules[] = {
    &ShapeRes_InternalInitialise,
    &ShapeRes_InternalFinalise,
    &ThrowCatch_Initialise,
    &ThrowCatch_Finalise,
    0,
    0,
};

Status ShapeRes_Initialise() {
    return StdInit_InitialisationSequence(&ShapeRes_StdInit_Description);
}

void ShapeRes_Finalise() {
    StdInit_FinalisationSequence(&ShapeRes_StdInit_Description);
}

#else
INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/ShapeRes/Code/ShapeRes", ShapeRes_Initialise__Fv);
INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/ShapeRes/Code/ShapeRes", ShapeRes_Finalise__Fv);
#endif

INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/ShapeRes/Code/ShapeRes", func_0031EF78); /* load? */

INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/ShapeRes/Code/ShapeRes", func_0031F068); /* unload? */

INCLUDE_RODATA("asm/nonmatchings/FGDK3/ResLibs/ShapeRes/Code/ShapeRes", _vt$15Shape_Resources);

INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/ShapeRes/Code/ShapeRes", __tf15Shape_Resources);

#ifdef NON_MATCHING
char* func_0031F148() {
    return "Shape";
}

char* func_0031F158() {
    return "Shape";
}

#else
INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/ShapeRes/Code/ShapeRes", func_0031F148);
INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/ShapeRes/Code/ShapeRes", func_0031F158);
#endif

INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/ShapeRes/Code/ShapeRes", __tft8Resource1Z9ShapeData);
