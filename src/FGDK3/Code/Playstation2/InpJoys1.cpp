#include "common.h"

#include "FGDK3/Playstation2/InpJoys1.h"
#include "FGDK3/Playstation2/TimSrv.h"
#include "FGDK3/Inpdev.h"
#include "FGDK3/ThrowCat.h"


INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/InpJoys1", func_002F8F00); /* InputJoystick1_Device::InputJoystick1_Device */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/InpJoys1", _$_21InputJoystick1_Device);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/InpJoys1", func_002F8FC8); // InputJoystick1_Device member

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/InpJoys1", func_002F8FF8);

void func_002F9018() {
    return;
}

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/InpJoys1", func_002F9020);

#ifdef NON_MATCHING

Status InputJoystick1_InternalInitialise() {
    return Status(0xFFFFFFFF, "c:/coding/fgdk3/Code/playstation2/InpJoys1.cpp", 61);
}

#else
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/InpJoys1", InputJoystick1_InternalInitialise__Fv);
#endif

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/InpJoys1", InputJoystick1_InternalFinalise__Fv);

#ifdef NON_MATCHING

StdInit_ModuleDescription InputJoystick1_StdInit_Description = {
    0,
    &InputJoystick1_StdInit_UsedModules
};

void * const InputJoystick1_StdInit_UsedModules[] = {
    &InputJoystick1_InternalInitialise,
    &InputJoystick1_InternalFinalise,
    &TimSrv_Initialise,
    &TimSrv_Finalise,
    &InputDevice_Initialise,
    &InputDevice_Finalise,
    &ThrowCatch_Initialise,
    &ThrowCatch_Finalise,
    0,
    0,
};

Status InputJoystick1_Initialise() {
    return StdInit_InitialisationSequence(&InputJoystick1_StdInit_Description);
}

void InputJoystick1_Finalise() {
    StdInit_FinalisationSequence(&InputJoystick1_StdInit_Description);
}

#else
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/InpJoys1", InputJoystick1_Initialise__Fv);
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/InpJoys1", InputJoystick1_Finalise__Fv);
#endif


INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Playstation2/InpJoys1", D_00446F00); /* _vt$21InputJoystick1_Device */

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Playstation2/InpJoys1", D_00446F18); /* _vt$21InputJoystick1_Device */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/InpJoys1", __tf21InputJoystick1_Device);

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Playstation2/InpJoys1", D_00446F68);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/InpJoys1", func_002F92F8); /* __tf12TimSrv_Timer */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/InpJoys1", func_002F9348); /* __tf26TimSrv_TimerImplementation */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/InpJoys1", func_002F9388);

void func_002F93C0() {
    return;
}

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/InpJoys1", func_002F93C8); /* return Status */

void func_002F9400() {
    return;
}
