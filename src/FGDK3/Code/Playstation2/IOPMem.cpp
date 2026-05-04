#include "common.h"
#include "unk.h"

#include "FGDK3/Playstation2/IOPMem.h"
#include "FGDK3/Playstation2/sifManager.h"

#include <ee/sifdev.h>
#include "FGDK3/ThrowCat.h"

#ifdef NON_MATCHING

Status IOPMem_InternalInitialise() {
    return Status(0xFFFFFFFF, "c:/coding/fgdk3/Code/Playstation2/IOPMem.cpp", 47);
}

#else
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/IOPMem", IOPMem_InternalInitialise__Fv);
#endif

void IOPMem_InternalFinalise() {
    return;
}

#ifdef NON_MATCHING

StdInit_ModuleDescription IOPMem_StdInit_Description = {
    0,
    &IOPMem_StdInit_UsedModules
};

void * const IOPMem_StdInit_UsedModules[] = {
    &IOPMem_InternalInitialise,
    &IOPMem_InternalFinalise,
    &Semaphore_Initialise,
    &Semaphore_Finalise,
    0,
    0,
};

Status IOPMem_Initialise() {
        return StdInit_InitialisationSequence(&IOPMem_StdInit_Description);
}

void IOPMem_Finalise() {
    StdInit_FinalisationSequence(&IOPMem_StdInit_Description);
}

#else
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/IOPMem", IOPMem_Initialise__Fv);
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/IOPMem", IOPMem_Finalise__Fv);
#endif

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/IOPMem", func_00296710);

#ifdef NON_MATCHING
void func_002967C8(void* arg0, int arg1) {
    sceSifFreeIopHeap(arg0);
    IOPMem_Finalise();
    //    if (arg1 & 1) {
    //    delete(arg0);
    //}
}
#else
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/IOPMem", func_002967C8);
#endif
/*
void func_002967C8(void* arg0, int arg1) {
    sceSifFreeIopHeap(arg0);
    IOPMem_Finalise();

}
*/

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Playstation2/IOPMem", D_0043EC70); /* "c:/coding/fgdk3/Code/Playstation2/IOPMem.cpp" */
