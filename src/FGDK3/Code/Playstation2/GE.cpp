#include "common.h"
#include "debug.h"
#include "unk.h"

#include "FGDK3/Playstation2/IOPMem.h"
#include <libscf.h>
#include <ee/sifdev.h>
#include "FGDK3/ThrowCat.h"

#include "FGDK3/Playstation2/GE.h"
#include <libdev.h>
#include <libgraph.h>


#include "FGDK3/Playstation2/GE_RenderHardware.h"
#include "ge_unk.h"

// Beginning of Playstation2/GE.cpp

// D_004528C0
// short D_004528C4 (interlacing mode)
// short D_004528C6 (TV mode)
// short D_004528C8 (field/frame mode)

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/GE", func_002CA560);

#ifdef NON_MATCHING
Status GE_InternalInitialise() {
  extern void *D_004528B4;
  extern int D_004528B8;
  D_004528B4 = new int*[D_004528B8 << 2];

  sceDevVif0Reset();
  sceDevVif1Reset();
  sceDevVu0Reset();
  sceDevVu1Reset();
  sceGsResetPath();
  sceDmaReset(1);
  new GE_DMAPktRc1i69();
  GE_PS2RenderHardware* D_0045286C  = new GE_PS2RenderHardware(); // s_self?

  return Status(0xFFFFFFFFF, "c:/coding/fgdk3/Code/playstation2/GE.cpp", 260);
}

#else
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/GE", GE_InternalInitialise__Fv);
#endif

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/GE", func_002CA6D8); // unreferenced

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/GE", GE_InternalFinalise__Fv);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/GE", GE_Initialise__Fv);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/GE", GE_Finalise__Fv);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/GE", func_002CA950); /* return D_0045216C */

int func_002CA958() {
    return 1;
}

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/GE", func_002CA960); // RCT3 GE_GetDevice?



