#include "common.h"

#include "FGDK3/Playstation2/Thread.h"
#include "SoundRes.h"
#include "unk.h"

#ifdef NON_MATCHING
char * func_0024BA70() {
    return "Sound";
}
#else
INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/SoundRes/Code/SoundRes", func_0024BA70);
#endif

#ifdef NON_MATCHING
Status SoundRes_InternalInitialise() {
    func_002757E8();
    return Status(0xFFFFFFFF, "c:/coding/fgdk3/ResLibs/SoundRes/Code/SoundRes.cpp", 0x79);
}
#else
INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/SoundRes/Code/SoundRes", SoundRes_InternalInitialise__Fv);
#endif

void SoundRes_InternalFinalise() {
    func_002757F0();
}

#ifdef NON_MATCHING

StdInit_ModuleDescription SoundRes_StdInit_Description = {
    0,
    &SoundRes_StdInit_UsedModules
};

void * const SoundRes_StdInit_UsedModules[] = {
    &SoundRes_InternalInitialise,
    &SoundRes_InternalFinalise,
    &ThrowCatch_Initialise,
    &ThrowCatch_Finalise,
    &RelRecv_Initialise,
    &RelRecv_Finalise,
    &Sound_Initialise,
    &Sound_Finalise,
    0,
    0,
};

Status SoundRes_Initialise() {
        return StdInit_InitialisationSequence(&SoundRes_StdInit_Description);
}

void SoundRes_Finalise() {
    StdInit_FinalisationSequence(&SoundRes_StdInit_Description);
}

#else
INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/SoundRes/Code/SoundRes", SoundRes_Initialise__Fv);
INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/SoundRes/Code/SoundRes", SoundRes_Finalise__Fv);
#endif

INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/SoundRes/Code/SoundRes", func_0024BB58); /* load */

INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/SoundRes/Code/SoundRes", func_0024BDB0); /* unload */

INCLUDE_RODATA("asm/nonmatchings/FGDK3/ResLibs/SoundRes/Code/SoundRes", _vt$15Sound_Resources);

INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/SoundRes/Code/SoundRes", __tf15Sound_Resources);

char * func_0024BE68() {
    return func_0024BA70();
}

INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/SoundRes/Code/SoundRes", __tft8Resource1Z12Sound_Effect);
