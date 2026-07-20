#include "common.h"

#include "FGDK3/Playstation2/File_MemCard.h"
#include "FGDK3/ThrowCat.h"
#include "FGDK3/Playstation2/sifManager.h"
#include "FGDK3/Playstation2/TimSrv.h"

#include <ee/libmc.h>
#include "unk.h"

#ifdef NON_MATCHING
int D_00452ECC = 0; // memcard initialised var?
Status File_MemCard_InternalInitialise() {

    if (D_00452ECC == 0) {
        int mcError = sceMcInit();
        if (mcError != sceMcIniSucceed) {
            return func_0026CFF8(mcError,"Could not initialise memory card interface", "c:/coding/fgdk3/Code/Playstation2/File_MemCard.cpp", 76);
        }
        D_00452ECC = 1;
    }
    return func_0026CFD0(0xFFFFFFFF, "c:/coding/fgdk3/Code/Playstation2/File_MemCard.cpp", 82);
}
#else
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/File_MemCard", File_MemCard_InternalInitialise__Fv);
#endif


void File_MemCard_InternalFinalise() {

}


#ifdef NON_MATCHING

StdInit_ModuleDescription File_MemCard_StdInit_Description = {
    0,
    &File_MemCard_StdInit_UsedModules
};

void * const File_MemCard_StdInit_UsedModules[] = {
    &File_MemCard_InternalInitialise,
    &File_MemCard_InternalFinalise,
    &ThrowCatch_Initialise,
    &ThrowCatch_Finalise,
    &Semaphore_Initialise,
    &Semaphore_Finalise,
    &TimSrv_Initialise,
    &TimSrv_Finalise,
    0,
    0,
};

Status File_MemCard_Initialise() {
    return StdInit_InitialisationSequence(&File_MemCard_StdInit_Description);
}

void File_MemCard_Finalise() {
    StdInit_FinalisationSequence(&File_MemCard_StdInit_Description);
}

#else
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/File_MemCard", File_MemCard_Initialise__Fv);
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/File_MemCard", File_MemCard_Finalise__Fv);
#endif

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Playstation2/File_MemCard", D_00447520); /* "c:/coding/fgdk3/Code/Playstation2/File_MemCard.cpp" */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/File_MemCard", func_002FFD10);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/File_MemCard", func_002FFF30); /* File_MemCard */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/File_MemCard", _$_12File_MemCard);

#ifdef NON_MATCHING
void File_MemCard::func_00300040() {
    if (this->unk424 == 0) {
        this->unk424 = 1;
        //FUN_00300720(this);
        //FUN_00286a30((int *)&DAT_00452ec8);
        if (sceMcClose(this->m_fd) == sceMcResSucceed) {
            //     do {
            //       retSync = sceMcSync(1,(int *)0x0,&result);
            //     } while (retSync == 0);
            //     if (result < 0) {
            //       FUN_002869c8((int *)&DAT_00452ec8);
            //       FUN_002ffd10(result);
            //     }
            //   }
            //   else {
            //     FUN_002869c8((int *)&DAT_00452ec8);
            //     FUN_002ffd10(-1);
            //   }
            //   FUN_002869c8((int *)&DAT_00452ec8);
        }
        // return;
    }
}
#else
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/File_MemCard", func_00300040__12File_MemCard);
#endif


INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/File_MemCard", func_00300140__12File_MemCard); // File_MemCard virtual

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/File_MemCard", func_003002C0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/File_MemCard", func_003003C0); // File_MemCard virtual

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/File_MemCard", func_00300640);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/File_MemCard", func_00300720);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/File_MemCard", func_00300780);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/File_MemCard", func_00300890);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/File_MemCard", func_00300988__12File_MemCard); // File_MemCard virtual

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/File_MemCard", func_003009C0); /* FileFind_MemCard */

#ifdef NON_MATCHING
FileSystemDisc_MemCard::FileSystemDisc_MemCard(int slot): FileSystemDisc(0, string_ascii(slot == 1 ? "memcard1:" : "memcard2:")) {
    this->unk20 = new StorageDevice_MemCard(slot);
}
#else
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/File_MemCard", __22FileSystemDisc_MemCardi);
#endif

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/File_MemCard", _$_22FileSystemDisc_MemCard);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/File_MemCard", func_00300D50); // virtual

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/File_MemCard", func_00301058); // FileSystemDisc_Memcard virtual
// new FileFind_MemCard

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/File_MemCard", func_00301158); // FileSystemDisc_Memcard virtual

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/File_MemCard", func_003011F8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/File_MemCard", func_00301290); // StoradgeDevice_MemCardUpdater virtual

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/File_MemCard", func_003014E8);

#ifdef NON_MATCHING
StorageDevice_MemCard::StorageDevice_MemCard(int slot) : StorageDevice(string_ascii(slot == 1 ? "memcard1:" : "memcard2:")) {
    //this->unk18 = 1;
    //this->unk1C = 0;
    //this->unk28 = new StorageDevice_MemCardUpdater(this);
}




#else
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/File_MemCard", __21StorageDevice_MemCardi); /* int slot */
#endif

#ifdef NON_MATCHING
int StorageDevice_MemCard::func_00301648() {
    if (this->unk18 != 0) {
        this->unk18 = 0;
        return 1;
    }
    return 0;
}
#else
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/File_MemCard", func_00301648); // StorageDevice_MemCard virtual
#endif

// 00452ec8 memcard ps2semaphore?
#ifdef NON_MATCHING

void StorageDevice_MemCard::func_003016A0() {
    int temp_2;
    int ret;

    // func_00286A30(&D_00452EC8);
    temp_2 = sceMcFormat(this->m_port, 0);
    // sp0 = temp_2;
    if (temp_2 == 0) {
        loop_2:
        if (sceMcSync(1, 0, &ret) == 0) {
            goto loop_2;
        }
        if (temp_2 < 0) {
            // func_002869C8(&D_00452EC8);
            return;
        }
        this->unk18 = 1;
        this->unk1C = 1;
        this->unk20 = 1;
        this->unk24 = 0x7D0000;
        // func_002869C8(&D_00452EC8);
        return;
    }
    // func_002869C8(&D_00452EC8);
}
#else
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/File_MemCard", func_003016A0__21StorageDevice_MemCard);
#endif

#ifdef NON_MATCHING
void StorageDevice_MemCard::func_00301798() {
    //     FUN_00286a30((int *)&DAT_00452ec8);
    //
    if (sceMcUnformat(this->m_port, 0) == sceMcResSucceed) {
        this->unk18 = 1;
        this->unk1C = 1;
        this->unk20 = 0;
    }
    else {
    //   FUN_002869c8((int *)&DAT_00452ec8);
    //   FUN_002ffd10(-1);
    }
    // FUN_002869c8((int *)&DAT_00452ec8);
    return;
}
#else
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/File_MemCard", func_00301798__21StorageDevice_MemCard);
#endif

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/File_MemCard", func_00301860); // StorageDevice_MemCard virtual

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/File_MemCard", func_00301958); // StorageDevice_MemCard virtual

#ifndef NON_MATCHING
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/File_MemCard", func_00301A50);
#endif

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Playstation2/File_MemCard", D_004475A0); /* "memcard1:" */

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Playstation2/File_MemCard", D_004475B0); /* "memcard2:" */

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Playstation2/File_MemCard", _vt$28StorageDevice_MemCardUpdater);

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Playstation2/File_MemCard", _vt$16FileFind_MemCard);

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Playstation2/File_MemCard", _vt$12File_MemCard);

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Playstation2/File_MemCard", _vt$22FileSystemDisc_MemCard);

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Playstation2/File_MemCard", _vt$21StorageDevice_MemCard);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/File_MemCard", __tf21StorageDevice_MemCard);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/File_MemCard", __tf22FileSystemDisc_MemCard);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/File_MemCard", __tf12File_MemCard);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/File_MemCard", _$_16FileFind_MemCard);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/File_MemCard", __tf16FileFind_MemCard);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/File_MemCard", _$_28StorageDevice_MemCardUpdater);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/File_MemCard", __tf28StorageDevice_MemCardUpdater);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/File_MemCard", func_00301D98); // unreferenced

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/File_MemCard", func_00301DE8); // unreferenced

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/File_MemCard", func_00301E90); // unreferenced

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/File_MemCard", func_00301F10); // unreferenced

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/File_MemCard", func_00301F48); // unreferenced

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/File_MemCard", func_00301FB0);

File::Access::Access() {
    this->unk0 = 0;
}

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/File_MemCard", _$_Q24File6Access);

int File::Access::func_00302120() {
    return 0;
}

FileFind::Access::Access() {

}

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/File_MemCard", _$_Q28FileFind6Access);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/File_MemCard", func_00302200);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/File_MemCard", func_00302270);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/File_MemCard", func_00302328);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/File_MemCard", func_00302390);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/File_MemCard", func_00302400);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/File_MemCard", func_003024A8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/File_MemCard", func_00302510);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/File_MemCard", func_00302578);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/File_MemCard", func_003025A8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/File_MemCard", func_003025D8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/File_MemCard", func_00302608);

#ifdef NON_MATCHING
int StorageDevice_MemCard::func_00302658() {
    return this->unk1C;
}
#else
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/File_MemCard", func_00302658__21StorageDevice_MemCard); // StorageDevice_MemCard virtual
#endif

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/File_MemCard", func_00302690); // StorageDevice_MemCard virtual

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/File_MemCard", func_00302720);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/File_MemCard", func_00302790);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/File_MemCard", func_003027C8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/File_MemCard", func_00302838);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/File_MemCard", func_00302870); // FileSystemDisc_MemCard virtual

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/File_MemCard", func_003028A8); // FileSystemDisc_MemCard virtual

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/File_MemCard", func_00302930);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/File_MemCard", func_00302998__16FileFind_MemCard);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/File_MemCard", func_003029D8__16FileFind_MemCard);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/File_MemCard", func_00302A08);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/File_MemCard", func_00302A80__16FileFind_MemCard);

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Playstation2/File_MemCard", _vt$Q28FileFind6Access);

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Playstation2/File_MemCard", _vt$Q24File6Access);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/File_MemCard", __tfQ24File6Access);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/File_MemCard", __tfQ28FileFind6Access);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/File_MemCard", func_00302B80); /* __tf6Thread */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/File_MemCard", func_00302BD0); /* __tf13StorageDevice */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/File_MemCard", func_00302C28); // unreferenced

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/File_MemCard", func_00302C98);

#ifndef NON_MATCHING
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/File_MemCard", func_00302CE0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/File_MemCard", func_00302D18);
#endif
