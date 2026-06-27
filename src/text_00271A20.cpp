#include "common.h"
#include <stdio.h>
#include <string.h>
#include "unk.h"
#include "mem.h"
#include <eekernel.h>

#include "FGDK3/Playstation2/Thread.h"
#include "FGDK3/Playstation2/RunPath.h"
#include "FGDK3/Playstation2/File_CD.h"


INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00271A20);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00271AD8);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00271B30);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00271BB8);

#ifdef NON_MATCHING
SavedGame::SavedGame(char* arg1, int arg2, int arg3) {
    this->unk4 = 0;
    this->unk14 = 0;
    this->unk18 = 0;
    this->unk20 = 0;
    this->unk2C = 0;
    this->unk0 = arg2;
    this->unk28 = arg3;
    this->unk10 = 8192;
    this->unk24 = 64;

    this->unkC = new char[8192];
    this->unk8 = new char[strlen(arg1) + 5];
    strcpy(this->unk8,arg1);
    strcat(this->unk8,".sav");
    this->unk1C = new char[this->unk24 << 3];

}
#else
INCLUDE_ASM("asm/nonmatchings/text_00271A20", __9SavedGamePcii);
#endif

INCLUDE_ASM("asm/nonmatchings/text_00271A20", _$_9SavedGame);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00271D98);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00271EE0);

void func_00271EF8(void) {
    return;
}

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00271F00);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00272130); // (SavedGame* ?)

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00272440);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00272508);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00272530);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00272558);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00272580);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_002725A8);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_002725D0);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00272640);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00272690);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_002726C8);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00272748);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00272798);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_002727C0);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_002727E8);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00272810);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00272838);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00272860);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_002728C8);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00272938);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_002729A0);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00272A78);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00272A98);

INCLUDE_RODATA("asm/nonmatchings/text_00271A20", _vt$9SavedGame);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", __tf9SavedGame);

INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00272B00); /* return a0->unk4 */
INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00272B08);
INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00272B30);
INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00272B58);
INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00272B88);
INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00272BB8);
INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00272BE0);
INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00272C08);
INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00272C30);
INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00272C58);
INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00272C80);
INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00272CB8);
INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00272CF0);
INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00272D28);
INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00272D60);
INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00272D98);
INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00272DD0);
INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00272E28);
INCLUDE_ASM("asm/nonmatchings/text_00271A20", func_00272E88);

