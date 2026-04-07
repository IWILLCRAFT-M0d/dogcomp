#include "common.h"

#include "FGDK3/ThrowCat.h"

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/ThrowCat", func_0026B2A8); // Throwcatch stack

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/ThrowCat", func_0026B398);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/ThrowCat", func_0026B3B0); /* "Throwcatch sanity seriously failed. Try section starts at %s %d" */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/ThrowCat", func_0026B448); /* "Throwcatch sanity count of %d failure at %s %d" */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/ThrowCat", ThrowCatch_InternalInitialise__Fv);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/ThrowCat", ThrowCatch_InternalFinalise__Fv); /* D_004518F0 = 0; */

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

Status ThrowCatch_Initialise() {
    return StdInit_InitialisationSequence(&ThrowCatch_StdInit_Description);
}

void ThrowCatch_Finalise() {
    StdInit_FinalisationSequence(&ThrowCatch_StdInit_Description);
}

#else
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/ThrowCat", ThrowCatch_Initialise__Fv);
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/ThrowCat", ThrowCatch_Finalise__Fv);
#endif

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/ThrowCat", ThrowCatch_DefiniteThrow); /* rct3 ThrowCatch_DefiniteThrow */
