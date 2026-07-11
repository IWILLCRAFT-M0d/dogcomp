#include "common.h"

#include "FGDK3/InpUtil.h"
#include "FGDK3/Inpevent.h"
#include "FGDK3/Playstation2/InpKeybd.h"
#include "FGDK3/Playstation2/InpMouse.h"
// other headers go here
#include "FGDK3/Playstation2/InpJoys1.h"
#include "FGDK3/Playstation2/InpJoy5.h"
// other headers go here

#ifdef NON_MATCHING
Status InputUtil_InternalInitialise() {
    //return Status(0xFFFFFFFF, "c:/coding/fgdk3/Code/Common/InpUtil.cpp", 140);
}
#else
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/InpUtil", InputUtil_InternalInitialise__Fv);
#endif

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

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/InpUtil", func_002F7CE0); // unreferenced

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/InpUtil", func_002F7DB8); // unreferenced

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/InpUtil", func_002F7E38); // unreferenced

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/InpUtil", func_002F7F10);
