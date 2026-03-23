#include "common.h"
#include <stdio.h>
#include "unk.h"
#include "Dogs/Game.h"

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/BookMetaphor", D_003D2B58);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/BookMetaphor", D_003D2B80);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/BookMetaphor", D_003D2BB0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_0018C748);
#ifdef NON_MATCHING
BookMetaphor::GamePositionPage::GamePositionPage(int arg1) {
    this->unk0 = arg1;
    this->unkC = -1;
}
#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", __Q212BookMetaphor16GamePositionPagei);
#endif

#ifdef NON_MATCHING
short func_0018C980(int level, int gate) {

}
#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_0018C980);
#endif

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_0018CA10);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_0018CA48);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_0018CAC0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_0018CBA0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_0018D438);
#ifdef NON_MATCHING
BookMetaphor::NewGamePage::NewGamePage() : GamePositionPage(2) {
    this->unk10 = 0;
    //func_002d6e68
}
#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", __Q212BookMetaphor11NewGamePage);
#endif

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_0018D830__Q212BookMetaphor11NewGamePage); /* return D_0035D33C (levelid for newgame?) */

/*
short BookMetaphor::NewGamePage::func_0018D830() {
    return D_0035D33C;
}
*/
int BookMetaphor::NewGamePage::func_0018D840() {
    return 0;
}

int BookMetaphor::NewGamePage::func_0018D848() {
    return 0;
}

int BookMetaphor::NewGamePage::func_0018D850() {
    return 0;
}

int BookMetaphor::NewGamePage::func_0018D858() {
    return 0;
}

int BookMetaphor::NewGamePage::func_0018D860() {
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_0018D868); // NewGamePage member

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_0018D8F8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_0018DAE8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_0018DFC0);
#ifdef NON_MATCHING
BookMetaphor::LoadGamePage::LoadGamePage(int arg1, int arg2) : GamePositionPage (arg1) {
    this->unk10 = arg2;
    this->unk14 = 0;
}
#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", __Q212BookMetaphor12LoadGamePageii);
#endif

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_0018E038__Q212BookMetaphor12LoadGamePage);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_0018E090); // LoadGamePage member

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_0018E0B0); // LoadGamePage member

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_0018E0D0); // LoadGamePage member

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_0018E0F0); // LoadGamePage member

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_0018E110); // LoadGamePage member

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_0018E138); // LoadGamePage member

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_0018E168); // LoadGamePage member

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_0018E228); // SaveGamePage member

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_0018E3E8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_0018E8B8); // LoadGamePage member

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_0018E908);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_0018E958);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_0018E9A8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_0018E9C8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_0018E9E8); // SaveGamePage member

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_0018EA08); // SaveGamePage member

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_0018EA28); // SaveGamePage member

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_0018EA50); // SaveGamePage member

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_0018EA80); // SaveGamePage member

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_0018EB40); // SaveGamePage member

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_0018ED70); // SaveGamePage member

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_0018EE28); // SaveGamePage member

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_0018EE50); // SaveGamePage member

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_0018EEA0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_0018EED0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_0018EF00);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_0018EF78);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_0018F020); /* CurrentPositionPage */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_0018F070); // CurrentPositionPage member

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_0018F0A0__Q212BookMetaphor19CurrentPositionPage);
/*
short BookMetaphor::CurrentPositionPage::func_0018F0A0() {
    return this->unk18;
}
*/
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_0018F0A8); // CurrentPositionPage member

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_0018F100); // CurrentPositionPage member

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_0018F1B0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_0018F1E8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_0018F248);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_0018F290);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_0018F3B0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_0018F3E0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_0018F498);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_0018F4F0); // CurrentPositionPage member

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_0018F6D0); // CurrentPositionPage member

#ifdef NON_MATCHING
BookMetaphor::Stats0Page::Stats0Page() {
    //func_0018eea0
}
#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", __Q212BookMetaphor10Stats0Page);
#endif

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_0018F770__Q212BookMetaphor10Stats0Page); // Stats0Page member

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/BookMetaphor", D_003D2D60);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_0018F790); // Stats0Page member

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_0018FE80); // "No move in PlayerMoveStrings matches move in Stats0Page_MovementList[%d]"

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_001904D8); // Stats0Page member

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_00190508); // Stats0Page member

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_001905C0); // Stats0Page member
#ifdef NON_MATCHING
BookMetaphor::Stats1Page::Stats1Page() {
    this->unk0 = 0;
    //
    this->unk10 = 0;
    //
    this->unk14 = 0;
    this->unk18 = 0;
}
#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", __Q212BookMetaphor10Stats1Page);
#endif

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", _$_Q212BookMetaphor10Stats1Page);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_00190788);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_00190C18); /* a0->unk10 = 0; */

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/BookMetaphor", D_003D2E58); /* "memcard1:" */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_00190C20); // Stats1Page member

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_00191180); // Stats1Page member

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_00191678); // Stats1Page member

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_001916A8); // Stats1Page member

BookMetaphor::SettingsPage::SettingsPage() {
    this->unk10 = 1;
    this->unk0 = 0;
    this->unk8 = 0;
    this->unkC = 0;
    this->m_cheatsAvailable = false;
}

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", _$_Q212BookMetaphor12SettingsPage);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_00192010);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_00192110); // SettingsPage member

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_00192820);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_001928A8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_00192CF0); // Settings Page member

#ifdef NON_MATCHING
BookMetaphor::CheatsPage::CheatsPage() {
    this->unk0 = 0;
    //unk8
    this->unk10 = 0;
    this->unk14 = 0;
    this->unk1C = 0;
}
#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", __Q212BookMetaphor10CheatsPage);
#endif

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", _$_Q212BookMetaphor10CheatsPage);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_00193528); // CheatsPage member

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_001935F0); // CheatsPage member

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_00193D38); // CheatsPage member

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_00193DC0); // CheatsPage member

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_00193F60); // CheatsPage member

#ifdef NON_MATCHING
BookMetaphor::BackgroundThread::BackgroundThread() {
    this->unk8 = 0;
}
#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", __Q212BookMetaphor16BackgroundThread);
#endif

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_00194678);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_001946B8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_00194710);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_00194738);


BookMetaphor::ChangeLevelBackgroundThread::ChangeLevelBackgroundThread(int level, int gate) {
    this->m_level = level;
    this->m_gate = gate;
}

void BookMetaphor::ChangeLevelBackgroundThread::func_001947C8() {
    short sVar1;
    s_func_001C6DC8* unk;

    while (unk = func_001C6DC8(TheGame), unk->unk4F8 != 0) {
        Thread::SwitchToNext();
  }
    printf("Loading next set of overlays\n");
    sVar1 = func_0018C980(m_level, m_gate);
    func_00273A80(sVar1);
    printf("Changing level\n");
    func_001C88D0(TheGame, m_level, m_gate);
}

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_00194858); // book metaphor scene models?

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_00194990); // unload bookmetaphor models?

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_00194AE8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_00194B08);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_00194D40);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_00195930); // destroy bookmetaphor?

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_00196320);

void func_00196418() { // called by HighlightClueReq member func_001D9C88
    return;
}

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_00196420);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_00196468);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_00196470);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_001965A8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_001965F0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_00196C88);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_001970E0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_00197138);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_00197168);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_00197240);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_00197448);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_00197488);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_001974F8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_00197548);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_001975E0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_001977B0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_001977E0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_00198F30);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_00198FA0); // rendering?

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_0019A6E8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_0019A788);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_0019A860);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_0019A8C0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_0019A940);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_0019AA60);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_0019AB80);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_0019ACA0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_0019ADC0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_0019AEE0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_0019B000);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_0019B120);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_0019B240);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_0019B360);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_0019B480);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_0019B5A0);
#ifdef NON_MATCHING
BookMetaphorLayer::BookMetaphorLayer() {
    //this->unkD0 = 0;
    // this->field194_0xe0 = &_vt$17BookMetaphorLayer;
    //func_00306cd8(&this->field194_0xe0);
    func_00273A80(7);
    //pGVar1 = TheGame;
    TheGame->m_fps = 0.01;
    //piVar2 = (int *)func_001c6dc8(pGVar1);
    func_001C6DC8(TheGame);

    // iVar3 = func_001c6dc8(TheGame);
    // func_001974f8(piVar2,(long)(int)pGVar1->field198_0xe4,
    //             *(int *)(iVar3 + *(int *)(iVar3 + 0x408) * 4 + 0x3e0));
    // iVar3 = func_001c6dc8(TheGame);
    // *(undefined4 *)(iVar3 + 0x4f8) = 0;
    Thread::SwitchToNext();
}
#else
INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", __17BookMetaphorLayer);
#endif

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", _$_17BookMetaphorLayer);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_0019B870); // BookMetaphorLayer member; this function seems to handle animations in BM

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_0019B8B8); // BookMetaphorLayer member; nopping out this function makes the bookmetaphor scene not render

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_0019B8F0); // BookMetaphorLayer member; this function seems to handle BookMetaphor input

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_0019B968); // BookMetaphorLayer member; called when back (triangle) button is pressed in BM

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_0019B9B0); // BookMetaphorLayer member; called when switching languages

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_0019B9C0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_0019BA58);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_0019BAB8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_0019BAD8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_0019BAF8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_0019BB90);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_0019BBF0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_0019BC10);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_0019BCA8);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_0019BD08);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_0019BDA0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_0019BE00);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_0019BE20);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_0019BEB8);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/BookMetaphor", D_003D31B0);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/BookMetaphor", D_003D31C8);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/BookMetaphor", D_003D31E8);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/BookMetaphor", _vt$Q212BookMetaphor27ChangeLevelBackgroundThread);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/BookMetaphor", _vt$Q212BookMetaphor24SaveGameBackgroundThread);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/BookMetaphor", _vt$Q212BookMetaphor24LoadGameBackgroundThread);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/BookMetaphor", _vt$Q212BookMetaphor23NewGameBackgroundThread);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/BookMetaphor", _vt$Q212BookMetaphor16BackgroundThread);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/BookMetaphor", _vt$Q212BookMetaphor10CheatsPage);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/BookMetaphor", _vt$Q212BookMetaphor12SettingsPage);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/BookMetaphor", _vt$Q212BookMetaphor10Stats1Page);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/BookMetaphor", _vt$Q212BookMetaphor10Stats0Page);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/BookMetaphor", _vt$Q212BookMetaphor19CurrentPositionPage);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/BookMetaphor", _vt$Q212BookMetaphor12SaveGamePage);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/BookMetaphor", _vt$Q212BookMetaphor12LoadGamePage);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/BookMetaphor", _vt$Q212BookMetaphor11NewGamePage);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/BookMetaphor", _vt$Q212BookMetaphor16GamePositionPage);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/BookMetaphor", _vt$Q212BookMetaphor4Page);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/BookMetaphor", _vt$6Thread);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/BookMetaphor", D_003D3938); /* _vt$9GameLayer */

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/BookMetaphor", D_003D3958); /* _vt$9GameLayer */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_0019BF18);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_0019D4F0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_0019D530);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_0019D560);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_0019D590);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", __tf9GameLayer);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", __tf6Thread);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_0019D660);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", __tfQ212BookMetaphor4Page);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", _$_Q212BookMetaphor16GamePositionPage);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", __tfQ212BookMetaphor16GamePositionPage);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", _$_Q212BookMetaphor11NewGamePage);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/BookMetaphor", D_003D3EF8); /* "9GameLayer" */

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/BookMetaphor", D_003D3F08);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/BookMetaphor", D_003D3F18);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/BookMetaphor", D_003D3F30);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", __tfQ212BookMetaphor11NewGamePage);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", _$_Q212BookMetaphor12LoadGamePage);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", __tfQ212BookMetaphor12LoadGamePage);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", _$_Q212BookMetaphor12SaveGamePage);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", __tfQ212BookMetaphor12SaveGamePage);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", _$_Q212BookMetaphor19CurrentPositionPage);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", __tfQ212BookMetaphor19CurrentPositionPage);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", _$_Q212BookMetaphor10Stats0Page);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/BookMetaphor", D_003D3FE0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", __tfQ212BookMetaphor10Stats0Page);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/BookMetaphor", D_003D4010);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", __tfQ212BookMetaphor10Stats1Page);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", __tfQ12BookMetaphor12SettingsPage);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", __tfQ212BookMetaphor10CheatsPage);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", _$_Q212BookMetaphor16BackgroundThread);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", __tfQ212BookMetaphor16BackgroundThread);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", _$_Q212BookMetaphor23NewGameBackgroundThread);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/BookMetaphor", D_003D4080); /* "Q212BookMetaphor16BackgroundThread" */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", __tfQ212BookMetaphor23NewGameBackgroundThread);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", _$_Q212BookMetaphor24LoadGameBackgroundThread);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", __tfQ212BookMetaphor24LoadGameBackgroundThread);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", _$_Q212BookMetaphor24SaveGameBackgroundThread);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", __tfQ212BookMetaphor24SaveGameBackgroundThread);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", _$_Q212BookMetaphor27ChangeLevelBackgroundThread);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", __tfQ212BookMetaphor27ChangeLevelBackgroundThread);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_0019E348);

void BookMetaphor::Page::func_0019E378() {
    return;
}

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_0019E380); // Page member

int BookMetaphor::Page::func_0019E3A8() {
    return 1;
}

int BookMetaphor::Page::func_0019E3B0() {
    return 1;
}

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_0019E3B8); /* a0->unk10 = a1 */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_0019E3C0); /* a0->unk14 = a1 */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_0019E3C8); /* return a0->unk8 */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_0019E3D0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", __tf17BookMetaphorLayer);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/BookMetaphor", D_003D4180);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/BookMetaphor", D_003D4190);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/BookMetaphor", D_003D41C0);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/BookMetaphor", D_003D43A0);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/BookMetaphor", D_003D44F8);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/BookMetaphor", D_003D45B0);

INCLUDE_RODATA("asm/nonmatchings/Dogs/Code/BookMetaphor", D_003D45C0);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", __tfQ24File8Callback);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_0019E500); /* __tf12InputBinding */

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", __tfQ212BookMetaphor28CurrentPositionPageResponder);

INCLUDE_ASM("asm/nonmatchings/Dogs/Code/BookMetaphor", func_0019E580);
