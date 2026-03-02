#include "common.h"

#include "FGDK3/Playstation2/File_MemCard.h"
#include "FGDK3/Playstation2/File_CD.h"
#include "FGDK3/Playstation2/File.h"

#include "unk.h"

// Playstation2/File.cpp?
INCLUDE_ASM("asm/nonmatchings/text_00307D30", File_InternalInitialise__Fv);

void File_InternalFinalise() {

}

#ifdef NON_MATCHING
StdInit_ModuleDescription File_StdInit_Description = {
    0,
    &File_StdInit_UsedModules
};

void * const File_StdInit_UsedModules[] = {
    &File_InternalInitialise,
    &File_InternalFinalise,
    &File_MemCard_Initialise,
    &File_MemCard_Finalise,
    0,
    0,
};

Status File_Initialise() {
    return StdInit_InitialisationSequence(&File_StdInit_Description);
}

void File_Finalise() {
    StdInit_FinalisationSequence(&File_StdInit_Description);
}

#else
INCLUDE_ASM("asm/nonmatchings/text_00307D30", File_Initialise__Fv);
INCLUDE_ASM("asm/nonmatchings/text_00307D30", File_Finalise__Fv);
#endif

INCLUDE_ASM("asm/nonmatchings/text_00307D30", func_00307F00);

INCLUDE_ASM("asm/nonmatchings/text_00307D30", func_00307F78);

INCLUDE_ASM("asm/nonmatchings/text_00307D30", func_00307FC8);

INCLUDE_RODATA("asm/nonmatchings/text_00307D30", _vt$12File_MemRead);

INCLUDE_RODATA("asm/nonmatchings/text_00307D30", _vt$Q24File11OpenWatcher);

INCLUDE_ASM("asm/nonmatchings/text_00307D30", __tfQ24File11OpenWatcher);

INCLUDE_ASM("asm/nonmatchings/text_00307D30", __tf12File_MemRead);

INCLUDE_ASM("asm/nonmatchings/text_00307D30", func_00308140);

INCLUDE_ASM("asm/nonmatchings/text_00307D30", func_00308190);

INCLUDE_ASM("asm/nonmatchings/text_00307D30", func_00308238);

INCLUDE_ASM("asm/nonmatchings/text_00307D30", func_003082E8);

INCLUDE_ASM("asm/nonmatchings/text_00307D30", func_00308368);

INCLUDE_ASM("asm/nonmatchings/text_00307D30", func_003083A0);

INCLUDE_ASM("asm/nonmatchings/text_00307D30", func_00308430);

INCLUDE_ASM("asm/nonmatchings/text_00307D30", func_003084E8);

INCLUDE_ASM("asm/nonmatchings/text_00307D30", func_00308530);

INCLUDE_ASM("asm/nonmatchings/text_00307D30", func_00308590);

INCLUDE_ASM("asm/nonmatchings/text_00307D30", func_003085F8);

INCLUDE_ASM("asm/nonmatchings/text_00307D30", func_00308638);

INCLUDE_ASM("asm/nonmatchings/text_00307D30", func_003086A8);

INCLUDE_ASM("asm/nonmatchings/text_00307D30", func_003086D8);

INCLUDE_ASM("asm/nonmatchings/text_00307D30", func_00308708); // File::OpenWatcher member

INCLUDE_ASM("asm/nonmatchings/text_00307D30", func_00308738); // File::OpenWatcher member

INCLUDE_ASM("asm/nonmatchings/text_00307D30", func_00308768); // File::OpenWatcher mmeber

INCLUDE_ASM("asm/nonmatchings/text_00307D30", func_00308798); // File::OpenWatcher member

INCLUDE_ASM("asm/nonmatchings/text_00307D30", func_003087C0); /* return D_00453740 */

INCLUDE_ASM("asm/nonmatchings/text_00307D30", func_003087F8);

INCLUDE_ASM("asm/nonmatchings/text_00307D30", func_00308858);

INCLUDE_ASM("asm/nonmatchings/text_00307D30", func_003088C0);

INCLUDE_ASM("asm/nonmatchings/text_00307D30", __10NullAccess);
/*
NullAccess::NullAccess {

}
*/
INCLUDE_ASM("asm/nonmatchings/text_00307D30", func_00308980);

INCLUDE_ASM("asm/nonmatchings/text_00307D30", func_003089B8);

INCLUDE_ASM("asm/nonmatchings/text_00307D30", func_00308A30);

INCLUDE_ASM("asm/nonmatchings/text_00307D30", func_00308A90);

INCLUDE_ASM("asm/nonmatchings/text_00307D30", func_00308AB8);

INCLUDE_ASM("asm/nonmatchings/text_00307D30", func_00308B40);

INCLUDE_ASM("asm/nonmatchings/text_00307D30", func_00308BF0);

INCLUDE_ASM("asm/nonmatchings/text_00307D30", func_00308C30);

INCLUDE_ASM("asm/nonmatchings/text_00307D30", func_00308C80);

INCLUDE_ASM("asm/nonmatchings/text_00307D30", func_00308CD0);

INCLUDE_ASM("asm/nonmatchings/text_00307D30", func_00308D10);

INCLUDE_ASM("asm/nonmatchings/text_00307D30", func_00308D48);

INCLUDE_ASM("asm/nonmatchings/text_00307D30", func_00308D98);

INCLUDE_ASM("asm/nonmatchings/text_00307D30", func_00308DD0);

INCLUDE_ASM("asm/nonmatchings/text_00307D30", func_00308E08);

INCLUDE_ASM("asm/nonmatchings/text_00307D30", func_00308E80);

INCLUDE_ASM("asm/nonmatchings/text_00307D30", func_00308ED0);

INCLUDE_ASM("asm/nonmatchings/text_00307D30", func_00308F20);

INCLUDE_ASM("asm/nonmatchings/text_00307D30", func_00308F70);

INCLUDE_ASM("asm/nonmatchings/text_00307D30", func_00308FA8);

INCLUDE_ASM("asm/nonmatchings/text_00307D30", func_00308FE8);

INCLUDE_ASM("asm/nonmatchings/text_00307D30", __18FileFindAccess_Nul);

INCLUDE_RODATA("asm/nonmatchings/text_00307D30", _vt$18FileFindAccess_Nul);

INCLUDE_RODATA("asm/nonmatchings/text_00307D30", _vt$10NullAccess);

INCLUDE_ASM("asm/nonmatchings/text_00307D30", func_00309080); /* __tfQ24File6Access */

INCLUDE_ASM("asm/nonmatchings/text_00307D30", _$_10NullAccess);

INCLUDE_ASM("asm/nonmatchings/text_00307D30", __tf10NullAccess);

INCLUDE_ASM("asm/nonmatchings/text_00307D30", _$_18FileFindAccess_Nul);

INCLUDE_ASM("asm/nonmatchings/text_00307D30", __tf18FileFindAccess_Nul);

INCLUDE_ASM("asm/nonmatchings/text_00307D30", func_00309258);

INCLUDE_ASM("asm/nonmatchings/text_00307D30", func_003092C8);

INCLUDE_ASM("asm/nonmatchings/text_00307D30", func_00309308);

INCLUDE_ASM("asm/nonmatchings/text_00307D30", func_00309378); // NullAccess member

INCLUDE_ASM("asm/nonmatchings/text_00307D30", func_003093A0); // NullAccess member

INCLUDE_ASM("asm/nonmatchings/text_00307D30", func_003093D0); /* "C:/Coding/FGDK3/Code/Common/File.cpp" string referenced */

INCLUDE_ASM("asm/nonmatchings/text_00307D30", func_00309448); /* "C:/Coding/FGDK3/Code/Common/File.cpp" string referenced */

INCLUDE_ASM("asm/nonmatchings/text_00307D30", func_003094C0); // NullAccess member

INCLUDE_ASM("asm/nonmatchings/text_00307D30", func_003094E8);

INCLUDE_ASM("asm/nonmatchings/text_00307D30", func_00309518);

INCLUDE_ASM("asm/nonmatchings/text_00307D30", func_00309548);

INCLUDE_ASM("asm/nonmatchings/text_00307D30", func_00309588);

INCLUDE_ASM("asm/nonmatchings/text_00307D30", func_003095C8);

INCLUDE_ASM("asm/nonmatchings/text_00307D30", func_003095F8);

INCLUDE_ASM("asm/nonmatchings/text_00307D30", func_00309620);

INCLUDE_ASM("asm/nonmatchings/text_00307D30", func_00309680);

INCLUDE_ASM("asm/nonmatchings/text_00307D30", func_003096B0); /* __tfQ28FileFind6Access */

INCLUDE_ASM("asm/nonmatchings/text_00307D30", func_00309708);

INCLUDE_ASM("asm/nonmatchings/text_00307D30", func_00309740);
