#include "common.h"
#include "unk.h"

#include "FGDK3/Playstation2/Thread.h"
#include "Dogs/Gameutil.h"

#include <libscf.h>

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", func_001D82A0);

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", func_001D82D8);

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", func_001D8328);

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", func_001D8378);

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", func_001D8418);

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", func_001D8538);

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", func_001D85B0);

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", func_001D8600);

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", func_001D8660);

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", func_001D86C0);

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", __16LoadSavedGameReqi);

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", __16BMStateChangeReqi);

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", __15BMPageChangeReqi);

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", __18BMPageNumChangeReqi);

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", __14ChangeLevelReqii); /* ChangeLevelReq::ChangeLevelReq(int map, int entry); */

/*
ChangeLevelReq::ChangeLevelReq(int level, int gate) {
	this->m_level = level;
	this-m_gate = gate;
}
*/
INCLUDE_ASM("asm/nonmatchings/text_001D82A0", func_001D8910);

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", func_001D89D0);

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", __18BMHighlightMoveReqi);

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", __15BMPageActionReqi);

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", __10FadeOutReqf);

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", __9FadeInReqf);

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", func_001D8C00);

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", func_001D8C98);

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", func_001D8CF8);

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", func_001D8D18);

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", func_001D8D38);

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", func_001D8DD0);

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", func_001D8E30);

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", func_001D8E50);

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", func_001D8EE8);

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", func_001D8F48);

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", func_001D8FE0);

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", func_001D9040);

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", func_001D9060);

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", func_001D90F8);

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", __tfQ29GameState12GameStateReq);

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", func_001D9198);

INCLUDE_RODATA("asm/nonmatchings/text_001D82A0", _vt$9FadeInReq);

INCLUDE_RODATA("asm/nonmatchings/text_001D82A0", _vt$10FadeOutReq);

INCLUDE_RODATA("asm/nonmatchings/text_001D82A0", _vt$15BMPageActionReq);

INCLUDE_RODATA("asm/nonmatchings/text_001D82A0", _vt$18BMHighlightMoveReq);

INCLUDE_RODATA("asm/nonmatchings/text_001D82A0", _vt$18BMHighlightClueReq);

INCLUDE_RODATA("asm/nonmatchings/text_001D82A0", _vt$15StartNewGameReq);

INCLUDE_RODATA("asm/nonmatchings/text_001D82A0", _vt$14ChangeLevelReq);

INCLUDE_RODATA("asm/nonmatchings/text_001D82A0", _vt$16LoadSavedGameReq);

INCLUDE_RODATA("asm/nonmatchings/text_001D82A0", _vt$18BMPageNumChangeReq);

INCLUDE_RODATA("asm/nonmatchings/text_001D82A0", _vt$15BMPageChangeReq);

INCLUDE_RODATA("asm/nonmatchings/text_001D82A0", _vt$16BMStateChangeReq);

INCLUDE_RODATA("asm/nonmatchings/text_001D82A0", _vt$13SwitchViewReq);

INCLUDE_RODATA("asm/nonmatchings/text_001D82A0", _vt$Q29GameState12GameStateReq);

INCLUDE_RODATA("asm/nonmatchings/text_001D82A0", D_003E33C0); /* "Q29GameState12GameStateReq" */

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", __tf13SwitchViewReq);

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", func_001D9228);

int func_001D95B0(void) {
	return 1;
}

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", func_001D95B8);

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", __tf16BMStateChangeReq);

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", func_001D9648);

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", func_001D9680);

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", func_001D96B8);

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", __tf15BMPageChangeReq);

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", func_001D9748);

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", func_001D9780);

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", func_001D9810);

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", __tf18BMPageNumChangeReq);

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", func_001D98A0);

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", func_001D98D8);

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", func_001D9968);

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", __tf16LoadSavedGameReq);

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", func_001D99F8);

int func_001D9A50(void) {
	return 1;
}

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", func_001D9A58);

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", __tf14ChangeLevelReq);

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", func_001D9AE8);

int func_001D9B20(void) {
	return 1;
}

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", func_001D9B28);

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", __tf15StartNewGameReq);

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", func_001D9BB8);

int func_001D9BF0(void) {
	return 1;
}

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", func_001D9BF8);

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", __tf18BMHighlightClueReq);

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", func_001D9C88);

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", func_001D9CC0);

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", func_001D9CF0);

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", __tf18BMHighlightMoveReq);

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", func_001D9D80);

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", func_001D9DB8);

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", func_001D9DE8);

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", __tf15BMPageActionReq);

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", func_001D9E78);

int func_001D9FB0(void) {
	return 1;
}

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", func_001D9FB8);

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", __tf10FadeOutReq);

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", func_001DA048); /* doFadeOut */

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", func_001DA070);

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", func_001DA0A8);

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", __tf9FadeInReq);

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", func_001DA138); /* doFadeIn */

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", func_001DA160);

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", func_001DA190);

void func_001DA1B8(void) {
	return;
}

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", func_001DA1C0);

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", func_001DA1F0);

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", func_001DA210);

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", func_001DA268);

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", func_001DA2E8);

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", func_001DA338);


#ifdef NON_MATCHING
Status Gameutil_InternalInitialise(void) {
	return Status(0xFFFFFFFF, "c:/coding/dogs/Code/Common/Gameutil.cpp", 69);
}
#else
INCLUDE_ASM("asm/nonmatchings/text_001D82A0", Gameutil_InternalInitialise__Fv);
#endif

void Gameutil_InternalFinalise() {
	return;
}

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", Gameutil_Initialise__Fv);

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", Gameutil_Finalise__Fv);

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", func_001DA440);

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", func_001DA588);

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", func_001DA8F8);

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", func_001DAC68);

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", func_001DB190);

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", func_001DB388);

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", func_001DB518);

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", func_001DB8B0);

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", func_001DB998);

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", func_001DB9E8);

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", func_001DBC90);

#ifdef NON_MATCHING
int func_001DBD50(int arg0) {
	switch (arg0) {

	case 0:
		return 0;
	case SCE_ENGLISH_LANGUAGE:
		return 0;
	case SCE_FRENCH_LANGUAGE:
		return 2;
	case SCE_SPANISH_LANGUAGE:
		return 5;
	case SCE_GERMAN_LANGUAGE:
		return 4;
	case SCE_ITALIAN_LANGUAGE:
		return 3;
	case SCE_DUTCH_LANGUAGE:
		return 1;
	case SCE_PORTUGUESE_LANGUAGE:
		return 6;
	default:
		return 0;
  }
}
#else
INCLUDE_ASM("asm/nonmatchings/text_001D82A0", func_001DBD50);
#endif

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", func_001DBDB8);

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", func_001DBFE0);

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", func_001DC070);

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", func_001DC0D0);

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", func_001DC1F0);

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", func_001DC588);

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", func_001DC620);

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", func_001DC698);

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", func_001DCA88);

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", func_001DCAF8);

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", func_001DCB60);

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", func_001DCD08);

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", func_001DCD40);

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", func_001DCD48);

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", func_001DCD50);

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", func_001DCDC8);

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", func_001DCE18);

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", func_001DD0B8);

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", func_001DD128);

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", func_001DD220);

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", func_001DD2A0);

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", func_001DD2D8);

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", func_001DD310);

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", func_001DD348);

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", func_001DD368);

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", func_001DD3A0);

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", func_001DD400);

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", func_001DD460);

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", func_001DD4A0);

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", func_001DD4C8);

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", func_001DD4F0);

void func_001DD518(void) {
	return;
}

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", func_001DD520);

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", func_001DD570);

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", func_001DD578);

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", func_001DD580);

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", func_001DD5B0);

INCLUDE_ASM("asm/nonmatchings/text_001D82A0", func_001DD5D0);
