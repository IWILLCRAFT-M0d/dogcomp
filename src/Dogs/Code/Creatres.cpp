#include "common.h"
#include "unk.h"

#include "Dogs/Creatres.h"

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Creatres", D_003DAF80); /* "Creature" */

#ifdef NON_MATCHING

Status Creatres_InternalInitialise(void) {
  return Status(0xffffffff, "c:/coding/dogs/Code/Common/Creatres.cpp", 44);
}

#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Creatres", Creatres_InternalInitialise__Fv);
#endif

void Creatres_InternalFinalise(void) {
	return;
}

#ifdef NON_MATCHING

StdInit_ModuleDescription Creatres_StdInit_Description = {
    0,
    &Creatres_StdInit_UsedModules
};


void * const Creatres_StdInit_UsedModules[] = {
    &Creatres_InternalInitialise,
    &Creatres_InternalFinalise,
    &ThrowCatch_Initialise,
    &ThrowCatch_Finalise,
	&RelRecv_Initialise,
	&RelRecv_Finalise,
    0,
    0,
};

Status Creatres_Initialise(void) {
    return StdInit_InitialisationSequence(&Creatres_StdInit_Description);
}

void Creatres_Finalise(void) {
    StdInit_FinalisationSequence(&Creatres_StdInit_Description);
}

#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Creatres", Creatres_Initialise__Fv);
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Creatres", Creatres_Finalise__Fv);
#endif

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Creatres", func_001AD1D8); /* load? */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Creatres", func_001AD298); /* unload */

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Creatres", _vt$18Creature_Resources);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Creatres", __tf18Creature_Resources);

#ifdef NON_MATCHING

char * func_001AD308() {
    return "Creature";
}

char * func_001AD318() {
    return "Creature";
}

#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Creatres", func_001AD308);
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Creatres", func_001AD318);
#endif

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Creatres", __tft8Resource1Z24Creature_TypeDescription);
