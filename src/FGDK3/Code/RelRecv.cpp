#include "common.h"
#include "mem.h"
#include "unk.h"

#include "FGDK3/RelRecv.h"
#include "FGDK3/ThrowCat.h"

#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

// Beginning of RelRec.cpp

#ifdef NON_MATCHING

Status RelRecv_InternalInitialise() {
  return Status(0xFFFFFFFF,"c:/coding/fgdk3/Code/Common/RelRecv.cpp", 62);
}

#else
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/RelRecv", RelRecv_InternalInitialise__Fv);
#endif

void RelRecv_InternalFinalise() {
    return;
}

#ifdef NON_MATCHING
StdInit_ModuleDescription RelRecv_StdInit_Description = {
    0,
    &RelRecv_StdInit_UsedModules
};

void * const RelRecv_StdInit_UsedModules[] = {
    &RelRecv_InternalInitialise,
    &RelRecv_InternalFinalise,
    &ThrowCatch_Initialise,
    &ThrowCatch_Finalise,
    0,
    0,
};

Status RelRecv_Initialise() {
    return StdInit_InitialisationSequence(&RelRecv_StdInit_Description);
}

void RelRecv_Finalise() {
    StdInit_FinalisationSequence(&RelRecv_StdInit_Description);
}

#else
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/RelRecv", RelRecv_Initialise__Fv);
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/RelRecv", RelRecv_Finalise__Fv);
#endif

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/RelRecv", func_00277670);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/RelRecv", func_002776C0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/RelRecv", func_00277720);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/RelRecv", func_00277848);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/RelRecv", func_002779E0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/RelRecv", func_00278018);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/RelRecv", func_00278098);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/RelRecv", func_00278118);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/RelRecv", func_00278190);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/RelRecv", func_002781E0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/RelRecv", func_00278278);

void * StdAllocator::Alloc(size_t nbytes) {
  return malloc(nbytes);
}

void StdAllocator::Free(void* ptr) {
  free(ptr);
}

void* StdAllocator::MemAlign(size_t alignment, size_t size) {
    return memalign(alignment, size);
}

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/RelRecv", func_00278308); /* StdAllocator */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/RelRecv", func_00278350); // unreferenced

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/RelRecv", func_00278358); // unreferenced

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/RelRecv", _vt$12StdAllocator);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/RelRecv", __tf12StdAllocator);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/RelRecv", func_002783A8);

