#include "common.h"

#include "Dogs/Game.h"
#include <libscf.h>
#include "unk.h"

#include "FGDK3/Playstation2/Thread.h"
#include "Dogs/Gameutil.h"

#include "FGDK3/Playstation2/InpKeybd.h"
#include "FGDK3/Playstation2/InpMouse.h"

#include "Dogs/Objtable.h"
#include "text_001B07A8.h"

#include <libcdvd.h>


INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001B1F70);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001B1FA8); // settings constructor

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001B20A0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001B21B0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001B22A0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001B2300);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001B2360);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001B23A0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001B23D8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001B2430);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001B2458); /* a0->unk20 = a1 */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001B2460); /* float (a0->unk24) = f12 */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001B2468); /* float (a0->unk28) = f12 */

#ifdef NON_MATCHING
const char* func_001B2470(s_func_001B1FA8* arg0, int arg1) {
    const char* D_003DBD08[] = {
    "English",
    "Netherlands",
    "Français",
    "Italiano",
    "Deutsch",
    "Español",
    "Português",
    "Dansk",
    "Norsk",
    "Svenska",
    "Suomi",
    };
    if (arg1 != -1) {
        return D_003DBD08[arg1];
    }
    return D_003DBD08[arg0->m_language];
}
#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001B2470);
#endif

#ifdef NON_MATCHING
const char* func_001B24F8(s_func_001B1FA8* arg0) {
    const char* D_003DBD38[] = {
    "EN",
    "NL",
    "FR",
    "IT",
    "GE",
    "SP",
    "PT",
    "DK",
    "NO",
    "SW",
    "FI",
};
    return D_003DBD38[arg0->m_language];
}
#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001B24F8);
#endif

#ifdef NON_MATCHING
const char* func_001B2578(s_func_001B1FA8* arg0) {
    const char* D_003DBD88[] = {
    "english",
    "dutch",
    "french",
    "italian",
    "german",
    "spanish",
    "portugue",
    "danish",
    "norwegia",
    "swedish",
    "finnish",
    };

    return D_003DBD88[arg0->m_language];
}
#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001B2578);
#endif

#ifdef NON_MATCHING
void func_001B25F8(s_func_001B1FA8* arg0) {
    arg0->m_language += 1;

    if (arg0->m_language == 11) {
        arg0->m_language -= 11;
    }
}

void func_001B2620(s_func_001B1FA8* arg0) {
    arg0->m_language -= 1;

    if (arg0->m_language < 0) {
       arg0->m_language += 11;
    }
}

void func_001B2640(s_func_001B1FA8* arg0, int arg1) {
    arg0->m_language = arg1;
    if (arg1 < 0) {
        arg0->m_language = arg1 + 11;
    }
}
#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001B25F8);
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001B2620);
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001B2640);
#endif





INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001B2658);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001B2678);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Game", D_003DBB38); /* "C:/Coding/Dogs/Code/Common/SimObj.h" */

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Game", D_003DBB60);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Game", D_003DBB90);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Game", D_003DBC78); /* "    fps:%2.0f sounds: %d fov %.1f" */

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Game", D_003DBCA0); /* "Debug Stats" */

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Game", D_003DBCB0); /* "Debug Stats compositor" */

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Game", D_003DBCC8); /* "Nederlands" */

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Game", D_003DBCD8); /* "Français" */

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Game", D_003DBCE8); /* "Italiano" */

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Game", D_003DBCF8); /* "Português" */

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Game", D_003DBD08); // array?

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Game", D_003DBD38); // array?

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Game", D_003DBD68); /* "portugue" */

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Game", D_003DBD78); /* "norwegia" */

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Game", D_003DBD88);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001B2768); // creatures

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Game", D_003DCE28); /* "c:/coding/dogs/Code/Common/Game.cpp" */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001B6698); // script option function

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001BD700); // shape option function

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001C46F8); // level option function

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001C5048); // gate option function

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001C5138); // position option function

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001C5238); // camera position option function

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001C5338); // hover option function

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001C53C0); // windowed option function

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001C5410); // fullscreen option function

// nodowngrade option function
#ifdef NON_MATCHING
int D_00452174;
Status func_001C54C8(void) {
	D_00452174 = 1;
	return Status(0xFFFFFFFF, "c:/coding/dogs/Code/Common/Game.cpp", 1378);
}
#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001C54C8);
#endif

#ifdef NON_MATCHING
Status func_001C5518(char* file) {
	return Status(0xFFFFFFFF, "c:/coding/dogs/Code/Common/Game.cpp", 1415);
}
#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001C5518); // load CLI options? (return Status)
#endif

#ifdef NON_MATCHING
extern short D_004509F0; // null actorId
Game_Document::Game_Document(float deltaTime, float gamespeed) : GameShell(deltaTime, gamespeed) {
	this->unk148 = 0;
	this->unk154 = 0;
	this->unk144 = 0;
	//this->unk140
	this->unk14C = 0;
	//this->unk150
	//DogScript()
	this->unk1C4 = 1.0f;
	this->unk1C8 = 0;
	this->unk1CC = 0;
	this->unk1D0 = 0;
	this->unk1D4 = 0;
	this->unk1D8 = 0;
	this->unk1DC = 0;
	//this->unk1B8
	//this->unk1B4

	this->unk1E8 = 1;
	this->unk1EC = false;
	this->unk1F0 = 0;
	this->unk1F4 = 0;
	this->unk1F8 = 0;
	this->unk1FC = 0;
	//this->unk1E0
	//FUN_0018b528(&this->field408_0x210);
	this->unk3E8 = 0;
	this->unk3F8 = 800;
	this->unk3EC = 0;
	this->unk3F0 = 1;
	this->unk3F4 = 1;
	this->unk3FC = 600;
	this->unk404 = 3;
	this->unk400 = 0;
	//this->unk408
	this->unk4B0 = 0;

	this->unk500 = 0x74;
	this->unk4D0 = new LightManager();
	this->unk4F4 = D_004509F0;
	this->unk4F8 = 0xFFFFFFFF;
	this->m_verbose = false;
	this->m_renderSkeleton = false;
	this->m_renderOrient = false;
	this->m_renderRadius = false;
	this->m_renderActorName = false;
	this->m_renderHoldingPoints = false;
	this->m_renderCarryHandles = false;
	this->m_renderHitSpheres = false;

	this->unk55C = 0;
	this->unk560 = 0;
	//this->unk564
	this->unk568 = 0;
	this->unk56C = 0;
	this->unk570 = 0;
	this->unk574 = 0;
	this->unk578 = 0;
	this->unk57C = 0;
	this->unk580 = 0;
	this->unk59C = 0;
	this->unk5A0 = 0;
	this->unk5A4 = 0;
	this->unk5A8 = 0;
	this->unk5AC = 0;
	this->unk58C = 0.015f;
	this->unk590 = 0.035f;
	this->unk594 = -0.5f;
	this->unk598 = -400.0f;
	this->unk588 = -0.08f;
	InputKeyboard_ResumeThread();
	InputMouse_SuspendThread();

	//TheGame = this;
	//this->unk584 = new s_func_001B1FA8();

	this->unk200 = 0;
	this->unk204 = 5;
}
#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", __13Game_Documentff);
#endif

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", _$_13Game_Document);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001C6DC8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001C6E10); // (Game_Document*, )

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001C6E50);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001C6FC8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001C70C8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001C7140);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001C71E8); // pickup object action?

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001C7300);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001C7330);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001C7548);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001C7678);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001C7788);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001C7920);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001C79D0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001C7A28);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001C7A80); // get GameCreatures?

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001C7AD8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001C7B08); // "SetSaveInhibit called when saves are not inhibited"

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001C7BA8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001C8050); // Game_Document nonvirtual?
// bool D_0044E8CC
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001C80C8); // debug stats toggle

// bool D_0044E8D0
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001C80F0); // memory stats toggle

// bool D_0044E8D4
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001C8118);

void func_001C8120(void) {
	return;
}

#ifdef NON_MATCHING
extern bool* D_004528B4;
bool func_001C8128() {
	return *D_004528B4 != 0;
}
#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001C8128); // returns smellovision active status
#endif

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001C8140);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001C82D8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001C8350);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001C8388);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001C84C0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001C88D0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001C8D40); // "LevelGateEdit %d not found"

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001C9A58);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001C9B68);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001C9D30);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001C9DC0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001C9F20);

#ifdef NON_MATCHING
void func_001CA000(Game_Document* gamedoc, bool arg1) {
	if (gamedoc->unk3F0 != arg1) {
		gamedoc->unk3F0 = arg1;
		//func_001CA038
		InputMouse_ResumeThread();
	}
}
#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001CA000);
#endif

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001CA038); // ? func_001CA038(Game_Document*,)

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001CA9A0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001CAA00);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001CAC10); // ? func_001CAC10(Game_Document*,) // RCT3 Game_Document::BegineScene()?

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001CADD8); // ? func_001CADD8(Game_Document*) // RCT3 Game_Document::EndScene()?
// call GE_PS2Device::EndScene method

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001CAE08);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001CB1D8__13Game_Document);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Game", D_003E0FA0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001CCB68); // used for profile script ui (Game_Document*,)

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001CCD78);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001CCDF8); // memory stats?

#ifdef NON_MATCHING
void func_001CCE58(Game_Document* gamedoc) {
// mallinfo
//
//func_002CC250( ,8,1);
//func_002CC250(, 9,0);
// if (D_0044E8CC != false) { // debug stats var
//
}
#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001CCE58); // drawing function? // Related to RCT3 SF_Render()? (SystemFont Render)
#endif

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001CEA98); /* (Game_Document *)  rendering stuff; if stubbed level does not render */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001CF828); // this function deals with scripts (first argument a0 definitely pointer to Game_Document)

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Game", D_003E10B0); /* "LGFarmhouseVillageHouses" */

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Game", D_003E10D0); /* "LGTownDogPoundPark" */

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Game", D_003E10E8); /* "LGCentreVillageHouses" */

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Game", D_003E1100); /* "LGSkiResortCafeSkiSlope" */

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Game", D_003E1118); /* "LGTownStationPark" */

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Game", D_003E1130); /* "LGTownFinaleDogPound" */

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Game", jtbl_003E1150);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D03C0); // Game_Document member; script events?

#ifdef NON_MATCHING
void func_001D1F70(Game_Document* gamedoc) {
	//iVar2 = 0;
	//FUN_00161c50((undefined4 *)&param_1->field_0x30,0);
	//iVar1 = 0;
	//FUN_0018b930((int)&param_1->field408_0x210);
	func_001EC8D8();
	gamedoc->unk1D4 = 0;
	gamedoc->unk500 = 0x74;
	// func_001551d0(gamedoc->unk1E4,extraout_a1,extraout_a2,extraout_a3,extraout_t0);
	// do {
	// 	iVar1 = iVar1 + -1;
	// 	FUN_001f4eb0((int)param_1->field1067_0x50c + iVar2);
	// 	iVar2 = iVar2 + 0xb18;
	// } while (-1 < iVar1);
	gamedoc->unk56C = 0;
	gamedoc->unk560 = 0;
	gamedoc->unk564 = 0.0f;
	gamedoc->unk568 = 0;
}
#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D1F70);
#endif

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D2008); // new game function

#ifdef NON_MATCHING
void func_001D22B0(Game_Document* gamedoc, int level, int gate) {
	gamedoc->unk574 += 1;
	//
	gamedoc->unk1EC = false;
}
#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D22B0); // change map function? (gamedoc*, levelid, entry)
#endif

#ifdef NON_MATCHING
void func_001D2480(Game_Document* gamedoc) {
	if (sceCdStatus() != SCECdTrayClose) {
		if (gamedoc->unk500 == 8) {

		}
	}
}
#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D2480); // called when opening pause menu (start button)
#endif

#ifdef NON_MATCHING
void func_001D27F8(Game_Document* gamedoc) {
  // BMPageChangeReq::BMPageChangeReq(param_1->field1060_0x4fc,3);
  // FUN_001d8600(param_1->field1060_0x4fc);
  // BMStateChangeReq::BMStateChangeReq(param_1->field1060_0x4fc,3);
  // BMPageChangeReq::BMPageChangeReq(param_1->field1060_0x4fc,6);
  // (**(code **)(*(int *)(DAT_00453744 + 0x100) + 0x34))
  //           (DAT_00453744 + *(short *)(*(int *)(DAT_00453744 + 0x100) + 0x30));
  // FUN_001635e8(&param_1->field_0x30,1);
}
#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D27F8); // called when entering option menu (select button)
#endif

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D2870);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D28A8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D2900);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D2940);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D2980__13Game_Documentf); // RCT3 Game_Document::Advance?

// if (sceCdStatus() == SCECdStatShellOpen) {
//}

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D2F28);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D3EB8);

#ifdef NON_MATCHING
void func_001D3F38(Game_Document* gamedoc) {
	func_001B08A0(gamedoc->unk550, 1);
}

void func_001D3F58(Game_Document* gamedoc) {
	func_001B08A0(gamedoc->unk550, 3);
}
#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D3F38); // fade in function
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D3F58); // fade to black function?
#endif

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D3F78);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D42A8); // "Warning: toPos and facingPos the same in MoveActorToFacing. This would be likely to screw up the creature\'s orientation. Will keep creature\'s current orientation."

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D43F0); // isolate actor? (Game_Document*, Actor*/WorldObject*)

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D4498); // remove (maroon) actor function?

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D4578); // Game_Document virtual

#ifdef NON_MATCHING
void Game_Document::func_001D45B8() {
	new SavedGame("ResPatch.tmp", 1, 0);
}
#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D45B8__13Game_Document); // Game_Document member
#endif
// new SavedGame("ResPatch.tmp", 1, 0);

void func_001D4650(void) {
	return;
}

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D4658); // start mpeg handler? (Game_Document*, )

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D46E0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D4700);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D4720);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D4740);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D48A8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D4B00);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D4D48);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D4D90);
// D_0035D134 menu bones, clues struct
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D4DD8); // unlockAllClues

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Game", D_003E1F00); /* "ResPatch.tmp" */

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Game", D_003E1F10); /* "BriberyBone" */
#ifdef NON_MATCHING
void func_001D4E40(Game_Document* gamedoc) {


}
#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D4E40); /* changeCollar(Game_Document*) */
#endif

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D5B88); // "Trying to set flow speed for a texture matrix which hasn\'t been set up for having its flow speed adjusted: %d, %.2f"

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D5C50);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D5CE0);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Game", D_003E2138);

#ifdef NON_MATCHING
int func_001D5D48(Game_Document* arg0, int arg1) {
    switch (arg1) {
    case 8:
    case 21:
    case 23:
    case 24:
    case 28:
    case 30:
    case 32:
        return 0x64;
    default:
        return 0x19;
    }
}
#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D5D48);
#endif


#ifdef NON_MATCHING // Game_Document class/constructor is yet to be completed
Status Game_InternalInitialise() {
    new Game_Document(0.01, 0.125);
    return Status(0xFFFFFFFF, "c:/coding/dogs/Code/Common/Game.cpp", 8544);
}
#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", Game_InternalInitialise__Fv);
#endif

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", Game_InternalFinalise__Fv);

#ifdef NON_MATCHING

StdInit_ModuleDescription Game_StdInit_Description = {
    0,
    &Game_StdInit_UsedModules
};

void * const Game_StdInit_UsedModules[] = {
    &Game_InternalInitialise,
    &Game_InternalFinalise,
	//

    0,
    0,
};

Status Game_Initialise() {
    return StdInit_InitialisationSequence(&Game_StdInit_Description);
}

void Game_Finalise() {
    StdInit_FinalisationSequence(&Game_StdInit_Description);
}

#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", Game_Initialise__Fv);
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", Game_Finalise__Fv);
#endif


#ifdef NON_MATCHING
Status func_001D5E90() {
	return Status(0xFFFFFFFF, "c:/coding/dogs/Code/Common/Game.cpp", 8588);
}
#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D5E90);
#endif

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D5ED8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D5F80);

// VirtualDesktop/GameDesktop* D_004512E0
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D6028);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D60D0); // exit?

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D6218); // GameDesktop virtual

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D6288); // GameDesktop virtual

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D62D0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D62E0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D6378);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D63D8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D63F8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D6418);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D64B0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D6510);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D6530);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D65C8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D6628);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D66C0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D6720);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D6740);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D67D8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D6838);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D6858);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D6878);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D6888);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D69B8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D69E8);

void func_001D6A10(void) { // PointerMessageHandler member?
	return;
}

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D6A18);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Game", D_003E21D8);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Game", _vt$25BeforeMapChangeEnumerator);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Game", _vt$24AfterMapChangeEnumerator);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Game", _vt$28Game_ClosestVisibleInFrontOf);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Game", _vt$9StatusBar);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Game", _vt$11DSLRenderer);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Game", D_003E2498); /* _vt$13Game_Document */

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Game", D_003E2668); /* _vt$13Game_Document */

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Game", D_003E2680); /* _vt$13Game_Document */

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Game", D_003E26C0); /* _vt$11GameDesktop */

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Game", D_003E26D8); /* _vt$11GameDesktop */

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Game", D_003E26F8); /* _vt$11GameDesktop */

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Game", D_003E2730); /* _vt$11GameDesktop */

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Game", _vt$20WorldObject_Universe);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Game", _vt$23SimObj_FilterFlagsAndEq);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Game", _vt$13SimObj_Filter);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D6A40); /* __tf21SimObj_RayHitReceiver */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", __tf13SimObj_Filter);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Game", D_003E29C0); /* "13SimObj_Filter" */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", __tf23SimObj_FilterFlagsAndEq);

int SimObj_FilterFlagsAndEq::func_001D6B40() {
	return 1;
}

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", __tf20WorldObject_Universe);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", _$_11GameDesktop);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Game", D_003E29F0); /* "20WorldObject_Universe" */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", __tf11GameDesktop);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D6C40);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", __tf13Game_Document);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D6D60); /* return a0->unk3F0 */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D6D68); /* return a0->unk3F4 */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D6D70); /* a0->unk3F4 = a1 */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D6D78);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D6D80); /* return a0->unk3EC */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D6D88); /* return a0->unkE4 */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D6D90);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D6DC0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D6DC8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D6DD0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D6DD8); /* a0->unk4D4 = a1 */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D6DE0); /* return a0->unk4D4 */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D6DE8); /* (float) a0->unk1C4 = f12 */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D6DF0); /* return (float) a0->unk1C4 */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D6DF8); /* a0->unk4D8 = a1 */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D6E00); /* return a0->unk4D8 */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D6E08); /* a0->unk4DC = a1 */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D6E10); /* return a0->unk4DC */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D6E18);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D6E20);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D6E28);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D6E30);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D6E38);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D6E40);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D6E48); /* a0->unk4EC = a1 */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D6E50); /* return a0->unk4EC */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D6E58); /* a0->unk4F0 = a1 */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D6E60); /* return a0->unk4F0 */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D6E68); /* a0->unk4F4 = a1 */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D6E70); /* a0->unk4F8 = a1 */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D6E78); /* return a0->unk4B0 */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D6E80);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D6E98);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D6ED0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D6ED8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D6EE8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D6F30);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D6F38);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D6F40);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D6F88);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D6F90);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D6FA0); /* a0->unk55C = a1 */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D6FA8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D6FB8); /* return a0->unk4FC */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D6FC0); /* return a0->unk4D0 */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D6FC8); /* a0->unk1FC = a1 */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D6FD0); /* return a0->unk200 */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D6FD8); /* a0->unk200 = a1 */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D6FE0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D6FF8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D7008); /* return a0->unk570 */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D7010); /* return a0->unk574 */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D7018); /* DebugLayer */

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Game", D_003E2A28);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", __tf11DSLRenderer);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D70E8); // dslrenderer action?

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", _$_9StatusBar);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", __tf9StatusBar);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", __tf28Game_ClosestVisibleInFrontOf);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D72B0); // Game_ClosestVisibleInFrontOf member

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D74F0); /* __tf21PersistentDataUpdater */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D7540);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D7568);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D75B8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", __tf24AfterMapChangeEnumerator);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D7628); // virtual?

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", __tf25BeforeMapChangeEnumerator);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D76F0); // BeforeMapChangeEnumerator member

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Game", D_003E2AF0);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Game", _vt$8CameraMR);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Game", _vt$7DebugMR);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Game", _vt$14ToggleScreenMR);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Game", _vt$8LightsMR);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Game", _vt$10DebugLayer);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D7768); /* __tf12TextRenderer */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D77A8); /* __tf15SimObj_Universe */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D77F8); /* __tft16Tree34Enumerator1Z11SimObj_Base */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D7838); /* ~DebugLayer ? */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", __tf10DebugLayer);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D78A8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", __tf8LightsMR);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D7900);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", __tf14ToggleScreenMR);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D7A58);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", __tf7DebugMR);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D7BB8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", __tf8CameraMR);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D7D10);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Game", D_003E2EA0);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Game", D_003E2EB8);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Game", D_003E2ED8);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Game", D_003E2EF8);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Game", D_003E2F18);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", __tf16MenuRegisterable);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D7E58);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", __tfQ28LightsMR17LightingRigAction);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D7EC8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D7F50);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", __tfQ214ToggleScreenMR13BounceDisplay);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D7FC0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D7FE8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", __tfQ27DebugMR7MAction);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D8058);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D80F0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", __tfQ28CameraMR19CameraControlAction);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D8160);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D8220);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D8260);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/Game", func_001D8280);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/Game", D_003E307C);
