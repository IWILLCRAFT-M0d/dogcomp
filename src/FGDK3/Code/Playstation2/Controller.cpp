#include "common.h"
#include "FGDK3/Playstation2/Controller.h"

#include <eekernel.h>

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Controller", func_002FBFF0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Controller", func_002FC160);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Controller", func_002FC1A8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Controller", func_002FC1F0);

s_func_002FC270* func_002FC270(s_func_002FC270* arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unkC = 0;
    arg0->unk18 = 0;
    return arg0;
}

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Controller", func_002FC288);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Controller", func_002FC798);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Controller", Controller_InternalInitialise__Fv);

#ifdef NON_MATCHING

int D_004535C0;

void func_002FCC10() {
    SuspendThread(D_004535C0); // suspend controller thread
}

void func_002FCC38() {
    ResumeThread(D_004535C0);
}

#else
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Controller", func_002FCC10);
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Controller", func_002FCC38);
#endif

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Controller", Controller_InternalFinalise__Fv);

#ifdef NON_MATCHING

StdInit_ModuleDescription Controller_StdInit_Description = {
    0,
    &Thread_StdInit_UsedModules
};

void * const Controller_StdInit_UsedModules[] = {
    &Controller_InternalInitialise,
    &Controller_InternalFinalise,
    &Semaphore_Initialise,
    &Semaphore_Finalise,
    &InputDevice_Initialise,
    &InputDevice_Finalise,
    &RunPath_Initialise,
    &RunPath_Finalise,
    &Thread_Initialise,
    &Thread_Finalise,
    0,
    0,
};

Status Controller_Initialise(void) {
    return StdInit_InitialisationSequence(&Controller_StdInit_Description);
}

void Controller_Finalise(void) {
    StdInit_FinalisationSequence(&Controller_StdInit_Description);
}

#else
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Controller", Controller_Initialise__Fv);
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Controller", Controller_Finalise__Fv);
#endif


// Controller_Device::Controller_Device
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Controller", func_002FCDE8);

// __static_initialization_and_destruction_0
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Controller", func_002FCE50);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Controller", _$_17Controller_Device);

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Playstation2/Controller", _vt$17Controller_Device);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Controller", __tf17Controller_Device);

// _GLOBAL_$I$(unk)$(unk)
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Controller", func_002FCF50);
