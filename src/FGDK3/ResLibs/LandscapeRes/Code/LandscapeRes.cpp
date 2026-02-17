#include "common.h"

#include "LandscapeRes.h"

INCLUDE_RODATA("asm/nonmatchings/FGDK3/ResLibs/LandscapeRes/Code/LandscapeRes", D_004499A8); /* "DogsTaleLand" */


#ifdef NON_MATCHING

Status LandscapeRes_InternalInitialise(void) {
    return Status(0xFFFFFFFF, "c:/coding/Fgdk3/ResLibs/LandscapeRes/Code/LandscapeRes.cpp", 79);
}

#else
INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/LandscapeRes/Code/LandscapeRes", LandscapeRes_InternalInitialise__Fv);
#endif

void LandscapeRes_InternalFinalise() {
    return;
}

#ifdef NON_MATCHING

StdInit_ModuleDescription LandscapeRes_StdInit_Description = {
    0,
    &LandscapeRes_StdInit_UsedModules
};

void * const LandscapeRes_StdInit_UsedModules[] = {
    &LandscapeRes_InternalInitialise,
    &LandscapeRes_InternalFinalise,
    &ThrowCatch_Initialise,
    &ThrowCatch_Finalise,
    &RelRecv_Initialise,
    &RelRecv_Finalise,
    0,
    0,
};

Status LandscapeRes_Initialise(void) {
    return StdInit_InitialisationSequence(&LandscapeRes_StdInit_Description);
}

void LandscapeRes_Finalise(void) {
    StdInit_FinalisationSequence(&LandscapeRes_StdInit_Description);
}

#else
INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/LandscapeRes/Code/LandscapeRes", LandscapeRes_Initialise__Fv);
INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/LandscapeRes/Code/LandscapeRes", LandscapeRes_Finalise__Fv);
#endif

INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/LandscapeRes/Code/LandscapeRes", func_0031F258); /* load? */

INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/LandscapeRes/Code/LandscapeRes", func_0031F330); /* unload? */

INCLUDE_RODATA("asm/nonmatchings/FGDK3/ResLibs/LandscapeRes/Code/LandscapeRes", _vt$22DogsTaleLand_Resources);

INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/LandscapeRes/Code/LandscapeRes", __tf22DogsTaleLand_Resources);

#ifdef NON_MATCHING
char* func_0031F408() {
    return "DogsTaleLand";
}

char* func_0031F418() {
    return "DogsTaleLand";
}

#else
INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/LandscapeRes/Code/LandscapeRes", func_0031F408);
INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/LandscapeRes/Code/LandscapeRes", func_0031F418);
#endif

INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/LandscapeRes/Code/LandscapeRes", __tft8Resource1Z14Landscape_Land);
