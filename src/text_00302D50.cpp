#include "common.h"

#include "FGDK3/Playstation2/File_MemCard.h"
#include "FGDK3/Playstation2/File_CD.h"

#include <common/libcdvd.h>
#include <ee/libmc.h>
#include "unk.h"

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_00302D50);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", File_CD_InternalInitialise__Fv);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", File_CD_InternalFinalise__Fv);

#ifdef NON_MATCHING

StdInit_ModuleDescription File_CD_StdInit_Description = {
    0,
    &File_CD_StdInit_UsedModules
};

void * const File_CD_StdInit_UsedModules[] = {
    &File_CD_InternalInitialise,
    &File_CD_InternalFinalise,
    &ThrowCatch_Initialise,
    &ThrowCatch_Finalise,
    &Semaphore_Initialise,
    &Semaphore_Finalise,
    0,
    0,
};

Status File_CD_Initialise(void) {
    return StdInit_InitialisationSequence(&File_CD_StdInit_Description);
}

void File_CD_Finalise(void) {
    StdInit_FinalisationSequence(&File_CD_StdInit_Description);
}

#else
INCLUDE_ASM("asm/nonmatchings/text_00302D50", File_CD_Initialise__Fv);
INCLUDE_ASM("asm/nonmatchings/text_00302D50", File_CD_Finalise__Fv);
#endif

INCLUDE_ASM("asm/nonmatchings/text_00302D50", __7File_CDPG10sceCdlFILE); /*File_CD::File_CD(sceCdlFILE * fp) */

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_00303078);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_003030E8);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_00303110);

INCLUDE_RODATA("asm/nonmatchings/text_00302D50", D_00447880); /* "c:/coding/fgdk3/Code/Playstation2/File_CD.cpp" */

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_00303148);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_00303590);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_00303A60);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_00303AD0);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_00303B70);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_00303BB0);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_00303FD0);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_00304008);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_003040C0);

INCLUDE_RODATA("asm/nonmatchings/text_00302D50", _vt$7File_CD);

INCLUDE_RODATA("asm/nonmatchings/text_00302D50", _vt$17FileSystemDisc_CD);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", __tf17FileSystemDisc_CD);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", __tf7File_CD);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_00304208);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_00304270);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_003042B8);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_00304300);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_00304340);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_003043B0);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_003043E8);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_00304418);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_00304478);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_003044E0);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_00304550);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_003045F8);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_00304660);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_003046C8);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_00304730);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_00304768);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", __17FileSystemDisc_CD); /* FileSystemDisc_CD::FileSystemDisc_CD() */

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_00304830);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_00304860);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_003048A0);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_00304908);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_00304960);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_00304A08);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_00304A68);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_00304AD8);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_00304B10);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_00304B48);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_00304BC0);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_00304C18);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_00304C58); /* in FGDK3/Code/Common/File.cpp */

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_00304D08);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_00304D78);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_00304DB0);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_00304DF0);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_00304ED0);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_00304F68);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_003050C0);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_00305210);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_00305378);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_003054A8);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_003055A0);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_00305658);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_00305768);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_003059F0);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_00306030);

INCLUDE_RODATA("asm/nonmatchings/text_00302D50", D_00447A30); /* "C:/Coding/FGDK3/Code/Common/File.cpp" */

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_003065D0);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_003067A0);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_00306920);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_00306B20);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_00306CD8);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_00306D30);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_00306DD8);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_00306E58);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_00306F38);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_00306FC0);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_00306FF8);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_00307030);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_00307258);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_00307430);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_00307600);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_003077C8);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_003079A0);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_00307B58);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_00307C78);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", File_InternalInitialise__Fv);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_00307E58);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", File_Initialise__Fv);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", File_Finalise__Fv);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_00307F00);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_00307F78);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_00307FC8);

INCLUDE_RODATA("asm/nonmatchings/text_00302D50", _vt$12File_MemRead);

INCLUDE_RODATA("asm/nonmatchings/text_00302D50", _vt$Q24File11OpenWatcher);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", __tfQ24File11OpenWatcher);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", __tf12File_MemRead);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_00308140);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_00308190);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_00308238);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_003082E8);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_00308368);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_003083A0);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_00308430);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_003084E8);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_00308530);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_00308590);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_003085F8);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_00308638);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_003086A8);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_003086D8);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_00308708);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_00308738);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_00308768);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_00308798);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_003087C0);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_003087F8);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_00308858);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_003088C0);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", __10NullAccess);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_00308980);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_003089B8);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_00308A30);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_00308A90);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_00308AB8);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_00308B40);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_00308BF0);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_00308C30);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_00308C80);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_00308CD0);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_00308D10);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_00308D48);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_00308D98);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_00308DD0);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_00308E08);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_00308E80);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_00308ED0);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_00308F20);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_00308F70);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_00308FA8);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_00308FE8);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_00309028);

INCLUDE_RODATA("asm/nonmatchings/text_00302D50", _vt$8FileFindAccess_Nul);

INCLUDE_RODATA("asm/nonmatchings/text_00302D50", _vt$10NullAccess);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_00309080);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_003090D8);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", __tf10NullAccess);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_00309198);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", __tf8FileFindAccess_Nul);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_00309258);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_003092C8);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_00309308);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_00309378);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_003093A0);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_003093D0);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_00309448);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_003094C0);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_003094E8);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_00309518);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_00309548);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_00309588);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_003095C8);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_003095F8);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_00309620);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_00309680);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_003096B0);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_00309708);

INCLUDE_ASM("asm/nonmatchings/text_00302D50", func_00309740);
