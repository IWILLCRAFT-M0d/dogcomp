#include "common.h"

#include "FGDK3/Playstation2/MusicRes.h"

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/MusicRes", MusicRes_InternalInitialise__Fv);

void MusicRes_InternalFinalise() {
    return;
}

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/MusicRes", MusicRes_Initialise__Fv);

/*
Status MusicRes_Initialise(void) {
    return StdInit_InitialisationSequence(&MusicRes_StdInit_Description);
}
*/

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/MusicRes", MusicRes_Finalise__Fv);

/*
void MusicRes_Finalise(void) {
    StdInit_FinalisationSequence(&MusicRes_StdInit_Description);
}
*/

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/MusicRes", func_0027EB38); /* load */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/MusicRes", func_0027EC50); /* unload */

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Playstation2/MusicRes", _vt$15Music_Resources);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/MusicRes", __tf15Music_Resources);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/MusicRes", func_0027ED38); /* return "Music"; */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/MusicRes", __tf8Resource1Z11Music_Piece);
