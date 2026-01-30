#include "common.h"

#include "FGDK3/Playstation2/InpJoy5.h"

#ifdef NON_MATCHING
Status InputJoy5_InternalInitialise(void) {
    return Status(0xFFFFFFFF, "c:/coding/fgdk3/Code/Playstation2/InpJoy5.cpp", 41);
}

#else
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/InpJoy5", InputJoy5_InternalInitialise__Fv);
#endif

void InputJoy5_InternalFinalise() {
    return;
}

#ifdef NON_MATCHING

StdInit_ModuleDescription InputJoy5_StdInit_Description = {
    0,
    &InputJoy5_StdInit_UsedModules
};

void * const InputJoy5_StdInit_UsedModules[] = {
    &InputJoy5_InternalInitialise,
    &InputJoy5_InternalFinalise,
    &Controller_Initialise,
    &Controller_Finalise,
    0,
    0,
};

Status InputJoy5_Initialise(void) {
    return StdInit_InitialisationSequence(&InputJoy5_StdInit_Description);
}

void InputJoy5_Finalise(void) {
    StdInit_FinalisationSequence(&InputJoy5_StdInit_Description);
}

#else
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/InpJoy5", InputJoy5_Initialise__Fv);
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/InpJoy5", InputJoy5_Finalise__Fv);
#endif

#ifdef NON_MATCHING

Status func_002F94A8(void) {
    return Status(0xFFFFFFFF, 0, -1);
}

#else
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/InpJoy5", func_002F94A8); /* return Status */
#endif

void func_002F94E0() {
    return;
}
#ifdef NON_MATCHING

Status func_002F94E8(void) {
    return Status(0xFFFFFFFF, 0, -1);
}

#else
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/InpJoy5", func_002F94E8); /* return Status */
#endif

void func_002F9520() {
    return;
}
