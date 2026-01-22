#include "common.h"

#include "FGDK3/ThrowCat.h"

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/ThrowCat", func_0026B2A8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/ThrowCat", func_0026B398);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/ThrowCat", func_0026B3B0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/ThrowCat", func_0026B448);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/ThrowCat", ThrowCatch_InternalInitialise__Fv);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/ThrowCat", ThrowCatch_InternalFinalise__Fv);

#ifdef NON_MATCHING

StdInit_ModuleDescription ThrowCatch_StdInit_Description = {
    0,
    &ThrowCatch_StdInit_UsedModules
};

void * const ThrowCatch_StdInit_UsedModules[] = {
    &ThrowCatch_InternalInitialise,
    &ThrowCatch_InternalFinalise,
    0,
    0,
};

Status ThrowCatch_Initialise(void) {
    return StdInit_InitialisationSequence(&ThrowCatch_StdInit_Description);
}

void ThrowCatch_Finalise(void) {
    StdInit_FinalisationSequence(&ThrowCatch_StdInit_Description);
}

#else
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/ThrowCat", ThrowCatch_Initialise__Fv);
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/ThrowCat", ThrowCatch_Finalise__Fv);
#endif

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/ThrowCat", func_0026B648); /* rct3 ThrowCatch_DefiniteThrow */
