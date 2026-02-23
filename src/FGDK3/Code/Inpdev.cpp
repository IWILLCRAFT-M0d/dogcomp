#include "common.h"

#include "FGDK3/Inpdev.h"

#ifdef NON_MATCHING

Status InputDevice_InternalInitialise() {
  return Status(0xFFFFFFFF, "c:/coding/fgdk3/Code/Common/Inpdev.cpp", 43);
}

#else
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Inpdev", InputDevice_InternalInitialise__Fv);
#endif

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Inpdev", InputDevice_InternalFinalise__Fv);

#ifdef NON_MATCHING

StdInit_ModuleDescription InputDevice_StdInit_Description = {
    0,
    &InputDevice_StdInit_UsedModules
};

void * const InputDevice_StdInit_UsedModules[] = {
    &InputDevice_InternalInitialise,
    &InputDevice_InternalFinalise,
    0,
    0,
};

Status InputDevice_Initialise(void) {
    return StdInit_InitialisationSequence(&InputDevice_StdInit_Description);
}

void InputDevice_Finalise(void) {
    StdInit_FinalisationSequence(&InputDevice_StdInit_Description);
}

#else
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Inpdev", InputDevice_Initialise__Fv);
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Inpdev", InputDevice_Finalise__Fv);
#endif


INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Inpdev", func_002FB980);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Inpdev", func_002FB9B0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Inpdev", _$_18InputDevice_Device);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Inpdev", func_002FBAA8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Inpdev", func_002FBAD0);

void func_002FBB70(void) {
    return;
}

void func_002FBB78(void) {
    return;
}

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Inpdev", func_002FBB80);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Inpdev", func_002FBC20);

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Inpdev", _vt$18InputDevice_Device);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Inpdev", __tf18InputDevice_Device);

void func_002FBCA0() {
    return;
}

void func_002FBCA8() {
    return;
}

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Inpdev", func_002FBCB0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Inpdev", func_002FBCB8); /* return a0->unk4 */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Inpdev", func_002FBCC0); /* return a0->unk8 */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Inpdev", func_002FBCC8); /* return a0->unkC */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Inpdev", func_002FBCD0); /* return a0->unk10 */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Inpdev", func_002FBCD8); /* return a0->unk14 */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Inpdev", func_002FBCE0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Inpdev", func_002FBCE8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Inpdev", func_002FBD20);
