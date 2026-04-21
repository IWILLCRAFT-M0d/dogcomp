#include "common.h"

#include "FGDK3/Playstation2/InpMouse.h"

#ifdef NON_MATCHING
InputMouse_Device::InputMouse_Device() : InputDevice_Device(1,2,3,0,0,0) {
    this->unk28 = 0x80000000; // INT_MAX + 1?
}
#else
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/InpMouse", __17InputMouse_Device);
#endif

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/InpMouse", func_002F7F80);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/InpMouse", func_002F8030);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/InpMouse", func_002F8078);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/InpMouse", func_002F80C0);

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Playstation2/InpMouse", D_00446AA8); /* "c:/coding/fgdk3/Code/Common/InpUtil.cpp" */

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Playstation2/InpMouse", D_00446B28);

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Playstation2/InpMouse", D_00446B70);

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Playstation2/InpMouse", D_00446B98);

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Playstation2/InpMouse", D_00446BC0);

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Playstation2/InpMouse", D_00446BE8);

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Playstation2/InpMouse", D_00446C10);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/InpMouse", InputMouse_InternalInitialise__Fv);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/InpMouse", func_002F8600);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/InpMouse", func_002F8648);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/InpMouse", InputMouse_InternalFinalise__Fv);

#ifdef NON_MATCHING

StdInit_ModuleDescription InputMouse_StdInit_Description = {
    0,
    &InputMouse_StdInit_UsedModules
};

void * const InputMouse_StdInit_UsedModules[] = {
    &InputMouse_InternalInitialise,
    &InputMouse_InternalFinalise,
    &Semaphore_Initialise,
    &Semaphore_Finalise,
    &RunPath_Initialise,
    &RunPath_Finalise,
    &Thread_Initialise,
    &Thread_Finalise,
    &InputDevice_Initialise,
    &InputDevice_Finalise,
    &InputKeyboard_Initialise,
    &InputKeyboard_Finalise,
    0,
    0,
};

Status InputMouse_Initialise() {
    return StdInit_InitialisationSequence(&InputMouse_StdInit_Description);
}

void InputMouse_Finalise() {
    StdInit_FinalisationSequence(&InputMouse_StdInit_Description);
}

#else
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/InpMouse", InputMouse_Initialise__Fv);
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/InpMouse", InputMouse_Finalise__Fv);
#endif

#ifdef NON_MATCHING
extern int D_00453574; // mouse thread
void InputMouse_SuspendThread() {
    SuspendThread(D_00453574);
};

void InputMouse_ResumeThread() {
    ResumeThread(D_00453574);
};

#else
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/InpMouse", InputMouse_SuspendThread__Fv);
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/InpMouse", InputMouse_ResumeThread__Fv);
#endif

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/InpMouse", _$_17InputMouse_Device);

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Playstation2/InpMouse", _vt$17InputMouse_Device);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/InpMouse", __tf17InputMouse_Device);

