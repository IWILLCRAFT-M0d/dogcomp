#include "common.h"

#include "FGDK3/Playstation2/MusicRes.h"
#include "FGDK3/ThrowCat.h"
#include "FGDK3/RelRecv.h"


#ifdef NON_MATCHING

Status MusicRes_InternalInitialise() {
    return Status(0xFFFFFFFF, "c:/coding/fgdk3/Code/Playstation2/MusicRes.cpp", 77);
}

#else
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/MusicRes", MusicRes_InternalInitialise__Fv);
#endif

void MusicRes_InternalFinalise() {
    return;
}

#ifdef NON_MATCHING

StdInit_ModuleDescription MusicRes_StdInit_Description = {
    0,
    &MusicRes_StdInit_UsedModules
};


void * const MusicRes_StdInit_UsedModules[] = {
    &MusicRes_InternalInitialise,
    &MusicRes_InternalFinalise,
    &ThrowCatch_Initialise,
    &ThrowCatch_Finalise,
    &RelRecv_Initialise,
    &RelRecv_Finalise,
    0,
    0,
};

Status MusicRes_Initialise() {
    return StdInit_InitialisationSequence(&MusicRes_StdInit_Description);
}

void MusicRes_Finalise() {
    StdInit_FinalisationSequence(&MusicRes_StdInit_Description);
}

#else
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/MusicRes", MusicRes_Initialise__Fv);
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/MusicRes", MusicRes_Finalise__Fv);
#endif

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/MusicRes", func_0027EB38); /* load */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/MusicRes", func_0027EC50); /* unload */

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Playstation2/MusicRes", _vt$15Music_Resources);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/MusicRes", __tf15Music_Resources);

#ifdef NON_MATCHING

char * func_0027ED38() { // virtual?
    return "Music";
}
#else
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/MusicRes", func_0027ED38);
#endif

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/MusicRes", __tft8Resource1Z11Music_Piece);
