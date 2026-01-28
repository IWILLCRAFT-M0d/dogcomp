#include "common.h"
#include "debug.h"

#include "Dogs/Landscape.h"
#include "Dogs/Objects.h"
#include "unk.h"

#include "Dogs/Levelres.h"

#ifdef NON_MATCHING

Status LevelRes_InternalInitialise(void) {
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

Status LevelRes_Initialise(void) {
    return StdInit_InitialisationSequence(&LevelRes_StdInit_Description);
}

void LevelRes_Finalise(void) {
    StdInit_FinalisationSequence(&LevelRes_StdInit_Description);
}

#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Levelres", LevelRes_Initialise__Fv);
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Levelres", LevelRes_Finalise__Fv);
#endif

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Levelres", func_001E56E8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Levelres", func_001E57A0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Levelres", __tf15Level_Resources);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Levelres", func_001E5810); /* return "Level" */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Levelres", __tft8Resource1Z17Level_Description);

// end of Levelres.cpp
