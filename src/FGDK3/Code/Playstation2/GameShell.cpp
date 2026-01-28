#include "common.h"

// GameShell::Step? (rct3 mac)
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/GameShell", Step__9GameShellG9GameShell);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/GameShell", func_002D2F98);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/GameShell", func_002D3020);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/GameShell", func_002D30A8);

// GameShell::GameShell
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/GameShell", __9GameShellff);
/*

void GameShell::GameShell(float fps, float gamespeed) {
  undefined8 uVar1;

  TimSrv_Client::TimSrv_Client(this);
  this->unk4 = 0;
  uVar1 = TimSrv_GetTime();
  *(undefined8 *)&this->field_0x8 = uVar1;
  this->fps = fps; // unk10
  this->m_gamespeed = gamespeed; // unk14
  this->temp_inputdisabledthing = 0; // unk1c
  if (TheGame != 0) {
    tempR_DDE_FatalError("More than one GameShell instance not allowed");
  }
  TheGame = this;
  return;
}
*/
// GameShell::~GameShell
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/GameShell", func_002D3188);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/GameShell", func_002D3210);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/GameShell", func_002D3268);

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Playstation2/GameShell", _vt$9GameShell);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/GameShell", __tf9GameShell);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/GameShell", func_002D3318);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/GameShell", func_002D3360);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/GameShell", func_002D33C0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/GameShell", func_002D3428);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/GameShell", func_002D3460);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/GameShell", func_002D3490);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/GameShell", func_002D34C8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/GameShell", func_002D3500);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/GameShell", func_002D3530);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/GameShell", func_002D3560);
