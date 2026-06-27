#include "common.h"
#include "unk.h"
#include <sifdev.h>
#include "FGDK3/FileSystem_Zip.h"

// Beginning of FileSystem_Zip.cpp

#ifdef NON_MATCHING
FileAccess_Zip_Stored::FileAccess_Zip_Stored(const void* arg1, const FileSystemDisc_Zip* arg2) {
    this->unk8 = arg1;
    this->unkC = arg2;
}
#else
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/FileSystem_Zip", func_00310BE8); // FileAccess_Zip_Stored::FileAccess_Zip_Stored(unk, FileSystemDisc_Zip*);
#endif

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/FileSystem_Zip", _$_21FileAccess_Zip_Stored);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/FileSystem_Zip", func_00310CC0__21FileAccess_Zip_Stored); // FileAccess_Zip_Stored virtual

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/FileSystem_Zip", func_00310CE8__21FileAccess_Zip_Stored);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/FileSystem_Zip", func_00310D20); // FileAccess_Zip_Stored virtual

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/FileSystem_Zip", func_00310F10); // FileAccess_Zip_Stored virtual

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/FileSystem_Zip", func_00310F80); // FileAccess_Zip_Stored member

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/FileSystem_Zip", func_00311008__21FileAccess_Zip_Stored); /* return a0->unk34 */

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/FileSystem_Zip", D_00448040); /* "c:/coding/fgdk3/Code/Common/FileSystem_Zip.cpp" */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/FileSystem_Zip", func_00311040); // RCT3 ZipCheckError?

#ifdef NON_MATCHING
FileAccess_Zip_Deflated::FileAccess_Zip_Deflated(const void* arg1, FileSystemDisc_Zip* arg2) {
    this->unk8 = arg1;
    this->unkC = arg2;
}
#else
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/FileSystem_Zip", func_00311208); /* FileAccess_Zip_Deflated */
#endif

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/FileSystem_Zip", _$_23FileAccess_Zip_Deflated);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/FileSystem_Zip", func_00311300); // FileAccess_Zip_Deflated method

#ifdef NON_MATCHING
void FileAccess_Zip_Deflated::func_00311430() {
    func_00311040(inflateInit2(&this->unk40, -MAX_WBITS));
    //this->unk3C = 0;
}
#else
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/FileSystem_Zip", func_00311430__23FileAccess_Zip_Deflated);
#endif

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/FileSystem_Zip", func_003114C0__23FileAccess_Zip_Deflated);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/FileSystem_Zip", func_003114E8); // FileAccess_Zip_Deflated member

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/FileSystem_Zip", func_00311520); // FileAccess_Zip_Deflated virtual

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/FileSystem_Zip", func_003118A8__23FileAccess_Zip_Deflated); // FileAccess_Zip_Deflated virtual

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/FileSystem_Zip", func_00311918); // FileAccess_Zip_Deflated virtual

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/FileSystem_Zip", func_003119A0__23FileAccess_Zip_Deflated); // FileAccess_Zip_Deflated virtual; return a0->unk38 */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/FileSystem_Zip", func_003119D8); // FileSystem_Zip virtual; RCT3 FileSystem_Zip::TestAndCreateDisc?

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/FileSystem_Zip", func_00311B10); // FileSystemDisc_Zip (FileSystemDisc*, string_ascii const&?)

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/FileSystem_Zip", func_00311B88);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/FileSystem_Zip", func_00311C88); // RCT3 FileSystemDisc_Zip::Compare(char const*, char const*) ?

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/FileSystem_Zip", func_00311DD0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/FileSystem_Zip", func_003120D0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/FileSystem_Zip", func_00312238);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/FileSystem_Zip", func_00312680); /*FileSystemDisc_Zip::Find(char * filename)? */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/FileSystem_Zip", func_00312860);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/FileSystem_Zip", func_003129D0);

#ifdef NON_MATCHING
void* FileSystemDisc_Zip::func_00312BC8(/**/) {
    // s32 sp0;
    // s32 sp4;
    // ? sp10;
    // void *sp20;
    // void *temp_2;
    //
    // sp0 = arg1;
    // sp4 = arg2;
    // if (arg0->unk20 == 0) {
    //     return 0;
    // }
    // if (sp4 != 0) {
    //     func_0026D068(&sp10, 0x1001, sp0, &D_00448040, 0x4CF);
    //     func_00313F58(&sp10);
    // }
    // temp_2 = func_00312680(arg0, func_00286248(sp0));
    // sp20 = temp_2;
    // if (temp_2 == NULL) {
    //     return 0;
    // }
    // switch (sp20->unk8) {
    // case 0:
    //     return new FileAccess_Zip_Stored(sp20, this);
    // case 1:
    //     return 0;
    // case 2:
    //     return 0;
    // case 3:
    //     return 0;
    // case 4:
    //     return 0;
    // case 5:
    //     return 0;
    // case 6:
    //     return 0;
    // case 7:
    //     return 0;
    // case 8:
    //     return new FileAccess_Zip_Deflated(sp20, this);
    // default:
    //     return 0;
    //}
}
#else
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/FileSystem_Zip", func_00312BC8); // FileSystemDisc_Zip virtual; RCT3 FileSystemDisc_Zip::CreateStreamHere(string_ascii const&, ?)
#endif

#ifdef NON_MATCHING
void* FileSystemDisc_Zip::func_00312DA8(/**/) {
    if (this->unk20 == NULL) {
        return NULL;
    }
    else {
        return new FileFindAccess_Zip(/**/);
    }
}
#else
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/FileSystem_Zip", func_00312DA8); // RCT3 FileSystemDisc_Zip::CreateFileFindAccessHere ?
#endif


#ifdef NON_MATCHING
FileFindAccess_Zip::FileFindAccess_Zip() {

}
#else
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/FileSystem_Zip", func_00312E48);
#endif

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/FileSystem_Zip", func_003130C8); // FileFindAccess_Zip virtual

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/FileSystem_Zip", func_00313120); // FileFindAccess_Zip virtual

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/FileSystem_Zip", func_003134C8); // FileFindAccess_Zip virtual

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/FileSystem_Zip", func_00313528); // return this->unk14

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/FileSystem_Zip", _vt$18FileFindAccess_Zip);

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/FileSystem_Zip", _vt$23FileAccess_Zip_Deflated);

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/FileSystem_Zip", _vt$21FileAccess_Zip_Stored);

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/FileSystem_Zip", _vt$18FileSystemDisc_Zip);

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/FileSystem_Zip", _vt$14FileSystem_Zip);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/FileSystem_Zip", __tf14FileSystem_Zip);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/FileSystem_Zip", __tf18FileSystemDisc_Zip);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/FileSystem_Zip", __tf21FileAccess_Zip_Stored);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/FileSystem_Zip", __tf23FileAccess_Zip_Deflated);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/FileSystem_Zip", _$_18FileFindAccess_Zip);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/FileSystem_Zip", __tf18FileFindAccess_Zip);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/FileSystem_Zip", func_00313820);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/FileSystem_Zip", func_00313870);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/FileSystem_Zip", func_00313918);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/FileSystem_Zip", func_003139C8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/FileSystem_Zip", func_00313A48);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/FileSystem_Zip", func_00313A80);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/FileSystem_Zip", func_00313B10);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/FileSystem_Zip", func_00313B78);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/FileSystem_Zip", func_00313BF0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/FileSystem_Zip", func_00313C70);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/FileSystem_Zip", func_00313CE0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/FileSystem_Zip", func_00313D48);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/FileSystem_Zip", func_00313D88);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/FileSystem_Zip", func_00313DF8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/FileSystem_Zip", func_00313E28);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/FileSystem_Zip", func_00313E68);

#ifdef NON_MATCHING
FileSystem_Zip::FileSystem_Zip() : FileSystem(string_ascii("ZipFS")) {

}
#else
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/FileSystem_Zip", __14FileSystem_Zip);
#endif

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/FileSystem_Zip", func_00313F58);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/FileSystem_Zip", func_00313FC0);

int func_003140D8(void) {
    return 0x1E;
}

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/FileSystem_Zip", func_00314108);

int func_00314298(void) {
    return 0x2E;
}

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/FileSystem_Zip", func_003142C8);

int func_003143A8(void) {
    return 0x16;
}

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/FileSystem_Zip", func_003143D8__18FileSystemDisc_Zip); // RCT3 FileSystemDisc::ExistsHere ?

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/FileSystem_Zip", func_00314410__18FileSystemDisc_Zip);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/FileSystem_Zip", func_00314448); // FileSystemDisc_Zip virtual; return 0;

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/FileSystem_Zip", func_00314478); /* __tfQ24File6Access */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/FileSystem_Zip", func_003144D0); /* __tfQ28FileFind6Access */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/FileSystem_Zip", func_00314528); /* __tf10FileSystem */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/FileSystem_Zip", func_00314580);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/FileSystem_Zip", func_003145F0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/FileSystem_Zip", func_00314638);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/FileSystem_Zip", func_003146A8);
#ifdef NON_MATCHING
File_FileDescriptor::File_FileDescriptor(int fd) {
    this->m_fd = fd;
    this->unk10 = 0;
    this->m_offset = 0;
    this->unk18 = 0;
    this->unk1C = 0;
    //FUN_003087f8((long)(int)(this + 1));
    this->unkC = sceLseek(this->m_fd, 0, 2);
}
#else
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/FileSystem_Zip", __19File_FileDescriptori);
#endif


#ifdef NON_MATCHING
File_FileDescriptor::~File_FileDescriptor() {
    //
    sceClose(this->m_fd);
}
#else
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/FileSystem_Zip", _$_19File_FileDescriptor);
#endif

void File_FileDescriptor::func_00314890() {
    if (this->m_fd >= 0) {
        sceClose(this->m_fd);
        this->m_fd = -1;
    }
}

int File_FileDescriptor::func_003148E8() {
    return this->unkC;
}

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/FileSystem_Zip", func_00314920); /* in File_FileDescriptor.cpp */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/FileSystem_Zip", func_00314C38__19File_FileDescriptorPvi);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/FileSystem_Zip", func_00314D38__19File_FileDescriptori);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/FileSystem_Zip", func_00314D68);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/FileSystem_Zip", func_00314DA0); /* FileFindAccess_FileDescriptor */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/FileSystem_Zip", func_00314E30);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/FileSystem_Zip", func_00314EE8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/FileSystem_Zip", func_00315100);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/FileSystem_Zip", func_00315330);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/FileSystem_Zip", _$_29FileSystemDisc_FileDescriptor);

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/FileSystem_Zip", D_00448330); /* "c:/coding/fgdk3/Code/Playstation2/File_FileDescriptor.cpp" */

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/FileSystem_Zip", _vt$29FileFindAccess_FileDescriptor);

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/FileSystem_Zip", _vt$19File_FileDescriptor);

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/FileSystem_Zip", _vt$29FileSystemDisc_FileDescriptor);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/FileSystem_Zip", __tf29FileSystemDisc_FileDescriptor);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/FileSystem_Zip", __tf19File_FileDescriptor);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/FileSystem_Zip", _$_29FileFindAccess_FileDescriptor);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/FileSystem_Zip", __tf29FileFindAccess_FileDescriptor);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/FileSystem_Zip", func_003155C0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/FileSystem_Zip", func_00315610);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/FileSystem_Zip", func_003156B8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/FileSystem_Zip", func_00315738);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/FileSystem_Zip", func_00315770);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/FileSystem_Zip", func_00315800);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/FileSystem_Zip", func_00315868);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/FileSystem_Zip", func_003158E0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/FileSystem_Zip", func_00315920);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/FileSystem_Zip", func_00315990); /* return 0; */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/FileSystem_Zip", func_003159C0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/FileSystem_Zip", func_00315A00);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/FileSystem_Zip", func_00315A70);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/FileSystem_Zip", func_00315AA8); // return 0

#ifdef NON_MATCHING
FileSystemDisc_FileDescriptor::FileSystemDisc_FileDescriptor() : FileSystemDisc(0, string_ascii("host0:")) {

}
#else
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/FileSystem_Zip", __29FileSystemDisc_FileDescriptor);
#endif

int FileSystemDisc_FileDescriptor::func_00315B60() {
    return 1;
}

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/FileSystem_Zip", func_00315B90);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/FileSystem_Zip", func_00315BF0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/FileSystem_Zip", func_00315C58);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/FileSystem_Zip", func_00315CC0__29FileFindAccess_FileDescriptor);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/FileSystem_Zip", func_00315CF8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/FileSystem_Zip", func_00315D58__29FileFindAccess_FileDescriptor);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/FileSystem_Zip", func_00315DA0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/FileSystem_Zip", func_00315E08);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/FileSystem_Zip", func_00315E70);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/FileSystem_Zip", func_00315EE0);
