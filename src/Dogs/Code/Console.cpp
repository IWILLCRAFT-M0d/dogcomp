#include "Console.h"
#include "FGDK3/Fog.h"

#include "common.h"
#include "debug.h"
#include "unk.h"

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_0019F570);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_0019F5C8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_0019F630);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_0019F708);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_0019F878);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_0019F8F8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_0019F958);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_0019F9E8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_0019FA38);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_0019FB18);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_0019FC38);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_0019FD38);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_0019FDE0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_0019FE00);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_0019FE20);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A0020);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A0208);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A0250);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A03D0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A0418);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A0560);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A0628);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A06D0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A0810); /* open debug console */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A0900); /* close debug console */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A0968);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A09A8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A0A30);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A0B08);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A0B90);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A0D80);

// `-snas` Required
#ifdef NON_MATCHING
void func_001A12A0(char arg0, int arg1) {
    if (arg1 != 0) {
        func_001A0B90(TheGame->unk504, "1", 0x21);
    }
}

void func_001A12D8(char arg0, int arg1) {
    if (arg1 != 0) {
        func_001A0B90(TheGame->unk504, "2", 0x22);
    }
}

void func_001A1310(char arg0, int arg1) {
    if (arg1 != 0) {
        func_001A0B90(TheGame->unk504, "3", -0x5D);
    }
}

void func_001A1348(char arg0, int arg1) {
    if (arg1 != 0) {
        func_001A0B90(TheGame->unk504, "4", 0x24);
    }
}

void func_001A1380(char arg0, int arg1) {
    if (arg1 != 0) {
        func_001A0B90(TheGame->unk504, "5", 0x25);
    }
}

void func_001A13B8(char arg0, int arg1) {
    if (arg1 != 0) {
        func_001A0B90(TheGame->unk504, "6", 0x5E);
    }
}

void func_001A13F0(char arg0, int arg1) {
    if (arg1 != 0) {
        func_001A0B90(TheGame->unk504, "7", 0x26);
    }
}

void func_001A1428(char arg0, int arg1) {
    if (arg1 != 0) {
        func_001A0B90(TheGame->unk504, "8", 0x2A);
    }
}

void func_001A1460(char arg0, int arg1) {
    if (arg1 != 0) {
        func_001A0B90(TheGame->unk504, "9", 0x28);
    }
}

void func_001A1498(char arg0, int arg1) {
    if (arg1 != 0) {
        func_001A0B90(TheGame->unk504, "0", 0x29);
    }
}

void func_001A14D0(char arg0, int arg1) {
    if (arg1 != 0) {
        func_001A0B90(TheGame->unk504, "A", 0);
    }
}

void func_001A1508(char arg0, int arg1) {
    if (arg1 != 0) {
        func_001A0B90(TheGame->unk504, "B", 0);
    }
}

void func_001A1540(char arg0, int arg1) {
    if (arg1 != 0) {
        func_001A0B90(TheGame->unk504, "C", 0);
    }
}

void func_001A1578(char arg0, int arg1) {
    if (arg1 != 0) {
        func_001A0B90(TheGame->unk504, "D", 0);
    }
}

void func_001A15B0(char arg0, int arg1) {
    if (arg1 != 0) {
        func_001A0B90(TheGame->unk504, "E", 0);
    }
}

void func_001A15E8(char arg0, int arg1) {
    if (arg1 != 0) {
        func_001A0B90(TheGame->unk504, "F", 0);
    }
}

void func_001A1620(char arg0, int arg1) {
    if (arg1 != 0) {
        func_001A0B90(TheGame->unk504, "G", 0);
    }
}

void func_001A1658(char arg0, int arg1) {
    if (arg1 != 0) {
        func_001A0B90(TheGame->unk504, "H", 0);
    }
}

void func_001A1690(char arg0, int arg1) {
    if (arg1 != 0) {
        func_001A0B90(TheGame->unk504, "I", 0);
    }
}

void func_001A16C8(char arg0, int arg1) {
    if (arg1 != 0) {
        func_001A0B90(TheGame->unk504, "J", 0);
    }
}

void func_001A1700(char arg0, int arg1) {
    if (arg1 != 0) {
        func_001A0B90(TheGame->unk504, "K", 0);
    }
}

void func_001A1738(char arg0, int arg1) {
    if (arg1 != 0) {
        func_001A0B90(TheGame->unk504, "L", 0);
    }
}

void func_001A1770(char arg0, int arg1) {
    if (arg1 != 0) {
        func_001A0B90(TheGame->unk504, "M", 0);
    }
}

void func_001A17A8(char arg0, int arg1) {
    if (arg1 != 0) {
        func_001A0B90(TheGame->unk504, "N", 0);
    }
}

void func_001A17E0(char arg0, int arg1) {
    if (arg1 != 0) {
        func_001A0B90(TheGame->unk504, "O", 0);
    }
}

void func_001A1818(char arg0, int arg1) {
	if (arg1 != 0) {
		func_001A0B90(TheGame->unk504, "P", 0);
	}
}

void func_001A1850(char arg0, int arg1) {
	if (arg1 != 0) {
		func_001A0B90(TheGame->unk504, "Q", 0);
	}
}

void func_001A1888(char arg0, int arg1) {
	if (arg1 != 0) {
		func_001A0B90(TheGame->unk504, "R", 0);
	}
}

void func_001A18C0(char arg0, int arg1) {
	if (arg1 != 0) {
		func_001A0B90(TheGame->unk504, "S", 0);
	}
}

void func_001A18F8(char arg0, int arg1) {
	if (arg1 != 0) {
		func_001A0B90(TheGame->unk504, "T", 0);
	}
}

void func_001A1930(char arg0, int arg1) {
	if (arg1 != 0) {
		func_001A0B90(TheGame->unk504, "U", 0);
	}
}

void func_001A1968(char arg0, int arg1) {
	if (arg1 != 0) {
		func_001A0B90(TheGame->unk504, "V", 0);
	}
}

void func_001A19A0(char arg0, int arg1) {
	if (arg1 != 0) {
		func_001A0B90(TheGame->unk504, "W", 0);
	}
}

void func_001A19D8(char arg0, int arg1) {
	if (arg1 != 0) {
		func_001A0B90(TheGame->unk504, "X", 0);
	}
}

void func_001A1A10(char arg0, int arg1) {
	if (arg1 != 0) {
		func_001A0B90(TheGame->unk504, "Y", 0);
	}
}

void func_001A1A48(char arg0, int arg1) {
	if (arg1 != 0) {
		func_001A0B90(TheGame->unk504, "Z", 0);
	}
}

void func_001A1A80(char arg0, int arg1) {
	if (arg1 != 0) {
		func_001A0B90(TheGame->unk504, " ", 0);
	}
}

void func_001A1AB8(char arg0, int arg1) {
	if (arg1 != 0) {
		func_001A0B90(TheGame->unk504, "=", 0);
	}
}

void func_001A1AF0(char arg0, int arg1) {
	if (arg1 != 0) {
		func_001A0B90(TheGame->unk504, ".", 0);
	}
}

void func_001A1B28(char arg0, int arg1) {
	if (arg1 != 0) {
		func_001A0B90(TheGame->unk504, ",", 0);
	}
}

void func_001A1B60(char arg0, int arg1) {
	if (arg1 != 0) {
		func_001A0B90(TheGame->unk504, "-", 0);
	}
}

void func_001A1B98(char arg0, int arg1) {
	func_001A0D80(TheGame->unk504, 0x1D, arg1);
}

void func_001A1BC8(char arg0, int arg1) {
	func_001A0D80(TheGame->unk504, 0x9D, arg1);
}

void func_001A1BF8(char arg0, int arg1) {
	func_001A0D80(TheGame->unk504, 0xCB, arg1);
}

void func_001A1C28(char arg0, int arg1) {
	func_001A0D80(TheGame->unk504, 0xCD, arg1);
}

void func_001A1C58(char arg0, int arg1) {
	func_001A0D80(TheGame->unk504, 0xD3, arg1);
}

void func_001A1C88(char arg0, int arg1) {
	func_001A0D80(TheGame->unk504, 0xE, arg1);
}

void func_001A1CB8(char arg0, int arg1) {
	func_001A0D80(TheGame->unk504, 0xC7, arg1);
}

void func_001A1CE8(char arg0, int arg1) {
	func_001A0D80(TheGame->unk504, 0xCF, arg1);
}

void func_001A1D18(char arg0, int arg1) {
	func_001A0D80(TheGame->unk504, 0x1C, arg1);
}

void func_001A1D48(char arg0, int arg1) {
	func_001A0D80(TheGame->unk504, 0xD1, arg1);
}

void func_001A1D78(char arg0, int arg1) {
	func_001A0D80(TheGame->unk504, 0xC9, arg1);
}

void func_001A1DA8(char arg0, int arg1) {
	func_001A0D80(TheGame->unk504, 0xD0, arg1);
}

void func_001A1DD8(char arg0, int arg1) {
	func_001A0D80(TheGame->unk504, 0xC8, arg1);
}

void func_001A1E08(char arg0, int arg1) {
	func_001A0D80(TheGame->unk504, 0xF, arg1);
}

void func_001A1E38(char arg0, int arg1) {
	func_001A0D80(TheGame->unk504, 0x27, arg1);
}

void func_001A1E68(char arg0, int arg1) {
	func_001A0D80(TheGame->unk504, 0x35, arg1);
}

void func_001A1E98(char arg0, int arg1) {
	func_001A0D80(TheGame->unk504, 0x2B, arg1);
}

#else

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A12A0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A12D8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A1310);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A1348);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A1380);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A13B8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A13F0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A1428);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A1460);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A1498);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A14D0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A1508);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A1540);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A1578);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A15B0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A15E8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A1620);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A1658);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A1690);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A16C8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A1700);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A1738);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A1770);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A17A8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A17E0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A1818);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A1850);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A1888);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A18C0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A18F8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A1930);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A1968);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A19A0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A19D8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A1A10);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A1A48);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A1A80);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A1AB8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A1AF0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A1B28);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A1B60);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A1B98);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A1BC8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A1BF8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A1C28);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A1C58);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A1C88);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A1CB8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A1CE8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A1D18);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A1D48);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A1D78);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A1DA8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A1DD8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A1E08);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A1E38);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A1E68);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A1E98);
#endif

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A1EC8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A1FF8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A2150);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A23F8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A2608);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Console", D_003D4BC8);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Console", D_003D4BD0); /* "Possible actors:" */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A2BA8); /* Console::Help */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A2C18); /* Console::Time */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A2C90);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A2D28); /* Console::ListActors */

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Console", D_003D4C70); /* "Invalid actor name" */

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Console", D_003D4C88); /* "No script for actor" */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A32A0); /* Console::Vars */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A34E0); /* Console::Set */

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Console", D_003D4CD8); /* "Invalid value" */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A3738); /* Console::StopwatchSet */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A37C0); /* Console::SetDogStatus */

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Console", D_003D4D08); /* "Actor not found in this level" */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A3998); /* Console::ToggleDebugConsole */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A39F0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A3A88); /* Console::Threads */

void Console::Break() {
	Exit(0);
}

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A3C28); /* Console::DebugMessage */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A3E10); /* Console::Lines */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A3E70); /* Console::Cells */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A3FE0); /* Console::SetCloth */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A4570); /* Console::Verbose */

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Console", D_003D50F8); /* "Parameter must be ON or OFF" */

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Console", D_003D5118); /* "Verbose variable listing toggled" */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A4658); /* Console::ColourLoD */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A46E0); /* Console::TextureLoD */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", TestDoggyDoAnims__7Console); /* Console::TestDoggyDoAnims */

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Console", D_003D5160); /* "1st Actor arg not found in this level" */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A4808); /* Console::RelocateToActor */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A4A28); /* Console::RelocateToCoord */

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Console", D_003D51B0); /* "Invalid X coordinate" */

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Console", D_003D51C8); /* "Invalid Y coordinate" */

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Console", D_003D51E0); /* "Invalid Z coordinate" */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A4BE8); /* Console::RelocateToPosFacing */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A4E90); /* Console::RelCam */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A4FF0); /* Console::Camera */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A52F0); /* Console::Camfol */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A5398); /* Console::Kill */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A5400); /* Console::Suspend */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A5460); /* Console::Resume */

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Console", D_003D5328); /* "Invalid thread ID" */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A54C0); /* Console::Map */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A55A8); /* Console::Alias */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A56B0); /* Console::Ambient */

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Console", D_003D53B0); /* "need 3 numbers between 0.0 and 1.0" */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A58A8); /* Console::Save */

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Console", D_003D5408); /* "Game slot not specified" */

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Console", D_003D5420); /* "Card slot not specified" */

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Console", D_003D5438); /* "Completed successfully" */

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Console", D_003D5450); /* "Unknown error occurred" */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A5980); /* Console::SlowMo */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A5AB0); /* Console::Speed */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A5C38); /* Console::AngVel */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A5DC0); /* Console::Load */

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Console", D_003D55E0); /* "Some kind of error occurred" */

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Console", jtbl_003D5600);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A5F08); /* Console::Mien */

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Console", D_003D56B8); /* "Expecting a slot number" */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A6178); /* Console::SetCardSlot */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A6208); /* Console::SetGameSlot */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A6298); /* Console::SetAllAutoCamPos */

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Console", D_003D57E0); /* "Invalid actor2 name" */

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Console", D_003D57F8);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Console", D_003D5830);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Console", D_003D5840);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Console", D_003D5850);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Console", D_003D5860);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Console", D_003D5870);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A6630); /* Console::SetOptimalCutPos */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A68D8); /* Console::IsAdvance */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A6A70); /* Console::IsMediaReady */
/*
extern void* D_00453698;

void Console::IsMediaReady(s32 arg0) {
    char str[128];

    s32 slot;
    u32 temp_4;


    slot = D_00453698->m_cardSlot; // unk20
    switch (D_00453698->m_mediaReady) { // unk 28
    case 1:
        sprintf(str, "Cannot access card slot %d", slot);
        break;
    case 2:
        sprintf(str, "Media not present in card slot %d", slot);
        break;
    case 3:
        sprintf(str, "Media not formatted in card slot %d", slot);
        break;
    case 5:
        sprintf(str, "Not enough space for Dogstale on media in card slot %d", slot);
        break;
    case 0:
        sprintf(str, "Media ready in card slot %d", slot);
        break;
    }
    func_001A0B08(arg0, 2, str);
}
*/

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A6B48); /* Console::IsRender */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A6C88); /* Console::IsShadowed */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A6DC8); /* Console::DirMemCard */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A7200); /* Console::Dist */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A7438); /* Console::FormatMemCard */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A7498); /* Console::UnformatMemCard */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A74F8); /* Console::Pos */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A76A0); /* Console::Orient */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A7970); /* Console::ActorName */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A79E0); /* Console::Goto */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A7CC8); /* Console::IK */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A7DE8); /* Console::Isolate */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A7E48); /* Console::Unisolate */

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Console", D_003D5B90); /* "No such actor" */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A7F38); /* Console::Freeze */

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Console", D_003D5BB0); /* "Fog enabled" */

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Console", D_003D5BC0); /* "Fog disabled" */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A8050); /* Console::Fog */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A8150); /* Console::FogDensity */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A82E8); /* Console::FogOnset */

// `-snas` Required
#ifdef NON_MATCHING
void Console::FogSharpness(void* arg0) {
    float newFog;
    if (func_001A0250(arg0, &newFog) == 0) {
        TheGame->unk1E0->fogDistance = newFog;
    }
}
#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", FogSharpness__7ConsolePv);
#endif

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A8358); /* Console::FogColour */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A83C8); /* Console::Remove */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A8570); /* Console::Unremove */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A86A0); /* Console::Maroon */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A8780); /* Console::Unmaroon */

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Console", D_003D5D20);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A8928); /* Console::Holding */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A8D90); /* Console::Unfreeze */

void Console::Parse() {
    return;
}

void Console::Patch() {
    return;
}

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A8EA8); /* Console::ProfileScript */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A8F20); /* Console::Bones */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A9018); /* Console::RenderOrient */

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Console", D_003D6080); /* "Orientation rendering enabled" */

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Console", D_003D60A0); /* "Orientation rendering disabled" */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A9110); /* Console::RenderRadius */

// `-snas` Required
#ifdef NON_MATCHING
int Console::RenderActorName() {
   return TheGame->m_renderActorName ^= 1;
}

int Console::RenderHoldingPoints() {
   return TheGame->m_renderHoldingPoints ^= 1;
}

int Console::RenderCarryHandles() {
   return TheGame->m_renderCarryHandles ^= 1;
}

#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", RenderActorName__7Console);
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", RenderHoldingPoints__7Console);
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", RenderCarryHandles__7Console);
#endif

void Console::Quit() {
    func_002963D0(); /* Main_Terminate */
}

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A9278); /* Console::Debug */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A9388); /* Console::DepthOfField */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A95F8); /* Console::Diffuse */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A97F0); /* Console::RenderHitSpheres */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", UnlockBegMoves__7Console); /* Console::UnlockBegMoves */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", UnlockClues__7Console); /* Console::UnlockClues */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A9A20); /* Console::MoveForward */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A9BB0); /* Console::SetScreenFader */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A9C70); /* Console::SetGameTime */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A9CD0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A9E18);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001A9E78);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001AA3C8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001AA418);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001AA460);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001AA4A0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001AA760);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001AA980);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001AAB00);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001AAC78);

int func_001AADF8() {
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001AAE00);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001AAEE0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001AAFA0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001AB050);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001AB060);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001AB0F8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001AB158);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001AB178);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001AB198);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001AB230);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001AB290);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001AB2B0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001AB348);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001AB3A8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001AB440);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001AB4A0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001AB4C0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001AB558);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001AB5B8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001AB5F8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001AB620);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Console", D_003D63A8);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Console", D_003D63C8);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Console", D_003D65A8);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Console", D_003D65C8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", __tf12ConsoleLayer);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Console", func_001AB6D0);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Console", D_003D65E8);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Console", D_003D65F8);
