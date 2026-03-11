#include "common.h"

#include "unk.h"
#include "debug.h"

#include "FGDK3/GameShell.h"


// GameShell::Step? (rct3 mac)
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/GameShell", Step__9GameShellG9GameShell);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/GameShell", func_002D2F98);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/GameShell", func_002D3020);

#ifdef NON_MATCHING
void GameShell::func_002D30A8(int arg1) {
    this->unk1C = arg1 ^ 1;
}
#else
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/GameShell", func_002D30A8__9GameShelli);
#endif

#ifdef NON_MATCHING
GameShell* D_004528EC;
GameShell::GameShell(float fps, float gamespeed) {
  long uVar1;

  func_002D3360(this);
  this->m_gametime = 0.0f;
  uVar1 = TimSrv_GetTime();
  this->unk8= uVar1;
  this->m_fps = fps; // unk10
  this->m_gamespeed = gamespeed; // unk14
  this->unk1C = 0; // input is disabled when != 0 ?
  if (D_004528EC != 0) { // m_me?
    DDE_FatalError("More than one GameShell instance not allowed");
  }
  //D_004528EC = this;

}
#else
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/GameShell", __9GameShellff);
#endif

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/GameShell", _$_9GameShell);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/GameShell", func_002D3210);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/GameShell", func_002D3268);

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/GameShell", _vt$9GameShell);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/GameShell", __tf9GameShell);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/GameShell", func_002D3318);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/GameShell", func_002D3360); /* TimSrv_Client::TimSrv_Client */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/GameShell", func_002D33C0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/GameShell", func_002D3428);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/GameShell", func_002D3460); /* return * */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/GameShell", func_002D3490);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/GameShell", func_002D34C8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/GameShell", func_002D3500);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/GameShell", func_002D3530);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/GameShell", func_002D3560);
