#include "common.h"

#include "unk.h"
#include "debug.h"

// GameShell::Step? (rct3 mac)
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/GameShell", Step__9GameShellG9GameShell);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/GameShell", func_002D2F98);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/GameShell", func_002D3020);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/GameShell", func_002D30A8);

#ifdef NON_MATCHING
GameShell* D_004528EC;
GameShell::GameShell(float fps, float gamespeed) {
  //undefined8 uVar1;

  //TimSrv_Client();
  this->unk4 = 0;
  //uVar1 = TimSrv_GetTime();
  //*(undefined8 *)&this->field_0x8 = uVar1;
  this->m_fps = fps; // unk10
  this->m_gamespeed = gamespeed; // unk14
  this->unk1C = 0; // input is disabled when != 0 ?
  if (D_004528EC != 0) {
    DDE_FatalError("More than one GameShell instance not allowed");
  }
  //D_004528EC = this;

}
#else
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/GameShell", __9GameShellff);
#endif

// GameShell::~GameShell
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/GameShell", func_002D3188);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/GameShell", func_002D3210);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/GameShell", func_002D3268);

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Playstation2/GameShell", _vt$9GameShell);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/GameShell", __tf9GameShell);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/GameShell", func_002D3318);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/GameShell", func_002D3360); /* TimSrv_Client::TimSrv_Client */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/GameShell", func_002D33C0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/GameShell", func_002D3428);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/GameShell", func_002D3460);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/GameShell", func_002D3490);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/GameShell", func_002D34C8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/GameShell", func_002D3500);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/GameShell", func_002D3530);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/GameShell", func_002D3560);
