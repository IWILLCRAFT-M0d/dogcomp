#include "common.h"
#include "debug.h"

#include "Dogs/WorldObj.h"
#include "unk.h"
#include <string.h>
INCLUDE_ASM("asm/nonmatchings/text_00150120", func_00150120);

INCLUDE_ASM("asm/nonmatchings/text_00150120", func_001503B0);

INCLUDE_ASM("asm/nonmatchings/text_00150120", func_001505D8);

INCLUDE_ASM("asm/nonmatchings/text_00150120", func_00150648); /* return 0x64; */

INCLUDE_ASM("asm/nonmatchings/text_00150120", func_00150650);

INCLUDE_ASM("asm/nonmatchings/text_00150120", func_00150660);

INCLUDE_ASM("asm/nonmatchings/text_00150120", func_00150668);

INCLUDE_ASM("asm/nonmatchings/text_00150120", func_00150B78);

INCLUDE_RODATA("asm/nonmatchings/text_00150120", D_003B1DB0); /* "Person may have fallen through floor: %s\n" */

INCLUDE_RODATA("asm/nonmatchings/text_00150120", D_003B1DE0); /* "Acos out of range" */

INCLUDE_RODATA("asm/nonmatchings/text_00150120", D_003B1E10);

INCLUDE_RODATA("asm/nonmatchings/text_00150120", D_003B1E28);

INCLUDE_RODATA("asm/nonmatchings/text_00150120", _vt$24PersonVehicleHitReceiver);

INCLUDE_RODATA("asm/nonmatchings/text_00150120", _vt$23PersonHitSizeCalculator);

INCLUDE_RODATA("asm/nonmatchings/text_00150120", D_003B1E80);

INCLUDE_RODATA("asm/nonmatchings/text_00150120", D_003B1EA8);

INCLUDE_RODATA("asm/nonmatchings/text_00150120", D_003B1EC8);

INCLUDE_RODATA("asm/nonmatchings/text_00150120", D_003B1EE0);

INCLUDE_RODATA("asm/nonmatchings/text_00150120", D_003B1EF8);

INCLUDE_RODATA("asm/nonmatchings/text_00150120", D_003B1F10);

INCLUDE_RODATA("asm/nonmatchings/text_00150120", D_003B1F28);

INCLUDE_RODATA("asm/nonmatchings/text_00150120", D_003B3148);

INCLUDE_RODATA("asm/nonmatchings/text_00150120", D_003B3188);

INCLUDE_RODATA("asm/nonmatchings/text_00150120", D_003B31A0);

INCLUDE_RODATA("asm/nonmatchings/text_00150120", D_003B31B8);

INCLUDE_RODATA("asm/nonmatchings/text_00150120", D_003B34B8);

INCLUDE_RODATA("asm/nonmatchings/text_00150120", D_003B34D0);

INCLUDE_RODATA("asm/nonmatchings/text_00150120", D_003B34F0);

INCLUDE_RODATA("asm/nonmatchings/text_00150120", D_003B3510);

INCLUDE_RODATA("asm/nonmatchings/text_00150120", D_003B3530);

INCLUDE_RODATA("asm/nonmatchings/text_00150120", D_003B3550);

INCLUDE_RODATA("asm/nonmatchings/text_00150120", D_003B3568);

INCLUDE_RODATA("asm/nonmatchings/text_00150120", D_003B3578);

INCLUDE_RODATA("asm/nonmatchings/text_00150120", D_003B3590);

INCLUDE_RODATA("asm/nonmatchings/text_00150120", D_003B35A8);

INCLUDE_RODATA("asm/nonmatchings/text_00150120", D_003B3740);

INCLUDE_RODATA("asm/nonmatchings/text_00150120", D_003B3768);

INCLUDE_RODATA("asm/nonmatchings/text_00150120", D_003B3788);

INCLUDE_RODATA("asm/nonmatchings/text_00150120", D_003B37A0);

INCLUDE_RODATA("asm/nonmatchings/text_00150120", D_003B37B8);

INCLUDE_RODATA("asm/nonmatchings/text_00150120", D_003B37D0);

INCLUDE_RODATA("asm/nonmatchings/text_00150120", D_003B37E8);

INCLUDE_RODATA("asm/nonmatchings/text_00150120", D_003B4A08);

INCLUDE_RODATA("asm/nonmatchings/text_00150120", D_003B4A48);

INCLUDE_RODATA("asm/nonmatchings/text_00150120", D_003B4A60);

INCLUDE_RODATA("asm/nonmatchings/text_00150120", D_003B4A78);

INCLUDE_RODATA("asm/nonmatchings/text_00150120", D_003B4D30); /* "PlaceHolder" */

INCLUDE_RODATA("asm/nonmatchings/text_00150120", D_003B4D40); /* "11PlaceHolder" */

INCLUDE_RODATA("asm/nonmatchings/text_00150120", D_003B4E18);

INCLUDE_RODATA("asm/nonmatchings/text_00150120", D_003B4E40);

INCLUDE_RODATA("asm/nonmatchings/text_00150120", D_003B4E70);

INCLUDE_RODATA("asm/nonmatchings/text_00150120", D_003B4EE0); /* "Failed to advance slidable in PlayerDog.cpp" */

INCLUDE_RODATA("asm/nonmatchings/text_00150120", D_003B4F10); /* "Invalid RoverSays move ID in PlayerDog:: msg AddMove" */

INCLUDE_RODATA("asm/nonmatchings/text_00150120", D_003B4F48); /* "IsMoveAvailableInCurrentStage: Unknown stage ID" */

INCLUDE_RODATA("asm/nonmatchings/text_00150120", D_003B4F78);

INCLUDE_RODATA("asm/nonmatchings/text_00150120", D_003B4FC0);

INCLUDE_RODATA("asm/nonmatchings/text_00150120", D_003B4FF0);

INCLUDE_RODATA("asm/nonmatchings/text_00150120", D_003B5018);

INCLUDE_RODATA("asm/nonmatchings/text_00150120", D_003B5038);

INCLUDE_RODATA("asm/nonmatchings/text_00150120", D_003B5050);

INCLUDE_RODATA("asm/nonmatchings/text_00150120", D_003B5068);

INCLUDE_RODATA("asm/nonmatchings/text_00150120", D_003B5080);

INCLUDE_RODATA("asm/nonmatchings/text_00150120", D_003B5098);

INCLUDE_RODATA("asm/nonmatchings/text_00150120", D_003B62B8);

INCLUDE_RODATA("asm/nonmatchings/text_00150120", D_003B62F8);

INCLUDE_RODATA("asm/nonmatchings/text_00150120", D_003B6310);

INCLUDE_RODATA("asm/nonmatchings/text_00150120", D_003B6328);

INCLUDE_RODATA("asm/nonmatchings/text_00150120", D_003B65E0);

INCLUDE_RODATA("asm/nonmatchings/text_00150120", D_003B65F8);

INCLUDE_RODATA("asm/nonmatchings/text_00150120", D_003B6620);

INCLUDE_RODATA("asm/nonmatchings/text_00150120", D_003B6648);

INCLUDE_RODATA("asm/nonmatchings/text_00150120", D_003B6668);

INCLUDE_RODATA("asm/nonmatchings/text_00150120", D_003B6680);

INCLUDE_RODATA("asm/nonmatchings/text_00150120", D_003B6698);

INCLUDE_RODATA("asm/nonmatchings/text_00150120", D_003B66B0);

INCLUDE_RODATA("asm/nonmatchings/text_00150120", D_003B66C8);

INCLUDE_RODATA("asm/nonmatchings/text_00150120", D_003B78E8);

INCLUDE_RODATA("asm/nonmatchings/text_00150120", D_003B7928);

INCLUDE_RODATA("asm/nonmatchings/text_00150120", D_003B7940);

INCLUDE_RODATA("asm/nonmatchings/text_00150120", D_003B7958);

INCLUDE_RODATA("asm/nonmatchings/text_00150120", D_003B7C10);

INCLUDE_RODATA("asm/nonmatchings/text_00150120", D_003B7C20);

INCLUDE_RODATA("asm/nonmatchings/text_00150120", D_003B7C38);

INCLUDE_RODATA("asm/nonmatchings/text_00150120", D_003B7C48);

INCLUDE_RODATA("asm/nonmatchings/text_00150120", D_003B7DD0);

INCLUDE_RODATA("asm/nonmatchings/text_00150120", D_003B7DE8);

INCLUDE_RODATA("asm/nonmatchings/text_00150120", D_003B7E10);

INCLUDE_RODATA("asm/nonmatchings/text_00150120", D_003B7E30);

INCLUDE_RODATA("asm/nonmatchings/text_00150120", D_003B7E48);

INCLUDE_RODATA("asm/nonmatchings/text_00150120", D_003B7E60);

INCLUDE_RODATA("asm/nonmatchings/text_00150120", D_003B7E78);

INCLUDE_RODATA("asm/nonmatchings/text_00150120", D_003B7E90);

INCLUDE_RODATA("asm/nonmatchings/text_00150120", D_003B90B0);

INCLUDE_RODATA("asm/nonmatchings/text_00150120", D_003B90F0);

INCLUDE_RODATA("asm/nonmatchings/text_00150120", D_003B9108);

INCLUDE_RODATA("asm/nonmatchings/text_00150120", D_003B9120);

INCLUDE_ASM("asm/nonmatchings/text_00150120", func_00150D08);

INCLUDE_ASM("asm/nonmatchings/text_00150120", func_00150D58); /* Rat::~Rat */

INCLUDE_ASM("asm/nonmatchings/text_00150120", __tf3Rat);

INCLUDE_ASM("asm/nonmatchings/text_00150120", func_00150E68);

INCLUDE_ASM("asm/nonmatchings/text_00150120", func_00150EE8);

INCLUDE_ASM("asm/nonmatchings/text_00150120", func_00150EF0);

INCLUDE_ASM("asm/nonmatchings/text_00150120", func_00150F10);
