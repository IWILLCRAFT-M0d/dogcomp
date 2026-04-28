#include "common.h"

#include "FGDK3/Playstation2/TimSrv.h"
#include <eekernel.h>

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/TimSrv", func_0026A940);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/TimSrv", func_0026A9C8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/TimSrv", func_0026AA48);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/TimSrv", func_0026AB08);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/TimSrv", func_0026ABD8);

Status TimSrv_InternalInitialise() {
    return func_0026ABD8();
}

#ifdef NON_MATCHING
extern int D_00453480;
extern void* D_00453860;

void func_0026AD98() {
    DisableIntc(INTC_TIM0);
    RemoveIntcHandler(INTC_TIM0, D_00453480);
    if (D_00453860 != 0) {
        delete[] D_00453860;
    }
    D_00453860 = 0;
}
#else
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/TimSrv", func_0026AD98__Fv);
#endif


INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/TimSrv", TimSrv_InternalFinalise__Fv);

#ifdef NON_MATCHING

StdInit_ModuleDescription TimSrv_StdInit_Description = {
    0,
    &TimSrv_StdInit_UsedModules
};

void * const TimSrv_StdInit_UsedModules[] = {
    &TimSrv_InternalInitialise,
    &TimSrv_InternalFinalise,
    0,
    0,
};

Status TimSrv_Initialise() {
    return StdInit_InitialisationSequence(&TimSrv_StdInit_Description);
}

void TimSrv_Finalise() {
    StdInit_FinalisationSequence(&TimSrv_StdInit_Description);
}

#else
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/TimSrv", TimSrv_Initialise__Fv);
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/TimSrv", TimSrv_Finalise__Fv);
#endif


INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/TimSrv", TimSrv_GetTime);
/*
long TimSrv_GetTime() {
    long temp_16;

    DisableIntc(INTC_TIM0);
    func_0026A940();
    temp_16 = D_00453468;
    EnableIntc(INTC_TIM0);
    return temp_16;
}*/
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/TimSrv", func_0026AE98);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/TimSrv", func_0026B028);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/TimSrv", func_0026B040); /* TimSrv_Timer */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/TimSrv", _$_12TimSrv_Timer);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/TimSrv", func_0026B130);
// DisableIntc(INTC_TIM0);
//
// EnableIntc(INTC_TIM0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/TimSrv", func_0026B198);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/TimSrv", func_0026B208); /* return a0->unk10 */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/TimSrv", func_0026B210); /* a0->unk10 = a1 */

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Playstation2/TimSrv", _vt$12TimSrv_Timer);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/TimSrv", func_0026B218);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/TimSrv", func_0026B268);
