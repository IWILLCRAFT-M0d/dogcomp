#include "common.h"

#include "FGDK3/Playstation2/File_MemCard.h"
#include "FGDK3/ThrowCat.h"
#include "FGDK3/Playstation2/sifManager.h"
#include "FGDK3/Playstation2/TimSrv.h"

#include "FGDK3/Playstation2/File_CD.h"

#include <common/libcdvd.h>
#include <ee/libmc.h>
#include "unk.h"

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", __14FileSystemDisc); /* FileSystemDisc::FileSystemDisc */

#ifdef NON_MATCHING
FileSystemDisc::FileSystemDisc(void* arg1, string_ascii arg2) {

}
#else
INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_002FD020);
#endif

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", _$_14FileSystemDisc);

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_002FD290);

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_002FD470);

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_002FD910);

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_002FDCF0);

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_002FE0E8);

#ifdef NON_MATCHING
FileSystem::FileSystem(string_ascii arg1) {

}
#else
INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_002FE5C0); /* FileSystem */
#endif

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", _$_10FileSystem);

#ifdef NON_MATCHING
StorageDevice::StorageDevice(string_ascii arg1) {

}
#else
INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_002FE738); /* StorageDevice */
#endif

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", _$_13StorageDevice);

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_002FE8B0); // RCT3 StorageDevice::Get ?

INCLUDE_RODATA("asm/nonmatchings/text_002FCF70", _vt$13StorageDevice);

INCLUDE_RODATA("asm/nonmatchings/text_002FCF70", _vt$10FileSystem);

INCLUDE_RODATA("asm/nonmatchings/text_002FCF70", _vt$14FileSystemDisc);

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", __tf14FileSystemDisc);

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", __tf10FileSystem);

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", __tf13StorageDevice);

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_002FEA90);

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_002FEAE0);

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_002FEB88);

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_002FEC08);

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_002FEC40);

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_002FECA8);

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_002FED60);

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_002FEDD0);

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_002FEE40);

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_002FEEE8);

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_002FEF38);

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_002FEF70);

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_002FEFA8);

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_002FEFF0);

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_002FF038);

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_002FF080);

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_002FF0C8);

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_002FF0F8__13StorageDevice); // RCT3 StorageDevice::IsValidDevice ?

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_002FF128__13StorageDevice); // RCT3 StorageDevice::IsCorrupt ?

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_002FF158__13StorageDevice); // RCT3 StorageDevice::IsDamaged ?


#ifdef NON_MATCHING // TODO: finish parent classes
FileSystemDiscRoot::FileSystemDiscRoot() {

};
#else
INCLUDE_ASM("asm/nonmatchings/text_002FCF70", __18FileSystemDiscRoot);
#endif

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_002FF1E0);

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_002FF250);

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_002FF2C0);

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_002FF310);

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_002FF370);

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_002FF3C0);

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_002FF410);

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_002FF448);

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_002FF480);

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_002FF4F8);

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_002FF548);

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_002FF588);

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_002FF5C8);

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_002FF600);

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_002FF678);

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_002FF6C8);

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_002FF708);

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_002FF748);

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_002FF798);

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_002FF7E8);

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", _$_18FileSystemDiscRoot);

INCLUDE_RODATA("asm/nonmatchings/text_002FCF70", _vt$18FileSystemDiscRoot);

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", __tf18FileSystemDiscRoot);

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_002FF8E0);

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_002FF950);

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_002FF9B8);

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_002FFA20__18FileSystemDiscRoot);

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_002FFA58__18FileSystemDiscRoot); // needs more arguments?

int FileSystemDiscRoot::func_002FFA90() {
    return 1;
}

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_002FFAC0__18FileSystemDiscRoot);

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_002FFAF8__18FileSystemDiscRoot);

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_002FFB30);

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_002FFB70);

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
INCLUDE_ASM("asm/nonmatchings/text_002FCF70", File_MemCard_InternalInitialise__Fv);
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
INCLUDE_ASM("asm/nonmatchings/text_002FCF70", File_MemCard_Initialise__Fv);
INCLUDE_ASM("asm/nonmatchings/text_002FCF70", File_MemCard_Finalise__Fv);
#endif

INCLUDE_RODATA("asm/nonmatchings/text_002FCF70", D_00447520); /* "c:/coding/fgdk3/Code/Playstation2/File_MemCard.cpp" */

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_002FFD10);

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_002FFF30); /* File_MemCard */

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", _$_12File_MemCard);

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
INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_00300040__12File_MemCard);
#endif


INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_00300140__12File_MemCard);

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_003002C0);

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_003003C0);

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_00300640);

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_00300720);

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_00300780);

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_00300890);

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_00300988__12File_MemCard);

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_003009C0); /* FileFind_MemCard */

#ifdef NON_MATCHING
FileSystemDisc_MemCard::FileSystemDisc_MemCard(int slot): FileSystemDisc(0, string_ascii(slot == 1 ? "memcard1:" : "memcard2:")) {
    this->unk20 = new StorageDevice_MemCard(slot);
}
#else
INCLUDE_ASM("asm/nonmatchings/text_002FCF70", __22FileSystemDisc_MemCardi);
#endif

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", _$_22FileSystemDisc_MemCard);

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_00300D50); // virtual

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_00301058);

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_00301158);

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_003011F8);

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_00301290);

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_003014E8);

#ifdef NON_MATCHING
StorageDevice_MemCard::StorageDevice_MemCard(int slot) : StorageDevice(string_ascii(slot == 1 ? "memcard1:" : "memcard2:")) {
//this->unk18 = 1;
//this->unk1C = 0;
//this->unk28 = new StorageDevice_MemCardUpdater(this);
}




#else
INCLUDE_ASM("asm/nonmatchings/text_002FCF70", __21StorageDevice_MemCardi); /* int slot */
#endif

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_00301648); // StorageDevice_MemCard virtual

#ifdef NON_MATCHING
void StorageDevice_MemCard::func_003016A0() {
    //
    if (sceMcFormat(this->m_port, 0) == sceMcResSucceed) {
        //
    }
    else {
        this->unk18 = 1;
        this->unk1C = 1;
    }
}
#else
INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_003016A0__21StorageDevice_MemCard);
#endif

#ifdef NON_MATCHING
void StorageDevice_MemCard::func_00301798() {
  //     FUN_00286a30((int *)&DAT_00452ec8);
  //
    if (sceMcUnformat(this->m_port, 0) == sceMcResSucceed) {
        this->unk18 = 1;
        this->unk1C = 1;
  //   *(undefined4 *)&param_1->field_0x20 = 0;
  }
  // else {
  //   FUN_002869c8((int *)&DAT_00452ec8);
  //   FUN_002ffd10(-1);
  // }
  // FUN_002869c8((int *)&DAT_00452ec8);
  // return;
}
#else
INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_00301798__21StorageDevice_MemCard);
#endif

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_00301860); // StorageDevice_MemCard virtual

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_00301958); // StorageDevice_MemCard virtual

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_00301A50);

INCLUDE_RODATA("asm/nonmatchings/text_002FCF70", D_004475A0); /* "memcard1:" */

INCLUDE_RODATA("asm/nonmatchings/text_002FCF70", D_004475B0); /* "memcard2:" */

INCLUDE_RODATA("asm/nonmatchings/text_002FCF70", _vt$28StorageDevice_MemCardUpdater);

INCLUDE_RODATA("asm/nonmatchings/text_002FCF70", _vt$16FileFind_MemCard);

INCLUDE_RODATA("asm/nonmatchings/text_002FCF70", _vt$12File_MemCard);

INCLUDE_RODATA("asm/nonmatchings/text_002FCF70", _vt$22FileSystemDisc_MemCard);

INCLUDE_RODATA("asm/nonmatchings/text_002FCF70", _vt$21StorageDevice_MemCard);

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", __tf21StorageDevice_MemCard);

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", __tf22FileSystemDisc_MemCard);

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", __tf12File_MemCard);

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", _$_16FileFind_MemCard);

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", __tf16FileFind_MemCard);

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", _$_28StorageDevice_MemCardUpdater);

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", __tf28StorageDevice_MemCardUpdater);

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_00301D98);

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_00301DE8);

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_00301E90);

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_00301F10);

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_00301F48);

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_00301FB0);

File::Access::Access() {
    this->unk0 = 0;
}

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", _$_Q24File6Access);

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_00302120); // belongs to File::Access?

FileFind::Access::Access() {

}

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", _$_Q28FileFind6Access);

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_00302200);

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_00302270);

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_00302328);

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_00302390);

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_00302400);

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_003024A8);

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_00302510);

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_00302578);

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_003025A8);

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_003025D8);

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_00302608);

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_00302658); // virtual

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_00302690);

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_00302720);

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_00302790);

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_003027C8);

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_00302838);

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_00302870);

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_003028A8);

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_00302930);

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_00302998__16FileFind_MemCard);

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_003029D8__16FileFind_MemCard);

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_00302A08);

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_00302A80__16FileFind_MemCard);

INCLUDE_RODATA("asm/nonmatchings/text_002FCF70", _vt$Q28FileFind6Access);

INCLUDE_RODATA("asm/nonmatchings/text_002FCF70", _vt$Q24File6Access);

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", __tfQ24File6Access);

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", __tfQ28FileFind6Access);

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_00302B80); /* __tf6Thread */

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_00302BD0); /* __tf13StorageDevice */

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_00302C28);

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_00302C98);

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_00302CE0);

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_00302D18);


