#include "common.h"

#include "FGDK3/TextRes.h"
#include "unk.h"

#ifdef NON_MATCHING
Status TextRes_InternalInitialise(void) {
  return Status(0xFFFFFFFF, "c:/coding/fgdk3/Code/Common/TextRes.cpp", 45);
}
#else
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/TextRes", TextRes_InternalInitialise__Fv);
#endif

void TextRes_InternalFinalise(){
    return;
}
#ifdef NON_MATCHING

StdInit_ModuleDescription TextRes_StdInit_Description = {
    0,
    &TextRes_StdInit_UsedModules
};


void * const TextRes_StdInit_UsedModules[] = {
    &TextRes_InternalInitialise,
    &TextRes_InternalFinalise,
    &ThrowCatch_Initialise,
    &ThrowCatch_Finalise,
    0,
    0,
};

Status TextRes_Initialise(void) {
    return StdInit_InitialisationSequence(&TextRes_StdInit_Description);
}

void TextRes_Finalise(void) {
    StdInit_FinalisationSequence(&TextRes_StdInit_Description);
}

#else
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/TextRes", TextRes_Initialise__Fv);
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/TextRes", TextRes_Finalise__Fv);
#endif

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/TextRes", func_0026C420); /* Load? */

/* unload? */

void func_0026C4E0(void* arg1, char* arg2) {
    arg1 = arg2; /* temporary till textres class created */
    if (arg1 != 0) {
        delete[] arg1;
    }
}


INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/TextRes", _vt$14Text_Resources);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/TextRes", __tf14Text_Resources);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/TextRes", func_0026C558); /* return "Text"; */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/TextRes", func_0026C568); /* return "Text" */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/TextRes", __tft8Resource1Zc);
