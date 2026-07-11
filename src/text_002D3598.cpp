#include "common.h"
#include "debug.h"
#include "unk.h"

#include "FGDK3/FontRes.h"
#include "FGDK3/ThrowCat.h"
#include "FGDK3/RelRecv.h"

#include <stdio.h>
#include <string.h>

INCLUDE_ASM("asm/nonmatchings/text_002D3598", func_002D3598); /* StreamRenderer ? */

#ifdef NON_MATCHING
MessageStream::MessageStream(const char* arg1, int arg2, int arg3) {
    this->unk1C = this;
    this->unk0 = arg2;
    this->unk4 = arg3;
    this->unkC = 1;
    this->unk8 = 1;
    this->unk10 = new char[strlen(arg1) + 1];
    strcpy(this->unk10, arg1);
}
#else
INCLUDE_ASM("asm/nonmatchings/text_002D3598", func_002D3628);
#endif

INCLUDE_ASM("asm/nonmatchings/text_002D3598", func_002D3690); // called by unreferenced function

INCLUDE_ASM("asm/nonmatchings/text_002D3598", func_002D36E0);

INCLUDE_ASM("asm/nonmatchings/text_002D3598", func_002D3760);

INCLUDE_ASM("asm/nonmatchings/text_002D3598", func_002D37B8);

#ifdef NON_MATCHING
DebugEnvironment::DebugEnvironment() {
    this->unk8 = 0;
    this->unk14 = 0;
    //this->unk0
    this->unk4 = 0;
    //this->unk10
    this->unkC = 0;
    this->unk20 = 0;
    this->unk2C = 0;
    this->unk1C = 0;
    //this->unk18
    this->unk24 = 0;
    //this->unk28
    this->unk30 = 0;
    this->unk34 = 0;
    //
    //002d42e8
    func_002D42D8();
    //002d4780
    //
}
#else
INCLUDE_ASM("asm/nonmatchings/text_002D3598", __16DebugEnvironment);
#endif


INCLUDE_ASM("asm/nonmatchings/text_002D3598", _$_16DebugEnvironment);

INCLUDE_ASM("asm/nonmatchings/text_002D3598", func_002D3950); // RCT3 DebugEnvironment::OnNewMessage(const TextMessage*) ?

INCLUDE_RODATA("asm/nonmatchings/text_002D3598", D_00442D68);

INCLUDE_ASM("asm/nonmatchings/text_002D3598", __11DebugWindow);

INCLUDE_ASM("asm/nonmatchings/text_002D3598", _$_11DebugWindow);

void func_002D42D8() { // RCT3 DebugEnvironment::InitialiseStreams()?
    return;
}

void func_002D42E0() {
    return;
}

INCLUDE_ASM("asm/nonmatchings/text_002D3598", func_002D42E8); // RCT3 DebugEnvironment::SetState(DebugEnvironment::State*)?

INCLUDE_ASM("asm/nonmatchings/text_002D3598", func_002D43A0);

INCLUDE_ASM("asm/nonmatchings/text_002D3598", func_002D4448); // unreferenced

INCLUDE_ASM("asm/nonmatchings/text_002D3598", func_002D4500); // unreferenced

INCLUDE_ASM("asm/nonmatchings/text_002D3598", func_002D4528); // unreferenced

INCLUDE_ASM("asm/nonmatchings/text_002D3598", func_002D4550);

INCLUDE_ASM("asm/nonmatchings/text_002D3598", func_002D45C0);

INCLUDE_ASM("asm/nonmatchings/text_002D3598", func_002D4600);

INCLUDE_ASM("asm/nonmatchings/text_002D3598", func_002D4740);

void func_002D4770() {
    return;
}

void func_002D4778(char* arg1, const char* arg2) {
    return;
}

void func_002D4780() { // RCT3 DebugEnvironment::ResetFile(const char*)?
    return;
}

INCLUDE_ASM("asm/nonmatchings/text_002D3598", func_002D4788);

INCLUDE_ASM("asm/nonmatchings/text_002D3598", func_002D4930); // DebugWindow virtual

INCLUDE_ASM("asm/nonmatchings/text_002D3598", func_002D49C8); // DebugEnvironment::CreateStream?

INCLUDE_ASM("asm/nonmatchings/text_002D3598", func_002D4A78);

INCLUDE_ASM("asm/nonmatchings/text_002D3598", func_002D4BB0); /* __15Widget_TableRowi ? */

INCLUDE_RODATA("asm/nonmatchings/text_002D3598", D_00442D88); /* "Welcome to the debug environment" */

INCLUDE_RODATA("asm/nonmatchings/text_002D3598", D_00442DB0); /* "<default>" */

INCLUDE_RODATA("asm/nonmatchings/text_002D3598", D_00442DC0); /* " ->File " */

INCLUDE_RODATA("asm/nonmatchings/text_002D3598", D_00442DD0); /* " ->Game " */

INCLUDE_RODATA("asm/nonmatchings/text_002D3598", D_00442DE0); /* "Message window compositor" */

INCLUDE_RODATA("asm/nonmatchings/text_002D3598", D_00442E00); /* "Stream window compositor" */

INCLUDE_RODATA("asm/nonmatchings/text_002D3598", D_00442E20); /* "messages scrollbar" */

INCLUDE_RODATA("asm/nonmatchings/text_002D3598", D_00442E38); /* "streams scrollbar" */

INCLUDE_RODATA("asm/nonmatchings/text_002D3598", D_00442E50); /* "top window" */

INCLUDE_RODATA("asm/nonmatchings/text_002D3598", D_00442E60); /* "Game initialisation complete" */

INCLUDE_ASM("asm/nonmatchings/text_002D3598", func_002D4C00); // DebugWindow virtual

INCLUDE_ASM("asm/nonmatchings/text_002D3598", func_002D4D78);

INCLUDE_ASM("asm/nonmatchings/text_002D3598", func_002D4DE8);

INCLUDE_ASM("asm/nonmatchings/text_002D3598", func_002D4E48);

INCLUDE_ASM("asm/nonmatchings/text_002D3598", func_002D4EC0);
INCLUDE_ASM("asm/nonmatchings/text_002D3598", func_002D4F28);
INCLUDE_ASM("asm/nonmatchings/text_002D3598", func_002D4F90);

INCLUDE_ASM("asm/nonmatchings/text_002D3598", func_002D4FE8);

INCLUDE_ASM("asm/nonmatchings/text_002D3598", func_002D5020); /* Debug_DataValueContainer */

INCLUDE_ASM("asm/nonmatchings/text_002D3598", func_002D5130);

INCLUDE_ASM("asm/nonmatchings/text_002D3598", func_002D5190);

INCLUDE_ASM("asm/nonmatchings/text_002D3598", func_002D51D8); // virtual

INCLUDE_ASM("asm/nonmatchings/text_002D3598", func_002D5208); /* Debug_StructContainer */

INCLUDE_ASM("asm/nonmatchings/text_002D3598", func_002D52E0);

INCLUDE_ASM("asm/nonmatchings/text_002D3598", func_002D5378);

INCLUDE_ASM("asm/nonmatchings/text_002D3598", func_002D53D0);

INCLUDE_ASM("asm/nonmatchings/text_002D3598", func_002D5448);
// new BoolEditor

INCLUDE_ASM("asm/nonmatchings/text_002D3598", func_002D54A8);

INCLUDE_ASM("asm/nonmatchings/text_002D3598", func_002D5520);

INCLUDE_ASM("asm/nonmatchings/text_002D3598", func_002D5588);

INCLUDE_ASM("asm/nonmatchings/text_002D3598", func_002D55F0);

INCLUDE_ASM("asm/nonmatchings/text_002D3598", func_002D5690); // Debug_StructContainer virtual

INCLUDE_ASM("asm/nonmatchings/text_002D3598", func_002D56E0); // Debug_StructContainer member

INCLUDE_ASM("asm/nonmatchings/text_002D3598", func_002D5788); /* rct3 DebugEnvironment::Get (pretty sure) */
// DebugEnvironment* D_00452948;
// if (D_00452948 == NULL) {
// D_00452948 = new DebugEnvironment();
//
//}

INCLUDE_ASM("asm/nonmatchings/text_002D3598", func_002D57C0); /* rct3 DebugEnvironment::Terminate */

INCLUDE_ASM("asm/nonmatchings/text_002D3598", func_002D5800); // unreferenced

INCLUDE_ASM("asm/nonmatchings/text_002D3598", func_002D5848); // unreferenced

INCLUDE_ASM("asm/nonmatchings/text_002D3598", func_002D5888); // unreferenced

INCLUDE_ASM("asm/nonmatchings/text_002D3598", func_002D58D0); // unreferenced

INCLUDE_ASM("asm/nonmatchings/text_002D3598", func_002D5910); // unreferenced

#ifdef NON_MATCHING
void DebugEnvironment::VFatalError(const char* fmt, char* arg2) {
    char str[1024];
    vsprintf(str, fmt, arg2);
    printf("%s\n", str);
    func_002D4778("\r\n*** FATAL ERROR *** : ", 0);
    func_002D4778(str, 0);
    func_002D4778("\r\n", 0);
    strcat(str,"\n\nThis error has also been sent to Debug.log");
    strcat(str,"\n\nOK: <Attempt to continue>      Cancel: <Exit>");
    if (func_002963F0(str, 0) == 0) {
        PS2_BREAK();
    }

}
#else
INCLUDE_ASM("asm/nonmatchings/text_002D3598", func_002D5958); /* RCT3 DebugEnvironment::VFatalError */
#endif

INCLUDE_ASM("asm/nonmatchings/text_002D3598", func_002D59F0); // unreferenced

INCLUDE_ASM("asm/nonmatchings/text_002D3598", func_002D5AA8);

#ifdef NON_MATCHING
extern int D_0045298C;
int func_002D5B40(const char* arg0, ...) {
    va_list args;
    char str[1024];
    size_t len;
    sprintf(str, "Assertion failure:\n\n");
    len = strlen(str);
    vsprintf(str + len, str, args);
    //
    printf("*** Assertion failure *** : %s\n", str + len);
    strcat(str, "\n\nAbort:<IGNORE ALL>    Retry:<DEBUG>    Ignore:<IGNORE>");
    int var1 = func_002963F0(str, 1);
    D_0045298C = 0;
    if (var1 == 3) {

        return 1;
    }
    else if (var1 == 2) {
        D_0045298C = 1;
        return 0;
    }

}
#else
INCLUDE_ASM("asm/nonmatchings/text_002D3598", func_002D5B40); // assertion failure (int func_002D5B40(char*,...?) ; CustomAssert?
#endif

INCLUDE_ASM("asm/nonmatchings/text_002D3598", func_002D5C28);

void DDE_FatalError(const char* message, ...) {
    va_list args;
    va_start(args, message);
    func_002D5958(message, args);
    va_end(args);
}

INCLUDE_ASM("asm/nonmatchings/text_002D3598", func_002D5CC0__11DebugWindow);

INCLUDE_ASM("asm/nonmatchings/text_002D3598", func_002D5CE0); // DebugWindow virtual

INCLUDE_ASM("asm/nonmatchings/text_002D3598", func_002D5D08); // unreferenced

INCLUDE_RODATA("asm/nonmatchings/text_002D3598", _vt$14StreamRenderer);

INCLUDE_RODATA("asm/nonmatchings/text_002D3598", D_00442FE8);

INCLUDE_RODATA("asm/nonmatchings/text_002D3598", D_00443008);

INCLUDE_RODATA("asm/nonmatchings/text_002D3598", D_00443028);

INCLUDE_RODATA("asm/nonmatchings/text_002D3598", _vt$22Debug_WatchEnvironment);

INCLUDE_RODATA("asm/nonmatchings/text_002D3598", _vt$21Debug_StructContainer);

INCLUDE_RODATA("asm/nonmatchings/text_002D3598", _vt$24Debug_DataValueContainer);

INCLUDE_RODATA("asm/nonmatchings/text_002D3598", _vt$11DebugWindow);

INCLUDE_RODATA("asm/nonmatchings/text_002D3598", _vt$15MessageStreamUI);

INCLUDE_RODATA("asm/nonmatchings/text_002D3598", _vt$16DebugEnvironment);

INCLUDE_ASM("asm/nonmatchings/text_002D3598", __tf16DebugEnvironment);

void DebugEnvironment::func_002D5D58() { // RCT3 DebugEnvironment::OnRebuild() ?
    return;
}

INCLUDE_ASM("asm/nonmatchings/text_002D3598", func_002D5D60); // unreferenced

INCLUDE_ASM("asm/nonmatchings/text_002D3598", func_002D5D68); // unreferenced

INCLUDE_ASM("asm/nonmatchings/text_002D3598", _$_15MessageStreamUI);

INCLUDE_ASM("asm/nonmatchings/text_002D3598", __tf15MessageStreamUI);

INCLUDE_ASM("asm/nonmatchings/text_002D3598", __tf11DebugWindow);

INCLUDE_ASM("asm/nonmatchings/text_002D3598", func_002D5E90); // unreferenced

INCLUDE_ASM("asm/nonmatchings/text_002D3598", func_002D5ED0); // unreferenced

INCLUDE_ASM("asm/nonmatchings/text_002D3598", func_002D5F20); // unreferenced

INCLUDE_ASM("asm/nonmatchings/text_002D3598", func_002D5F70); // unreferenced

INCLUDE_ASM("asm/nonmatchings/text_002D3598", func_002D5FA0); // unreferenced

INCLUDE_ASM("asm/nonmatchings/text_002D3598", func_002D6010); // unreferenced

INCLUDE_ASM("asm/nonmatchings/text_002D3598", func_002D6020); // Debug_DataValueContainer virtual

INCLUDE_ASM("asm/nonmatchings/text_002D3598", __tf24Debug_DataValueContainer);

INCLUDE_ASM("asm/nonmatchings/text_002D3598", func_002D6090);

INCLUDE_RODATA("asm/nonmatchings/text_002D3598", D_004439D0); /* "24Debug_DataValueContainer" */

INCLUDE_ASM("asm/nonmatchings/text_002D3598", __tf21Debug_StructContainer);

INCLUDE_ASM("asm/nonmatchings/text_002D3598", func_002D6138);

INCLUDE_ASM("asm/nonmatchings/text_002D3598", __tf22Debug_WatchEnvironment);

INCLUDE_ASM("asm/nonmatchings/text_002D3598", func_002D61A8);

INCLUDE_ASM("asm/nonmatchings/text_002D3598", __tf19ClearMessagesAction);

INCLUDE_ASM("asm/nonmatchings/text_002D3598", func_002D6218); // WGRABBIT ClearMessagesAction::Execute(Widget*, bool)?

INCLUDE_ASM("asm/nonmatchings/text_002D3598", func_002D6248);

INCLUDE_ASM("asm/nonmatchings/text_002D3598", __tf18TestMessagesAction);

INCLUDE_ASM("asm/nonmatchings/text_002D3598", func_002D62B8); // WGRABBIT TestMessagesAction::Execute(Widget*, bool)?
// "Welcome to the debug environment"

INCLUDE_ASM("asm/nonmatchings/text_002D3598", func_002D62E8);

INCLUDE_ASM("asm/nonmatchings/text_002D3598", __tf20SetDebugOutputAction);

INCLUDE_ASM("asm/nonmatchings/text_002D3598", func_002D6358); // WGRABBIT SetDebugOutputAction::Execute(Widget*, bool)?

INCLUDE_ASM("asm/nonmatchings/text_002D3598", __tf14StreamRenderer);

INCLUDE_ASM("asm/nonmatchings/text_002D3598", func_002D63F0); // WGRABBIT StreamRender::Render(char*, int)?

INCLUDE_ASM("asm/nonmatchings/text_002D3598", func_002D6480);
// func_002D4770

INCLUDE_ASM("asm/nonmatchings/text_002D3598", func_002D64F8); // unreferenced

INCLUDE_ASM("asm/nonmatchings/text_002D3598", func_002D6570); // unreferenced

INCLUDE_ASM("asm/nonmatchings/text_002D3598", func_002D65B0);

INCLUDE_ASM("asm/nonmatchings/text_002D3598", func_002D65D8);

INCLUDE_ASM("asm/nonmatchings/text_002D3598", func_002D6678);

INCLUDE_ASM("asm/nonmatchings/text_002D3598", func_002D6718); // unreferenced

INCLUDE_ASM("asm/nonmatchings/text_002D3598", func_002D67B8);

INCLUDE_ASM("asm/nonmatchings/text_002D3598", func_002D6858); // unreferenced

INCLUDE_ASM("asm/nonmatchings/text_002D3598", func_002D68A0);

INCLUDE_ASM("asm/nonmatchings/text_002D3598", func_002D6900);

INCLUDE_ASM("asm/nonmatchings/text_002D3598", func_002D6978); // unreferenced

INCLUDE_ASM("asm/nonmatchings/text_002D3598", func_002D6998); // unreferenced


