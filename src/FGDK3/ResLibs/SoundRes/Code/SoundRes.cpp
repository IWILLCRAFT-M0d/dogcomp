#include "common.h"

#include "FGDK3/Playstation2/Thread.h"
#include "SoundRes.h"
#include "unk.h"

INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/SoundRes/Code/SoundRes", func_0024BA70); /* return "Sound"; */

#ifdef NON_MATCHING
Status SoundRes_InternalInitialise(void) {
    func_002757E8();
    return Status(0xffffffff, "c:/coding/fgdk3/ResLibs/SoundRes/Code/SoundRes.cpp", 0x4f);
}
#else
INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/SoundRes/Code/SoundRes", SoundRes_InternalInitialise__Fv);
#endif

INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/SoundRes/Code/SoundRes", SoundRes_InternalFinalise__Fv);

INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/SoundRes/Code/SoundRes", SoundRes_Initialise__Fv);

/*
Status SoundRes_Initialise(void) {
        return StdInit_InitialisationSequence(&SoundRes_StdInit_Description);
}
*/

INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/SoundRes/Code/SoundRes", SoundRes_Finalise__Fv);

/*
void SoundRes_Finalise(void) {
    StdInit_FinalisationSequence(&SoundRes_StdInit_Description);
}
*/

INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/SoundRes/Code/SoundRes", func_0024BB58); /* load */

INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/SoundRes/Code/SoundRes", func_0024BDB0); /* unload */

INCLUDE_RODATA("asm/nonmatchings/FGDK3/ResLibs/SoundRes/Code/SoundRes", _vt$15Sound_Resources);

INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/SoundRes/Code/SoundRes", __tf15Sound_Resources);

//INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/SoundRes/Code/SoundRes", func_0024BE68);
char * func_0024BE68() {
    return func_0024BA70();
}

INCLUDE_ASM("asm/nonmatchings/FGDK3/ResLibs/SoundRes/Code/SoundRes", __tft8Resource1Z12Sound_Effect);
