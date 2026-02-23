#include "common.h"

#include "FGDK3/Inpevent.h"


#ifdef NON_MATCHING

Status InputEvent_InternalInitialise(void) {
    int D_00452E30 = 0;
    int D_00452E34 = 0;
    int D_00452E40 = 0;
    return Status(0xFFFFFFFF, "c:/coding/fgdk3/Code/Common/Inpevent.cpp", 143);
}
#else
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Inpevent", InputEvent_InternalInitialise__Fv);
#endif

void InputEvent_InternalFinalise() {
    return;
}

#ifdef NON_MATCHING

StdInit_ModuleDescription InputEvent_StdInit_Description = {
    0,
    &InputEvent_StdInit_UsedModules
};

void * const InputEvent_StdInit_UsedModules[] = {
    &InputEvent_InternalInitialise,
    &InputEvent_InternalFinalise,
    &TimSrv_Initialise,
    &TimSrv_Finalise,
    &InputDevice_Initialise,
    &InputDevice_Finalise,
    &ThrowCatch_Initialise,
    &ThrowCatch_Finalise,
    0,
    0,
};

Status InputEvent_Initialise(void) {
    return StdInit_InitialisationSequence(&InputEvent_StdInit_Description);
}

void InputEvent_Finalise(void) {
    StdInit_FinalisationSequence(&InputEvent_StdInit_Description);
}

#else
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Inpevent", InputEvent_Initialise__Fv);
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Inpevent", InputEvent_Finalise__Fv);
#endif


INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Inpevent", func_002F95E0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Inpevent", func_002F95F8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Inpevent", func_002F9678);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Inpevent", func_002F96B8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Inpevent", func_002F9700);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Inpevent", func_002F9770);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Inpevent", func_002F97A8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Inpevent", func_002F97E0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Inpevent", func_002F98E8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Inpevent", func_002F9920);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Inpevent", func_002F99D0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Inpevent", func_002F9A50);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Inpevent", func_002F9AA8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Inpevent", func_002F9B20);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Inpevent", func_002F9B68);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Inpevent", func_002F9BD8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Inpevent", func_002F9C10);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Inpevent", func_002F9D90);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Inpevent", func_002F9E70);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Inpevent", func_002FA050);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Inpevent", func_002FA190);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Inpevent", func_002FA1C8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Inpevent", func_002FA210);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Inpevent", func_002FA220);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Inpevent", func_002FA268);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Inpevent", func_002FA2B8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Inpevent", func_002FA308);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Inpevent", func_002FA3F8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Inpevent", func_002FA4D8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Inpevent", func_002FA5F8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Inpevent", func_002FA630);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Inpevent", func_002FA678);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Inpevent", func_002FA688);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Inpevent", func_002FA6D8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Inpevent", func_002FA728); /* InputEvent_Device */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Inpevent", _$_17InputEvent_Device);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Inpevent", func_002FA7F0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Inpevent", func_002FA810);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Inpevent", func_002FA830);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Inpevent", func_002FA8E8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Inpevent", func_002FA958);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Inpevent", func_002FAA50);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Inpevent", func_002FAAA8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Inpevent", func_002FAB80);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Inpevent", func_002FAC00);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Inpevent", func_002FAC80);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Inpevent", func_002FACF8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Inpevent", func_002FAD70);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Inpevent", func_002FAED8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Inpevent", func_002FB018);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Inpevent", func_002FB078);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Inpevent", func_002FB0D8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Inpevent", func_002FB198);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Inpevent", func_002FB3A0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Inpevent", func_002FB410);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Inpevent", func_002FB5E8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Inpevent", func_002FB638);

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Inpevent", D_00446FF0); /* "c:/coding/fgdk3/Code/Common/Inpevent.cpp" */

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Inpevent", _vt$Q224InputEvent_ValueInstance10LocalTimer);

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Inpevent", _vt$17InputEvent_Device);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Inpevent", __tf17InputEvent_Device);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Inpevent", func_002FB710); /* return a0->unk4 */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Inpevent", __tfQ224InputEvent_ValueInstance10LocalTimer);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Inpevent", func_002FB768);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Inpevent", __tf25InputDevice_ChangeCatcher);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Inpevent", func_002FB7C8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Inpevent", func_002FB818);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Inpevent", func_002FB858);
