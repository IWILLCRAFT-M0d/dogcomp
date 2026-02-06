#include "common.h"


#include "mem.h"

#include "FGDK3/Playstation2/SoundManager.h"

#include "unk.h"



INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/SoundManager", SoundManager_InternalInitialise__Fv);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/SoundManager", SoundManager_InternalFinalise__Fv);

#ifdef NON_MATCHING

StdInit_ModuleDescription SoundManager_StdInit_Description = {
    0,
    &SoundManager_StdInit_UsedModules
};

void * const SoundManager_StdInit_UsedModules[] = {
    &SoundManager_InternalInitialise,
    &SoundManager_InternalFinalise,
    &ThrowCatch_Initialise,
    &ThrowCatch_Finalise,
    &Semaphore_Initialise,
    &Semaphore_Finalise,
    &RunPath_Initialise,
    &RunPath_Finalise,
    &Thread_Initialise,
    &Thread_Finalise,
    0,
    0,
};

Status SoundManager_Initialise(void) {
        return StdInit_InitialisationSequence(&SoundManager_StdInit_Description);
}

void SoundManager_Finalise(void) {
    StdInit_FinalisationSequence(&SoundManager_StdInit_Description);
}

#else
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/SoundManager", SoundManager_Initialise__Fv);
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/SoundManager", SoundManager_Finalise__Fv);
#endif

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/SoundManager", func_0026D328);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/SoundManager", func_0026D538);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/SoundManager", func_0026D7D8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/SoundManager", func_0026DEB0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/SoundManager", func_0026DF28);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/SoundManager", func_0026DF48);


