#include "common.h"

#include "FGDK3/Playstation2/InpKeybd.h"

#ifdef NON_MATCHING
InputKeyboard_Device::InputKeyboard_Device() : InputDevice_Device(0,256,0,0,0,0) {

}
#else
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/InpKeybd", __20InputKeyboard_Device);
#endif

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/InpKeybd", func_002F8870);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/InpKeybd", func_002F89A8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/InpKeybd", func_002F8AC0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/InpKeybd", InputKeyboard_InternalInitialise__Fv);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/InpKeybd", InputKeyboard_InternalFinalise__Fv);

#ifdef NON_MATCHING

StdInit_ModuleDescription InputKeyboard_StdInit_Description = {
    0,
    &InputKeyboard_StdInit_UsedModules
};

void * const InputKeyboard_StdInit_UsedModules[] = {
    &InputKeyboard_InternalInitialise,
    &InputKeyboard_InternalFinalise,
    &Semaphore_Initialise,
    &Semaphore_Finalise,
    &RunPath_Initialise,
    &RunPath_Finalise,
    &InputDevice_Initialise,
    &InputDevice_Finalise,
    0,
    0,
};

Status InputKeyboard_Initialise() {
    return StdInit_InitialisationSequence(&InputKeyboard_StdInit_Description);
}

void InputKeyboard_Finalise() { StdInit_FinalisationSequence(&InputKeyboard_StdInit_Description);
}

#else
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/InpKeybd", InputKeyboard_Initialise__Fv);
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/InpKeybd", InputKeyboard_Finalise__Fv);
#endif

#ifdef NON_MATCHING
extern int D_00453594; // keyboard thread (g_keyboardThread?)

void InputKeyboard_SuspendThread() {
    SuspendThread(D_00453594);
};

void InputKeyboard_ResumeThread() {
    ResumeThread(D_00453594);
};

#else
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/InpKeybd", InputKeyboard_SuspendThread__Fv);
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/InpKeybd", InputKeyboard_ResumeThread__Fv);
#endif


INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/InpKeybd", _$_20InputKeyboard_Device);

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Playstation2/InpKeybd", _vt$20InputKeyboard_Device);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/InpKeybd", __tf20InputKeyboard_Device);
