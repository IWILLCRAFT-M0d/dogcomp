#include "common.h"

#include "FGDK3/Playstation2/File_MemCard.h"
#include "FGDK3/Playstation2/File_CD.h"

#include <common/libcdvd.h>
#include <ee/libmc.h>
#include "unk.h"



INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/File", func_00304B48); /* File_MemRead */

#ifdef NON_MATCHING
File_MemRead::~File_MemRead() {

}
#else
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/File", _$_12File_MemRead);
#endif

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/File", func_00304C18__12File_MemRead);
/*
int File_MemRead::func_00304C18() {
    return this->unk10 - this->unk8;
}
*/
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/File", func_00304C58); // File_MemRead member

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/File", func_00304D08); // File_MemRead virtual

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/File", func_00304D78); // File_MemCard virtual

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/File", func_00304DB0); // File_MemRead virtual
/*
int File_MemRead::func_00304DB0() {
    return this->unkC - this->unk8;
}
*/
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/File", func_00304DF0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/File", func_00304ED0); // temp file function

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/File", func_00304F68);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/File", func_003050C0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/File", func_00305210);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/File", func_00305378);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/File", func_003054A8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/File", func_003055A0); /* File::File::OpenWatcher */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/File", _$_Q24File11OpenWatcher);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/File", func_00305768);

#ifdef NON_MATCHING
File::File(const char* name, int arg2, int arg3) {
    //string_ascii(name);
}
#else
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/File", func_003059F0); // RCT3 File::File(const char*, File::IOType) ?*/
#endif

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/File", func_00306030); // used for streamed files (music, dialogue, etc)

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/File", D_00447A30); /* "C:/Coding/FGDK3/Code/Common/File.cpp" */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/File", func_003065D0); // "Safe file was not closed before exit"

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/File", func_003067A0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/File", func_00306920);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/File", func_00306B20); /* file::read(void* fp, int size) ? */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/File", func_00306CD8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/File", func_00306D30);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/File", func_00306DD8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/File", func_00306E58);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/File", func_00306F38);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/File", func_00306FC0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/File", func_00306FF8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/File", func_00307030);

#ifdef NON_MATCHING
int File::Okay() {

}
#else
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/File", func_00307258); // RCT3 File::Okay() ?
#endif

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/File", func_00307430);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/File", func_00307600);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/File", func_003077C8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/File", func_003079A0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/File", func_00307B58);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/File", func_00307C78);

