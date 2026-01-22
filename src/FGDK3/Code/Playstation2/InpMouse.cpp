#include "common.h"

#include "FGDK3/Playstation2/InpMouse.h"

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/InpMouse", func_002F7F28);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/InpMouse", func_002F7F80);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/InpMouse", func_002F8030);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/InpMouse", func_002F8078);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/InpMouse", func_002F80C0);

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Playstation2/InpMouse", D_00446AA8);

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

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/InpMouse", InputMouse_Initialise__Fv);

/*
Status InputKeyboard_Initialise(void) {
    return StdInit_InitialisationSequence(&InputMouse_StdInit_Description);
}
*/

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/InpMouse", InputMouse_Finalise__Fv);

/*
void InputMouse_Finalise(void) { StdInit_FinalisationSequence(&InputMouse_StdInit_Description);
}
*/

#ifdef NON_MATCHING
// mouse thread
int D_00453574;
void func_002F8760() {
    SuspendThread(D_00453574);
};

void func_002F8788() {
    ResumeThread(D_00453574);
};

#else
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/InpMouse", func_002F8760);
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/InpMouse", func_002F8788);
#endif

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/InpMouse", func_002F87B0); /* InputMouse_Device::~InputMouse_Device */

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Playstation2/InpMouse", _vt$17InputMouse_Device);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/InpMouse", __tf17InputMouse_Device);

