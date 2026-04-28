#include "common.h"

#include "Dogs/Objtable.h"
#include "FGDK3/ThrowCat.h"

#include "unk.h"

#ifdef NON_MATCHING
extern void* D_0044EF84;
extern int D_0044EF88;
extern void* D_00452944;
extern int D_0045298C;
extern s_D_004533D4* D_004533D4;

s_func_001EC630* func_001EC630(s_func_001EC630* arg0) {
    arg0->unk0 = 1;
    if (((D_004533D4 == 0) || (D_0044EF84 == 0)) && (D_00452944 == 0)) {
        if (D_0044EF88 == 0) {
            if (func_002D5B40("Objtable should always have two elements") != 0) {
                asm("break 0x1");
            }
            D_0044EF88 = D_0045298C;
        }
    }
    arg0->unk4 = D_004533D4->unk10;
    return arg0;
}
#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Objtable", func_001EC630); // "Objtable should always have two elements"
#endif

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Objtable", func_001EC6C8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Objtable", func_001EC6D8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Objtable", func_001EC718);

#ifdef NON_MATCHING
Status Objtable_InternalInitialise() {

    return Status(0xFFFFFFFF, "c:/coding/dogs/Code/Common/Objtable.cpp", 357);
}
#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Objtable", Objtable_InternalInitialise__Fv);
#endif

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Objtable", Objtable_InternalFinalise__Fv);

#ifdef NON_MATCHING

StdInit_ModuleDescription Objtable_StdInit_Description = {
    0,
    &Objtable_StdInit_UsedModules
};

void * const Objtable_StdInit_UsedModules[] = {
    &Objtable_InternalInitialise,
    &Objtable_InternalFinalise,
    &ThrowCatch_Initialise,
    &ThrowCatch_Finalise,
    0,
    0,
};

Status Objtable_Initialise() {
    return StdInit_InitialisationSequence(&Objtable_StdInit_Description);
}

void Objtable_Finalise() {
    StdInit_FinalisationSequence(&Objtable_StdInit_Description);
}

#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Objtable", Objtable_Initialise__Fv);
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Objtable", Objtable_Finalise__Fv);
#endif



#ifdef NON_MATCHING
extern void* D_0044EF94;
extern void* D_0044EF90;
extern void* D_0044EF80;
void func_001EC8D8() {
    Objtable_InternalFinalise();
    Objtable_InternalInitialise();
    D_0044EF94 = 0;
    D_0044EF90 = D_0044EF80;
}
#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Objtable", func_001EC8D8);
#endif

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Objtable", func_001EC910); // Called by SimObj_Base

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Objtable", func_001EC9F8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Objtable", func_001ECA88);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Objtable", func_001ECB28);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Objtable", func_001ECB80);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Objtable", func_001ECD00);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Objtable", D_003E6528); /* "c:/coding/dogs/Code/Common/Objtable.cpp" */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Objtable", func_001ECDD0); // "Something bad happened in the object table"

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Objtable", func_001ECF70);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Objtable", func_001ECFD8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Objtable", func_001ECFF0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Objtable", func_001ED058);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Objtable", func_001ED0D0); // set var?

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Objtable", func_001ED188);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Objtable", func_001ED1B8);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Objtable", D_003E6570); /* "Something bad happened in the object table" */

