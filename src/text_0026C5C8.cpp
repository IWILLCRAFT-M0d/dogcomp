#include "common.h"
#include "FGDK3/Playstation2/Thread.h"
#include "FGDK3/ThrowCat.h"
#include "mem.h"

#include "unk.h"


#ifdef NON_MATCHING

Status StdMem_InternalInitialise(void) {
    return Status(0xFFFFFFFF, "c:/coding/fgdk3/Code/Common/StdMem.cpp", 986);
}

#else
INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", StdMem_InternalInitialise__Fv);
#endif

void StdMem_InternalFinalise(void) {
    return;
}

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", StdMem_Initialise__Fv);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", StdMem_Finalise__Fv);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0026C668);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0026C698);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0026C708);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0026C728);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0026C780);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0026C818);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0026C900);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0026C9C8);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", StdInit_InitialisationSequence__FP25StdInit_ModuleDescription); // stdinit.cpp?

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", StdInit_FinalisationSequence__FP25StdInit_ModuleDescription);


#ifdef NON_MATCHING
void StdInit_ClientBase::CheckError(Status status) {
  //SStack_20.m_unk0 = *param_2;
  if (status.m_unk0 != 0xffffffff) {
    status.m_file = "";
    ThrowCatch_DefiniteThrow(status);
  }
}
#else
INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", CheckError__18StdInit_ClientBaseG6Status);
#endif

// status.cpp?
INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", PrepareReport_6StatusPci); /* Status::PrepareReport(char*, int) */

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0026CED0);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", __tf6Status);


Status func_0026CF60(void) {
    return Status(0xFFFFFFFF, 0x0, -1);
}


Status func_0026CF98(void) {
    return Status(0xFFFFFFFF, 0x0, -1);
}


INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0026CFD0);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0026CFF8);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0026D068);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0026D108);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0026D110);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0026D120); /* return 0; */

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0026D128);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0026D138);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0026D148);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0026D158);

INCLUDE_RODATA("asm/nonmatchings/text_0026C5C8", _vt$6Status);
