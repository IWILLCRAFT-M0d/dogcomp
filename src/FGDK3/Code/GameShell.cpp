#include "common.h"

#include "unk.h"
#include "debug.h"

#include "FGDK3/GameShell.h"


// GameShell::Step? (rct3 mac)
#ifdef NON_MATCHING
extern float D_00452910;
void GameShell::Step() {

if (this->m_gameSpeed <= D_00452910) {

}

}
#else
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/GameShell", Step__9GameShellG9GameShell);
#endif

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/GameShell", func_002D2F98); // (GameShell*,)

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/GameShell", func_002D3020); // (GameShell*,)


void GameShell::func_002D30A8(bool arg1) { // rct3 GameShell::Activate?
    this->m_disabled = !arg1;
}


#ifdef NON_MATCHING
GameShell::GameShell(float deltaTime, float gameSpeed) {
  func_002D3360(this);
  this->m_gameTime = 0.0f;
  this->unk8 = TimSrv_GetTime();
  this->m_deltaTime = deltaTime;
  this->m_gameSpeed = gameSpeed;
  this->m_disabled = false;
  if (m_me != NULL) {
    DDE_FatalError("More than one GameShell instance not allowed");
  }
  m_me = this;

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

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/GameShell", func_002D3428); /* return (float) unk4 */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/GameShell", func_002D3460); /* return m_me */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/GameShell", func_002D3490); /* return (float) unk20 */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/GameShell", func_002D34C8); /* return (float) unk24 */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/GameShell", func_002D3500); /* float 0x10 = arg1 */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/GameShell", func_002D3530); /* float 0x14 = arg1 */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/GameShell", func_002D3560);
