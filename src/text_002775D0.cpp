#include "common.h"
#include "mem.h"
#include "unk.h"

#include "FGDK3/RelRecv.h"
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>


#ifdef NON_MATCHING

Status RelRecv_InternalInitialise() {
  return Status(0xFFFFFFFF,"c:/coding/fgdk3/Code/Common/RelRecv.cpp", 62);
}

#else
INCLUDE_ASM("asm/nonmatchings/text_002775D0", RelRecv_InternalInitialise__Fv);
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
INCLUDE_ASM("asm/nonmatchings/text_002775D0", RelRecv_Initialise__Fv);
INCLUDE_ASM("asm/nonmatchings/text_002775D0", RelRecv_Finalise__Fv);
#endif

INCLUDE_ASM("asm/nonmatchings/text_002775D0", func_00277670);

INCLUDE_ASM("asm/nonmatchings/text_002775D0", func_002776C0);

INCLUDE_ASM("asm/nonmatchings/text_002775D0", func_00277720);

INCLUDE_ASM("asm/nonmatchings/text_002775D0", func_00277848);

INCLUDE_ASM("asm/nonmatchings/text_002775D0", func_002779E0);

INCLUDE_ASM("asm/nonmatchings/text_002775D0", func_00278018);

INCLUDE_ASM("asm/nonmatchings/text_002775D0", func_00278098);

INCLUDE_ASM("asm/nonmatchings/text_002775D0", func_00278118);

INCLUDE_ASM("asm/nonmatchings/text_002775D0", func_00278190);

INCLUDE_ASM("asm/nonmatchings/text_002775D0", func_002781E0);

INCLUDE_ASM("asm/nonmatchings/text_002775D0", func_00278278);

void * StdAllocator::Alloc(size_t nbytes) {
  return malloc(nbytes);
}

void StdAllocator::Free(void* ptr) {
  free(ptr);
}

void* StdAllocator::MemAlign(size_t alignment, size_t size) {
    return memalign(alignment, size);
}

INCLUDE_ASM("asm/nonmatchings/text_002775D0", func_00278308); /* StdAllocator */

INCLUDE_ASM("asm/nonmatchings/text_002775D0", func_00278350);

INCLUDE_ASM("asm/nonmatchings/text_002775D0", func_00278358);

INCLUDE_RODATA("asm/nonmatchings/text_002775D0", _vt$12StdAllocator);

INCLUDE_ASM("asm/nonmatchings/text_002775D0", __tf12StdAllocator);

INCLUDE_ASM("asm/nonmatchings/text_002775D0", func_002783A8);

INCLUDE_ASM("asm/nonmatchings/text_002775D0", func_002784C8); /* __7PointerPv Pointer::Pointer */

INCLUDE_ASM("asm/nonmatchings/text_002775D0", _$_7Pointer);

INCLUDE_ASM("asm/nonmatchings/text_002775D0", func_00278608);

INCLUDE_ASM("asm/nonmatchings/text_002775D0", func_00278668);

INCLUDE_ASM("asm/nonmatchings/text_002775D0", func_002786A0);

INCLUDE_ASM("asm/nonmatchings/text_002775D0", func_002786B8);

INCLUDE_ASM("asm/nonmatchings/text_002775D0", func_002786D8);

INCLUDE_ASM("asm/nonmatchings/text_002775D0", func_002786F8);

INCLUDE_ASM("asm/nonmatchings/text_002775D0", func_002788D8);

INCLUDE_ASM("asm/nonmatchings/text_002775D0", func_00278CA0);

INCLUDE_ASM("asm/nonmatchings/text_002775D0", func_00278D10);

INCLUDE_ASM("asm/nonmatchings/text_002775D0", func_00278D30);

INCLUDE_ASM("asm/nonmatchings/text_002775D0", func_00278D88__15StandardPointerf);

INCLUDE_ASM("asm/nonmatchings/text_002775D0", func_00279000); /* JoystickPointer */

INCLUDE_ASM("asm/nonmatchings/text_002775D0", _$_15JoystickPointer);

INCLUDE_ASM("asm/nonmatchings/text_002775D0", func_00279238);

INCLUDE_ASM("asm/nonmatchings/text_002775D0", func_00279258);

INCLUDE_ASM("asm/nonmatchings/text_002775D0", func_00279408);

INCLUDE_ASM("asm/nonmatchings/text_002775D0", __tf7Pointer);

INCLUDE_ASM("asm/nonmatchings/text_002775D0", func_00279618);

INCLUDE_ASM("asm/nonmatchings/text_002775D0", func_00279630); /* return (float) a0-unk8 */

INCLUDE_ASM("asm/nonmatchings/text_002775D0", func_00279638); /* return (float) a0-unkC */

INCLUDE_ASM("asm/nonmatchings/text_002775D0", func_00279640); /* return (float) a0-unk10 */

INCLUDE_ASM("asm/nonmatchings/text_002775D0", func_00279648); /* return (float) a0-unk14 */

INCLUDE_ASM("asm/nonmatchings/text_002775D0", func_00279650); /* return (float) a0-unk18 */

INCLUDE_ASM("asm/nonmatchings/text_002775D0", func_00279658); /* return (float) a0-unk1C */

INCLUDE_ASM("asm/nonmatchings/text_002775D0", func_00279660);

INCLUDE_ASM("asm/nonmatchings/text_002775D0", func_00279680); /* a0-unk54 = a1 */

INCLUDE_ASM("asm/nonmatchings/text_002775D0", func_00279688); /* a0-unk48 = a1 */

INCLUDE_ASM("asm/nonmatchings/text_002775D0", func_00279690);

INCLUDE_ASM("asm/nonmatchings/text_002775D0", func_002796B0);

INCLUDE_ASM("asm/nonmatchings/text_002775D0", _$_15StandardPointer);

INCLUDE_RODATA("asm/nonmatchings/text_002775D0", _vt$15JoystickPointer);

INCLUDE_RODATA("asm/nonmatchings/text_002775D0", _vt$15StandardPointer);

INCLUDE_RODATA("asm/nonmatchings/text_002775D0", _vt$7Pointer);

INCLUDE_RODATA("asm/nonmatchings/text_002775D0", D_0043C460); /* "7Pointer" */

INCLUDE_ASM("asm/nonmatchings/text_002775D0", __tf15StandardPointer);

INCLUDE_ASM("asm/nonmatchings/text_002775D0", __tf15JoystickPointer);

INCLUDE_RODATA("asm/nonmatchings/text_002775D0", D_0043C4A0);

INCLUDE_RODATA("asm/nonmatchings/text_002775D0", D_0043C4E0);

INCLUDE_RODATA("asm/nonmatchings/text_002775D0", D_0043C4F0);

INCLUDE_RODATA("asm/nonmatchings/text_002775D0", D_0043C5A8);

INCLUDE_RODATA("asm/nonmatchings/text_002775D0", D_0043C610);

INCLUDE_RODATA("asm/nonmatchings/text_002775D0", D_0043C678);

INCLUDE_RODATA("asm/nonmatchings/text_002775D0", D_0043C690);

INCLUDE_RODATA("asm/nonmatchings/text_002775D0", D_0043C6E0);

INCLUDE_RODATA("asm/nonmatchings/text_002775D0", D_0043C730);

INCLUDE_ASM("asm/nonmatchings/text_002775D0", func_00279840); /* __tf12InputBinding */
