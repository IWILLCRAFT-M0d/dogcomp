#include "common.h"

#include "AnimRes.h"
#include "unk.h"
INCLUDE_RODATA("asm/nonmatchings/FGDK3/ResLibs/AnimRes/Code/AnimRes", D_00448C08); /* "Animation" */

INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/AnimRes/Code/AnimRes", func_00318FD0);

#ifdef NON_MATCHING

Status AnimationRes_InternalInitialise() {
    func_002757E8();
    return Status(0xFFFFFFFF,"c:/coding/fgdk3/ResLibs/AnimRes/Code/AnimRes.cpp", 75);
}

#else
INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/AnimRes/Code/AnimRes", AnimationRes_InternalInitialise__Fv);
#endif

void AnimationRes_InternalFinalise() {
    func_002757F0();
}

#ifdef NON_MATCHING

StdInit_ModuleDescription AnimationRes_StdInit_Description = {
    0,
    &AnimationRes_StdInit_UsedModules
};

void * const AnimationRes_StdInit_UsedModules[] = {
    &AnimationRes_InternalInitialise,
    &AnimationRes_InternalFinalise,
    &ThrowCatch_Initialise,
    &ThrowCatch_Finalise,
    &RelRecv_Initialise,
    &RelRecv_Finalise,
    0,
    0,
};

Status AnimationRes_Initialise() {
    return StdInit_InitialisationSequence(&AnimationRes_StdInit_Description);
}

void AnimationRes_Finalise() {
    StdInit_FinalisationSequence(&AnimationRes_StdInit_Description);
}

#else
INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/AnimRes/Code/AnimRes", AnimationRes_Initialise__Fv);
INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/AnimRes/Code/AnimRes", AnimationRes_Finalise__Fv);
#endif

INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/AnimRes/Code/AnimRes", func_003190D8); /* load */

INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/AnimRes/Code/AnimRes", func_00319198); /* unload */

INCLUDE_RODATA("asm/nonmatchings/FGDK3/ResLibs/AnimRes/Code/AnimRes", _vt$19Animation_Resources);

INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/AnimRes/Code/AnimRes", func_003191E0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/AnimRes/Code/AnimRes", __tf19Animation_Resources);

INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/AnimRes/Code/AnimRes", func_00319290); /* return "Animation"; */

INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/AnimRes/Code/AnimRes", func_003192A0); /* return "Animation"; */

INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/AnimRes/Code/AnimRes", __tft8Resource1Z15AnimationHeader);

INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/AnimRes/Code/AnimRes", func_00319300);

INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/AnimRes/Code/AnimRes", func_00319320);
