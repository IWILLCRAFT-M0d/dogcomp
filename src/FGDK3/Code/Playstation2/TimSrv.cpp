#include "common.h"

#include "FGDK3/Playstation2/TimSrv.h"

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/TimSrv", func_0026A940);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/TimSrv", func_0026A9C8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/TimSrv", func_0026AA48);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/TimSrv", func_0026AB08);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/TimSrv", func_0026ABD8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/TimSrv", TimSrv_InternalInitialise__Fv);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/TimSrv", func_0026AD98);

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

Status TimSrv_Initialise(void) {
    return StdInit_InitialisationSequence(&TimSrv_StdInit_Description);
}

void TimSrv_Finalise(void) {
StdInit_FinalisationSequence(&TimSrv_StdInit_Description);
}

#else
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/TimSrv", TimSrv_Initialise__Fv);
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/TimSrv", TimSrv_Finalise__Fv);
#endif


INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/TimSrv", func_0026AE58);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/TimSrv", func_0026AE98);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/TimSrv", func_0026B028);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/TimSrv", func_0026B040);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/TimSrv", func_0026B0B8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/TimSrv", func_0026B130);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/TimSrv", func_0026B198);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/TimSrv", func_0026B208);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/TimSrv", func_0026B210);

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Playstation2/TimSrv", _vt$12TimSrv_Timer);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/TimSrv", func_0026B218);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/TimSrv", func_0026B268);
