#include "common.h"

#include "Dogs/Objects.h"
#include "unk.h"

#ifdef NON_MATCHING

Status Objects_InternalInitialise(void) {
    return Status(0xFFFFFFFF, "c:/coding/dogs/Code/Common/Objects.cpp", 205);
}

#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Objects", Objects_InternalInitialise__Fv);
#endif

void Objects_InternalFinalise(void) {
    return;
}

#ifdef NON_MATCHING

StdInit_ModuleDescription Objects_StdInit_Description = {
    0,
    &Objects_StdInit_UsedModules
};

void * const Objects_StdInit_UsedModules[] = {
    &Objects_InternalInitialise,
    &Objects_InternalFinalise,
    0,
    0,
};

Status Objects_Initialise(void) {
    return StdInit_InitialisationSequence(&Objects_StdInit_Description);
}

void Objects_Finalise(void) {
    StdInit_FinalisationSequence(&Objects_StdInit_Description);
}

#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Objects", Objects_Initialise__Fv);
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Objects", Objects_Finalise__Fv);
#endif

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Objects", func_001EA6A8); // despawn objects function

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Objects", func_001EB100); // spawn objects function

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Objects", func_001EBBE8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Objects", func_001EBC30);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Objects", func_001EBD10);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Objects", func_001EBE10);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Objects", func_001EBF20);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Objects", func_001EBF30);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Objects", func_001EBFC8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Objects", func_001EC028);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Objects", func_001EC048);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Objects", func_001EC068);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Objects", func_001EC100);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Objects", func_001EC160);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Objects", func_001EC180);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Objects", func_001EC218);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Objects", func_001EC278);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Objects", func_001EC310);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Objects", func_001EC370);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Objects", func_001EC390);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Objects", func_001EC428);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Objects", func_001EC488);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Objects", func_001EC4E8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Objects", func_001EC598);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Objects", func_001EC5F0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Objects", func_001EC610);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Objects", D_003E6440);


