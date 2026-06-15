#include "common.h"
#include <eeregs.h>
#include <libgraph.h>
#include "FGDK3/Playstation2/GE_RenderHardware.h"
#include <stdio.h>
#include <malloc.h>

#ifdef NON_MATCHING
GE_PS2RenderHardware::GE_PS2RenderHardware() {
    DPUT_GIF_MODE(4);
    DPUT_D_PCR(0x60002);
    asm("sync");
    //func_002ae010
}
#else
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/GE_RenderHardware", __20GE_PS2RenderHardware);
#endif

#ifdef NON_MATCHING
GE_PS2RenderHardware::~GE_PS2RenderHardware() {
  if (this->unk24 != NULL) {
    free(this->unk24);
    this->unk24 = 0x0;
  }

}
#else
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/GE_RenderHardware", _$_20GE_PS2RenderHardware);
#endif

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/GE_RenderHardware", func_002A4BF8__20GE_PS2RenderHardware);
/*
Status func_002A4BF8(void) {
   //Status(0x4002, "c:/coding/fgdk3/Code/playstation2/GE_RenderHardware.cpp", 207)
}
*/
#ifdef NON_MATCHING
void func_002A4C58(/**/) {

/*
  if ((param_2 == 0) || (puVar1[2] != 0x32)) {
    func_002CA560(0,SCE_GS_INTERLACE,SCE_GS_NTSC,SCE_GS_FRAME);
    D_00386860 = 60; // set framerate
  }
  else {
    func_002CA560(0,SCE_GS_INTERLACE,SCE_GS_PAL,SCE_GS_FRAME);
    D_00386860 = 50; // set framerate
  }
*/
  new GE_PS2Device();
}

#else
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/GE_RenderHardware", func_002A4C58); // RCT3 CreateDevice ?
#endif

#ifdef NON_MATCHING
void GE_PS2RenderHardware::func_002A4D38() {
  this->m_unk0.i = func_002A5100();
  this->m_unk4.i = func_002A5110();
  this->m_unk8 = 0x3C;
  this->m_unkC = 1;

}
#else
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/GE_RenderHardware", func_002A4D38__20GE_PS2RenderHardware); // GE_PS2RenderHardware member
#endif

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/GE_RenderHardware", func_002A4D98); // GE_PS2RenderHardware member

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Playstation2/GE_RenderHardware", D_0043F320); /* "c:/coding/fgdk3/Code/playstation2/GE_RenderHardware.cpp" */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/GE_RenderHardware", func_002A4E48); // https://decomp.me/scratch/JnajD

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/GE_RenderHardware", func_002A5100); /* return D_00386858 */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/GE_RenderHardware", func_002A5110); /* return D_0038685C */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/GE_RenderHardware", func_002A5120);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/GE_RenderHardware", __tf17GE_RenderHardware);

#ifdef NON_MATCHING
GE_RenderHardware::~GE_RenderHardware() {
}
#else
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/GE_RenderHardware", _$_17GE_RenderHardware);
#endif

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Playstation2/GE_RenderHardware", _vt$20GE_PS2RenderHardware);

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Playstation2/GE_RenderHardware", _vt$17GE_RenderHardware);

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Playstation2/GE_RenderHardware", D_0043F408); /* "17GE_RenderHardware" */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/GE_RenderHardware", __tf20GE_PS2RenderHardware);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/GE_RenderHardware", func_002A5270);

int GE_PS2RenderHardware::func_002A5298() {
  return 0;
}

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/GE_RenderHardware", func_002A52A0); // GE_PS2RenderHardware member // GetCurrentScreenMode?

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/GE_RenderHardware", func_002A52D0); // set screen parameters?

int GE_PS2RenderHardware::func_002A5300() { // WGRABBIT GE_PS2RenderHardware::GetNumScreenModes(int) const ?
  return 6;
}

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/GE_RenderHardware", func_002A5308); /* return D_0045216C */

#ifndef NON_MATCHING
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/GE_RenderHardware", func_002A5310);
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/GE_RenderHardware", func_002A5330);
#endif
