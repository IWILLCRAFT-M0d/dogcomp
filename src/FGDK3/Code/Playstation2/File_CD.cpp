#include "common.h"
#include "unk.h"

#include <common/libcdvd.h>

#include "FGDK3/Playstation2/File_CD.h"

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/File_CD", func_00302D50);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/File_CD", File_CD_InternalInitialise__Fv);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/File_CD", File_CD_InternalFinalise__Fv);

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

Status File_CD_Initialise() {
    return StdInit_InitialisationSequence(&File_CD_StdInit_Description);
}

void File_CD_Finalise() {
    StdInit_FinalisationSequence(&File_CD_StdInit_Description);
}

#else
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/File_CD", File_CD_Initialise__Fv);
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/File_CD", File_CD_Finalise__Fv);
#endif

#ifdef NON_MATCHING
File_CD::File_CD(sceCdlFILE* fp) {

}
#else
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/File_CD", __7File_CDPG10sceCdlFILE);
#endif

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/File_CD", _$_7File_CD);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/File_CD", func_003030E8); // File_CD Member

#ifdef NON_MATCHING
int File_CD::func_00303110() {
    return this->unkC;
}
#else
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/File_CD", func_00303110__7File_CD);
#endif

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Playstation2/File_CD", D_00447880); /* "c:/coding/FGDK3/Code/Playstation2/File_CD_CD.cpp" */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/File_CD", func_00303148); // "CD read fail lsn=%d,%d err=%d %d retries to go\n"

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/File_CD", func_00303590); // File_CD member

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/File_CD", func_00303A60); // File_CD member

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/File_CD", func_00303AD0); // File_CD member

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/File_CD", func_00303B70__7File_CD); // File_CD Member

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/File_CD", func_00303BB0); // "CD search for %s\n"

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/File_CD", func_00303FD0); // FileSystemDisc_CD member

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/File_CD", func_00304008);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/File_CD", _$_17FileSystemDisc_CD);

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Playstation2/File_CD", _vt$7File_CD);

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Playstation2/File_CD", _vt$17FileSystemDisc_CD);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/File_CD", __tf17FileSystemDisc_CD);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/File_CD", __tf7File_CD);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/File_CD", func_00304208);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/File_CD", func_00304270);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/File_CD", func_003042B8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/File_CD", func_00304300);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/File_CD", func_00304340);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/File_CD", func_003043B0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/File_CD", func_003043E8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/File_CD", func_00304418);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/File_CD", func_00304478);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/File_CD", func_003044E0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/File_CD", func_00304550);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/File_CD", func_003045F8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/File_CD", func_00304660);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/File_CD", func_003046C8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/File_CD", func_00304730); // FileSystemDisc_CD member

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/File_CD", func_00304768); // FileSystemDisc_CD member

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/File_CD", __17FileSystemDisc_CD);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/File_CD", func_00304830); // FileSystemDisc_CD member

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/File_CD", func_00304860);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/File_CD", func_003048A0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/File_CD", func_00304908);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/File_CD", func_00304960);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/File_CD", func_00304A08);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/File_CD", func_00304A68);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/File_CD", func_00304AD8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/File_CD", func_00304B10);


