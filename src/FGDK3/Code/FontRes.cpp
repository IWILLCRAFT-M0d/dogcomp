#include "common.h"
#include "unk.h"

#include "FGDK3/FontRes.h"
#include "FGDK3/ThrowCat.h"
#include "FGDK3/RelRecv.h"


#ifdef NON_MATCHING
Status FontRes_InternalInitialise() {
    return Status(0xFFFFFFFF, "c:/coding/fgdk3/Code/Common/FontRes.cpp", 47);
}
#else
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/FontRes", FontRes_InternalInitialise__Fv);
#endif

void FontRes_InternalFinalise() {
    return;
}

#ifdef NON_MATCHING

StdInit_ModuleDescription FontRes_StdInit_Description = {
    0,
    &FontRes_StdInit_UsedModules
};

void * const FontRes_StdInit_UsedModules[] = {
    &FontRes_InternalInitialise,
    &FontRes_InternalFinalise,
    &ThrowCatch_Initialise,
    &ThrowCatch_Finalise,
    &RelRecv_Initialise,
    &RelRecv_Finalise,
    0,
    0,
};

Status FontRes_Initialise() {
    return StdInit_InitialisationSequence(&FontRes_StdInit_Description);
}

void FontRes_Finalise() {
    StdInit_FinalisationSequence(&FontRes_StdInit_Description);
}

#else
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/FontRes", FontRes_Initialise__Fv);
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/FontRes", FontRes_Finalise__Fv);
#endif

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/FontRes", func_002D6A58); // load

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/FontRes", func_002D6B18); // unload

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/FontRes", _vt$14Font_Resources);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/FontRes", __tf14Font_Resources);

#ifdef NON_MATCHING
char * func_002D6B88() { // Font_Resources virtual
    return "Font";
}

#else
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/FontRes", func_002D6B88);
#endif

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/FontRes", __tft8Resource1Z11Font_Header);

