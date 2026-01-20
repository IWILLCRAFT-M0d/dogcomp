#include "common.h"

#include "FGDK3/TextRes.h"

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/TextRes", TextRes_InternalInitialise__Fv);

void TextRes_InternalFinalise(){
    return;
}
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/TextRes", TextRes_Initialise__Fv);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/TextRes", TextRes_Finalise__Fv);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/TextRes", func_0026C420); /* Load? */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/TextRes", func_0026C4E0); /* unload? */
/*
void func_0026C4E0(void* arg1, void* arg2) {
    arg1 = arg2;
    if (arg1 != 0) {
        func_00247D28(arg1);
    }
}
*/

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/TextRes", _vt$14Text_Resources);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/TextRes", __tf14Text_Resources);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/TextRes", func_0026C558); /* return "Text"; */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/TextRes", func_0026C568); /* return "Text" */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/TextRes", __tft8Resource1Zc);
