#include "common.h"

#include "FGDK3/Playstation2/InpJoy5.h"
#include "FGDK3/Playstation2/Controller.h"

Status InputJoy5_InternalInitialise() {
    return Status(0xFFFFFFFF, "c:/coding/fgdk3/Code/Playstation2/InpJoy5.cpp", 41);
}

void InputJoy5_InternalFinalise() {
    return;
}

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
    0
};

Status InputJoy5_Initialise() {
    return StdInit_InitialisationSequence(&InputJoy5_StdInit_Description);
}

void InputJoy5_Finalise() {
    StdInit_FinalisationSequence(&InputJoy5_StdInit_Description);
}

Status func_002F94A8() {
    return Status(0xFFFFFFFF, 0, -1);
}

void func_002F94E0() {
    return;
}

Status func_002F94E8() {
    return Status(0xFFFFFFFF, 0, -1);
}

void func_002F9520() {
    return;
}
