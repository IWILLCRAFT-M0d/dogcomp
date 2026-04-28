#include "common.h"
#include "mem.h"
#include "unk.h"

#include <libsdr.h>

#include "FGDK3/Playstation2/SoundManager.h"
#include "FGDK3/ThrowCat.h"
#include "FGDK3/Playstation2/sifManager.h"
#include "FGDK3/Playstation2/RunPath.h"



#ifdef NON_MATCHING
Status SoundManager_InternalInitialise() {
    //
    sceSdRemoteInit();
    sceSdRemoteCallbackInit(0);
    //sceSdRemote
    //sceSdRemote
    //sceSdRemote
    return Status(0xFFFFFFFF, "c:/coding/fgdk3/Code/Playstation2/SoundManager.cpp", 103);
}
#else
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/SoundManager", SoundManager_InternalInitialise__Fv);
#endif

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

Status SoundManager_Initialise() {
        return StdInit_InitialisationSequence(&SoundManager_StdInit_Description);
}

void SoundManager_Finalise() {
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


