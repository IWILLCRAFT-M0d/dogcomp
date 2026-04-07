#include "common.h"

#include "FGDK3/InpUtil.h"

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/InpUtil", InputUtil_InternalInitialise__Fv);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/InpUtil", InputUtil_InternalFinalise__Fv);


#ifdef NON_MATCHING

StdInit_ModuleDescription InputUtil_StdInit_Description = {
    0,
    &InputUtil_StdInit_UsedModules
};

void * const InputUtil_StdInit_UsedModules[] = {
    &InputUtil_InternalInitialise,
    &InputUtil_InternalFinalise,
    &InputEvent_Initialise,
    &InputEvent_Finalise,
    &InputKeyboard_Initialise,
    &InputKeyboard_Finalise,
    &InputMouse_Initialise,
    &InputMouse_Finalise,
    //
    &InputJoystick1_Initialise,
    &InputJoystick1_Finalise,
    &InputJoy5_Initialise,
    &InputJoy5_Finalise,
    //
    0,
    0,
};

Status InputUtil_Initialise() {
    return StdInit_InitialisationSequence(&InputUtil_StdInit_Description);
}

void InputUtil_Finalise() {
    StdInit_FinalisationSequence(&InputUtil_StdInit_Description);
}

#else
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/InpUtil", InputUtil_Initialise__Fv);
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/InpUtil", InputUtil_Finalise__Fv);
#endif

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/InpUtil", func_002F75C8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/InpUtil", func_002F7990);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/InpUtil", func_002F7A78);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/InpUtil", func_002F7B38);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/InpUtil", func_002F7BF8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/InpUtil", func_002F7CE0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/InpUtil", func_002F7DB8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/InpUtil", func_002F7E38);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/InpUtil", func_002F7F10);
