#include "common.h"
#include "FGDK3/Playstation2/Thread.h"

#include "mem.h"
#include "FGDK3/Playstation2/RunPath.h"
#include "FGDK3/Playstation2/SoundManager.h"
#include "FGDK3/Playstation2/Sound.h"
#include "FGDK3/Playstation2/sifManager.h"
#include "FGDK3/NavGraphRes.h"
#include "unk.h"
#include "FGDK3/RelRecv.h"
#include "FGDK3/ResLibs/TextureRes/Code/TextureRes.h"

#ifdef NON_MATCHING

Status StdMem_InternalInitialise(void) {
    return Status(0xFFFFFFFF, "c:/coding/fgdk3/Code/Common/StdMem.cpp", 0x3DA);
}

#else
INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", StdMem_InternalInitialise__Fv);
#endif

//INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0026C610);
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

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", StdInit_InitialisationSequence__FP25StdInit_ModuleDescription);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", StdInit_FinalisationSequence__FP25StdInit_ModuleDescription);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", CheckError__18StdInit_ClientBaseG6Status);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0026CE60); /* Status::PrepareReport */

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0026CED0);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", __tf6Status);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0026CF60);

INCLUDE_ASM("asm/nonmatchings/text_0026C5C8", func_0026CF98);

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


