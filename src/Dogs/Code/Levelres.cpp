#include "common.h"

#include "Dogs/Levelres.h"
#include "FGDK3/ThrowCat.h"


#ifdef NON_MATCHING

Status LevelRes_InternalInitialise() {
    return Status(0xFFFFFFFF, "c:/coding/dogs/Code/Common/Levelres.cpp", 44);
}

#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Levelres", LevelRes_InternalInitialise__Fv);
#endif

void LevelRes_InternalFinalise() {
    return;
}

#ifdef NON_MATCHING

StdInit_ModuleDescription LevelRes_StdInit_Description = {
    0,
    &LevelRes_StdInit_UsedModules
};

void * const LevelRes_StdInit_UsedModules[] = {
    &LevelRes_InternalInitialise,
    &LevelRes_InternalFinalise,
    &ThrowCatch_Initialise,
    &ThrowCatch_Finalise,
    0,
    0,
};

Status LevelRes_Initialise() { // unreferenced
    return StdInit_InitialisationSequence(&LevelRes_StdInit_Description);
}

void LevelRes_Finalise() { // unreferenced
    StdInit_FinalisationSequence(&LevelRes_StdInit_Description);
}

#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Levelres", LevelRes_Initialise__Fv);
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Levelres", LevelRes_Finalise__Fv);
#endif

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Levelres", func_001E56E8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Levelres", func_001E57A0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Levelres", __tf15Level_Resources);

#ifdef NON_MATCHING

char * func_001E5810() {
    return "Level";
}

#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Levelres", func_001E5810);
#endif

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Levelres", __tft8Resource1Z17Level_Description);
