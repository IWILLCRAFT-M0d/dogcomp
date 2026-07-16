#include "common.h"

#include "FGDK3/ThrowCat.h"
#include "FGDK3/Playstation2/sifManager.h"
#include "FGDK3/Playstation2/TimSrv.h"

#include "FGDK3/Playstation2/File_CD.h"

#include <common/libcdvd.h>
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

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_002FEAE0); // unreferenced
INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_002FEB88); // unreferenced
INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_002FEC08); // unreferenced

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_002FEC40);

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_002FECA8); // unreferenced
INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_002FED60); // unreferenced

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

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_002FF0F8__13StorageDevice); // RCT3 StorageDevice::IsValidDevice() const ?

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_002FF128__13StorageDevice); // RCT3 StorageDevice::IsCorrupt() const ?

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_002FF158__13StorageDevice); // RCT3 StorageDevice::IsDamaged() const ?


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

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_002FF8E0); // unreferenced

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_002FF950); // unreferenced

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_002FF9B8); // unreferenced

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_002FFA20__18FileSystemDiscRoot);

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_002FFA58__18FileSystemDiscRoot); // needs more arguments?

int FileSystemDiscRoot::func_002FFA90() { // RCT3 FileSystemDiscRoot::CanWrite ?
    return 1;
}

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_002FFAC0__18FileSystemDiscRoot);

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_002FFAF8__18FileSystemDiscRoot);

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_002FFB30);

INCLUDE_ASM("asm/nonmatchings/text_002FCF70", func_002FFB70);

