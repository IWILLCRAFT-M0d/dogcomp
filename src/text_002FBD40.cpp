#include "common.h"

#include "FGDK3/Playstation2/Thread.h"

#include "unk.h"
// inputCD

INCLUDE_ASM("asm/nonmatchings/text_002FBD40", func_002FBD40); /* InputCD_PS2::InputCD_PS2 ?*/

INCLUDE_ASM("asm/nonmatchings/text_002FBD40", func_002FBD70); // virtual

INCLUDE_ASM("asm/nonmatchings/text_002FBD40", func_002FBE78);

#ifdef NON_MATCHING

Status func_002FBEB0(void) {
    return Status(0xFFFFFFFF, 0, -1);
}

#else
INCLUDE_ASM("asm/nonmatchings/text_002FBD40", func_002FBEB0);
#endif

void func_002FBEE8(void) {
    return;
}

INCLUDE_ASM("asm/nonmatchings/text_002FBD40", func_002FBEF0);

INCLUDE_ASM("asm/nonmatchings/text_002FBD40", func_002FBF18);

INCLUDE_RODATA("asm/nonmatchings/text_002FBD40", _vt$11InputCD_PS2);

INCLUDE_ASM("asm/nonmatchings/text_002FBD40", __tf11InputCD_PS2);

INCLUDE_ASM("asm/nonmatchings/text_002FBD40", func_002FBF98);

INCLUDE_ASM("asm/nonmatchings/text_002FBD40", __tf7InputCD);
