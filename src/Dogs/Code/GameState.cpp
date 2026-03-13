#include "common.h"

#include "Dogs/GameState.h"
#include "Dogs/Game.h"

#include "unk.h"

#ifdef NON_MATCHING
GameState::GameStateReq::GameStateReq(void* arg1) {
	this->unk8 = this;
	this->unkC = arg1;
}
#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/GameState", __Q29GameState12GameStateReqPv);
#endif

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/GameState", _$_Q29GameState12GameStateReq);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/GameState", func_001D8328); // Called by Game_Document constructor

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/GameState", func_001D8378);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/GameState", func_001D8418);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/GameState", func_001D8538);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/GameState", func_001D85B0); // called during game first loading
// this->m_view = 0;

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/GameState", func_001D8600); // called when entering book metaphor
//this->m_view = 3;

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/GameState", func_001D8660); // called when entering title screen/loading game
//this->m_view = 1;

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/GameState", func_001D86C0);
// this->m_view = 2;

#ifdef NON_MATCHING
LoadSavedGameReq::LoadSavedGameReq(int arg1) : GameState::GameStateReq::GameStateReq(this) {
	this->unk0 = arg1;
}
#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/GameState", __16LoadSavedGameReqi);
#endif

#ifdef NON_MATCHING
BMStateChangeReq::BMStateChangeReq(int state) : GameState::GameStateReq::GameStateReq(this) {
	this->m_state = state;
}
#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/GameState", __16BMStateChangeReqi);
#endif

#ifdef NON_MATCHING
BMPageChangeReq::BMPageChangeReq(int page) : GameState::GameStateReq::GameStateReq(this) {
	this->m_page = page;

}
#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/GameState", __15BMPageChangeReqi);
#endif

#ifdef NON_MATCHING
BMPageNumChangeReq::BMPageNumChangeReq(int num) : GameState::GameStateReq::GameStateReq(this) {
	this->m_num = num;

}
#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/GameState", __18BMPageNumChangeReqi);
#endif

#ifdef NON_MATCHING
ChangeLevelReq::ChangeLevelReq(int level, int gate) : GameState::GameStateReq::GameStateReq(this) {
	this->m_gate = gate;
	this->m_level = level;

}
#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/GameState", __14ChangeLevelReqii); /* ChangeLevelReq::ChangeLevelReq(int map, int entry); */
#endif

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/GameState", func_001D8910); /* StartNewGameReq */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/GameState", func_001D89D0); /* BMHighlightClueReq */

#ifdef NON_MATCHING
BMHighlightMoveReq::BMHighlightMoveReq(int move) : GameState::GameStateReq::GameStateReq(this) {
	this->m_move = move;
}
#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/GameState", __18BMHighlightMoveReqi);
#endif

#ifdef NON_MATCHING
BMPageActionReq::BMPageActionReq(int action) : GameState::GameStateReq::GameStateReq(this) {
	this->m_action = action;
}
#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/GameState", __15BMPageActionReqi);
#endif

#ifdef NON_MATCHING
FadeOutReq::FadeOutReq(float arg) : GameState::GameStateReq::GameStateReq(this) {
	this->unk0 = arg;
}
#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/GameState", __10FadeOutReqf);
#endif

#ifdef NON_MATCHING
FadeInReq::FadeInReq(float arg) : GameState::GameStateReq::GameStateReq(this) {
	this->unk0 = arg;
}
#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/GameState", __9FadeInReqf);
#endif

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/GameState", func_001D8C00);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/GameState", func_001D8C98);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/GameState", func_001D8CF8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/GameState", func_001D8D18);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/GameState", func_001D8D38);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/GameState", func_001D8DD0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/GameState", func_001D8E30);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/GameState", func_001D8E50);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/GameState", func_001D8EE8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/GameState", func_001D8F48);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/GameState", func_001D8FE0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/GameState", func_001D9040);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/GameState", func_001D9060);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/GameState", func_001D90F8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/GameState", __tfQ29GameState12GameStateReq);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/GameState", _$_13SwitchViewReq);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/GameState", _vt$9FadeInReq);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/GameState", _vt$10FadeOutReq);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/GameState", _vt$15BMPageActionReq);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/GameState", _vt$18BMHighlightMoveReq);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/GameState", _vt$18BMHighlightClueReq);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/GameState", _vt$15StartNewGameReq);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/GameState", _vt$14ChangeLevelReq);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/GameState", _vt$16LoadSavedGameReq);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/GameState", _vt$18BMPageNumChangeReq);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/GameState", _vt$15BMPageChangeReq);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/GameState", _vt$16BMStateChangeReq);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/GameState", _vt$13SwitchViewReq);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/GameState", _vt$Q29GameState12GameStateReq);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/GameState", D_003E33C0); /* "Q29GameState12GameStateReq" */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/GameState", __tf13SwitchViewReq);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/GameState", func_001D9228__13SwitchViewReq);

int SwitchViewReq::func_001D95B0() {
	return 1;
}

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/GameState", _$_16BMStateChangeReq);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/GameState", __tf16BMStateChangeReq);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/GameState", func_001D9648__16BMStateChangeReq);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/GameState", func_001D9680__16BMStateChangeReq);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/GameState", _$_15BMPageChangeReq);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/GameState", __tf15BMPageChangeReq);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/GameState", func_001D9748__15BMPageChangeReq);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/GameState", func_001D9780); // BMPageChangeReq member

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/GameState", _$_18BMPageNumChangeReq);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/GameState", __tf18BMPageNumChangeReq);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/GameState", func_001D98A0__18BMPageNumChangeReq);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/GameState", func_001D98D8); // BMPageNumChangeReq member

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/GameState", _$_16LoadSavedGameReq);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/GameState", __tf16LoadSavedGameReq);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/GameState", func_001D99F8__16LoadSavedGameReq);

int LoadSavedGameReq::func_001D9A50() {
	return 1;
}

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/GameState", _$_14ChangeLevelReq);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/GameState", __tf14ChangeLevelReq);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/GameState", func_001D9AE8__14ChangeLevelReq);

int ChangeLevelReq::func_001D9B20() {
	return 1;
}

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/GameState", _$_15StartNewGameReq);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/GameState", __tf15StartNewGameReq);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/GameState", func_001D9BB8__15StartNewGameReq);

int StartNewGameReq::func_001D9BF0() {
	return 1;
}

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/GameState", _$_18BMHighlightClueReq);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/GameState", __tf18BMHighlightClueReq);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/GameState", func_001D9C88); // BMHighlightClueReq member

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/GameState", func_001D9CC0); // BMHighlightClueReq member

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/GameState", _$_18BMHighlightMoveReq);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/GameState", __tf18BMHighlightMoveReq);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/GameState", func_001D9D80); // BMHighlightMoveReq member

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/GameState", func_001D9DB8); // BMHighlightMoveReq member

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/GameState", _$_15BMPageActionReq);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/GameState", __tf15BMPageActionReq);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/GameState", func_001D9E78__15BMPageActionReq);

int BMPageActionReq::func_001D9FB0() {
	return 1;
}

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/GameState", _$_10FadeOutReq);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/GameState", __tf10FadeOutReq);

#ifdef NON_MATCHING
// Do FadeOut
void FadeOutReq::func_001DA048() {
	func_001D3F58(TheGame);
}
#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/GameState", func_001DA048__10FadeOutReq);
#endif

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/GameState", func_001DA070); // FadeOutReq member

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/GameState", _$_9FadeInReq);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/GameState", __tf9FadeInReq);

#ifdef NON_MATCHING
// Do FadeIn
void FadeInReq::func_001DA138() {
	func_001D3F38(TheGame);
}
#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/GameState", func_001DA138__9FadeInReq);
#endif

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/GameState", func_001DA160); // FadeInReq member

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/GameState", func_001DA190); // internalinitialise?

void func_001DA1B8(void) { // internalfinalise?
	return;
}

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/GameState", func_001DA1C0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/GameState", func_001DA1F0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/GameState", func_001DA210);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/GameState", func_001DA268);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/GameState", func_001DA2E8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/GameState", func_001DA338);


