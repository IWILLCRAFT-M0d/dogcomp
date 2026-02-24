#include "common.h"
#include "debug.h"
#include "unk.h"

#include "FGDK3/Playstation2/IOPMem.h"
#include <libscf.h>
#include <sound.h>
#include <ee/sifdev.h>
#include "FGDK3/ThrowCat.h"

#include "FGDK3/Playstation2/GE.h"
#include <libdev.h>
#include <libgraph.h>

#include "FGDK3/Playstation2/GE_RenderHardware.h"

INCLUDE_ASM("asm/nonmatchings/text_002CA560", func_002CA560);

#ifdef NON_MATCHING
Status GE_InternalInitialise() {
  void *pvVar1;
  extern void *D_004528B4;
  extern int D_004528B8;
  GE_PS2RenderHardware *D_0045286C;
  //PTR_004528b4 = (int *)__builtin_vec_new((undefined *)(DAT_004528b8 << 2));
  D_004528B4 = new int*[D_004528B8 << 2];
  sceDevVif0Reset();
  sceDevVif1Reset();
  sceDevVu0Reset();
  sceDevVu1Reset();
  sceGsResetPath();
  sceDmaReset(1);
  //__builtin_new((int *)0x2ac);
  pvVar1 = new GE_DMAPktRc1i69();


  //__builtin_new((int *)0x2c);
  D_0045286C  = new GE_PS2RenderHardware();

  return Status(0xFFFFFFFFF, "c:/coding/fgdk3/Code/playstation2/GE.cpp", 260);
}

#else
INCLUDE_ASM("asm/nonmatchings/text_002CA560", GE_InternalInitialise__Fv);
#endif

INCLUDE_ASM("asm/nonmatchings/text_002CA560", func_002CA6D8);

INCLUDE_ASM("asm/nonmatchings/text_002CA560", GE_InternalFinalise__Fv);

INCLUDE_ASM("asm/nonmatchings/text_002CA560", GE_Initialise__Fv);

INCLUDE_ASM("asm/nonmatchings/text_002CA560", GE_Finalise__Fv);

INCLUDE_ASM("asm/nonmatchings/text_002CA560", func_002CA950); /* return D_0045216C */

int func_002CA958() {
    return 1;
}

INCLUDE_ASM("asm/nonmatchings/text_002CA560", func_002CA960);


#ifdef NON_MATCHING

int D_00452894;

GE_RenderHardware::GE_RenderHardware() {
    this->m_unk0 = 1.0f;
    this->m_unk4 = 0;
    if (D_00452894 != 0) {
        ThrowCatch_DefiniteThrow(Status(0x4007, "C:/Coding/FGDK3/Code/Common/GE.cpp", 63));
    }
    D_00452894 = 1;

};
#else
INCLUDE_ASM("asm/nonmatchings/text_002CA560", __17GE_RenderHardware);
#endif

INCLUDE_ASM("asm/nonmatchings/text_002CA560", func_002CAA00);

INCLUDE_ASM("asm/nonmatchings/text_002CA560", func_002CAAB0);

INCLUDE_ASM("asm/nonmatchings/text_002CA560", func_002CAB88);

GE_PrimCache::GE_PrimCache(char arg1, short arg2, int arg3, int arg4, int arg5, void* arg6, int arg7) {
    this->m_unk0 = arg1;
    this->m_unk1 = 1;
    this->m_unk2 = arg2;
    this->m_unk4 = -1;
    this->m_unk8 = arg4;
    this->m_unkC = arg5;
    this->m_unk10 = arg7;
    this->m_unk14 = 0;
}

INCLUDE_ASM("asm/nonmatchings/text_002CA560", func_002CABF0);

INCLUDE_ASM("asm/nonmatchings/text_002CA560", __9GE_Device);

INCLUDE_ASM("asm/nonmatchings/text_002CA560", _$_9GE_Device);

INCLUDE_ASM("asm/nonmatchings/text_002CA560", func_002CAF00);

INCLUDE_ASM("asm/nonmatchings/text_002CA560", func_002CC1C0);

INCLUDE_ASM("asm/nonmatchings/text_002CA560", func_002CC250);

INCLUDE_ASM("asm/nonmatchings/text_002CA560", func_002CC2E0);

INCLUDE_ASM("asm/nonmatchings/text_002CA560", func_002CC338);

INCLUDE_ASM("asm/nonmatchings/text_002CA560", func_002CC380);

INCLUDE_ASM("asm/nonmatchings/text_002CA560", func_002CC3F0);

INCLUDE_ASM("asm/nonmatchings/text_002CA560", func_002CC420);

INCLUDE_ASM("asm/nonmatchings/text_002CA560", func_002CC478);

INCLUDE_ASM("asm/nonmatchings/text_002CA560", func_002CC4A0);

INCLUDE_ASM("asm/nonmatchings/text_002CA560", func_002CC4B0);

INCLUDE_ASM("asm/nonmatchings/text_002CA560", func_002CD060);

INCLUDE_ASM("asm/nonmatchings/text_002CA560", func_002CD0C0);

INCLUDE_ASM("asm/nonmatchings/text_002CA560", func_002CDD48);

INCLUDE_ASM("asm/nonmatchings/text_002CA560", func_002CE070);

INCLUDE_ASM("asm/nonmatchings/text_002CA560", func_002CE0F8);

INCLUDE_ASM("asm/nonmatchings/text_002CA560", func_002CE118);

INCLUDE_ASM("asm/nonmatchings/text_002CA560", func_002CE2B0);

INCLUDE_ASM("asm/nonmatchings/text_002CA560", func_002CE870);

INCLUDE_ASM("asm/nonmatchings/text_002CA560", func_002CE8F0);

INCLUDE_ASM("asm/nonmatchings/text_002CA560", func_002CEA98);

INCLUDE_ASM("asm/nonmatchings/text_002CA560", func_002CEB20);

INCLUDE_ASM("asm/nonmatchings/text_002CA560", func_002CEB78);

INCLUDE_ASM("asm/nonmatchings/text_002CA560", func_002CEC18);

INCLUDE_ASM("asm/nonmatchings/text_002CA560", func_002CF2D8);

INCLUDE_ASM("asm/nonmatchings/text_002CA560", func_002CFA18);

INCLUDE_ASM("asm/nonmatchings/text_002CA560", func_002CFF38);

INCLUDE_ASM("asm/nonmatchings/text_002CA560", func_002CFFE0);

INCLUDE_ASM("asm/nonmatchings/text_002CA560", func_002D0150);

INCLUDE_ASM("asm/nonmatchings/text_002CA560", func_002D0218);

INCLUDE_ASM("asm/nonmatchings/text_002CA560", func_002D0490); /* rct3 GE_Device::GetViewFrustrumClipVolume ? */

INCLUDE_ASM("asm/nonmatchings/text_002CA560", func_002D04E8);

INCLUDE_ASM("asm/nonmatchings/text_002CA560", func_002D0620);

INCLUDE_ASM("asm/nonmatchings/text_002CA560", func_002D0FE8);

INCLUDE_ASM("asm/nonmatchings/text_002CA560", func_002D10B8);

INCLUDE_ASM("asm/nonmatchings/text_002CA560", func_002D1240);

INCLUDE_ASM("asm/nonmatchings/text_002CA560", func_002D12A0);

INCLUDE_ASM("asm/nonmatchings/text_002CA560", func_002D12E8);

INCLUDE_ASM("asm/nonmatchings/text_002CA560", func_002D1318);

INCLUDE_ASM("asm/nonmatchings/text_002CA560", func_002D1350);

INCLUDE_ASM("asm/nonmatchings/text_002CA560", func_002D1388);

INCLUDE_ASM("asm/nonmatchings/text_002CA560", func_002D13C8);

INCLUDE_ASM("asm/nonmatchings/text_002CA560", func_002D1408);

INCLUDE_ASM("asm/nonmatchings/text_002CA560", func_002D1450);

INCLUDE_ASM("asm/nonmatchings/text_002CA560", func_002D14A0);

INCLUDE_ASM("asm/nonmatchings/text_002CA560", func_002D1540);

INCLUDE_ASM("asm/nonmatchings/text_002CA560", func_002D15F0);

INCLUDE_ASM("asm/nonmatchings/text_002CA560", func_002D16B0);

INCLUDE_ASM("asm/nonmatchings/text_002CA560", func_002D1780);

INCLUDE_ASM("asm/nonmatchings/text_002CA560", func_002D1860);

INCLUDE_ASM("asm/nonmatchings/text_002CA560", func_002D1948);

INCLUDE_ASM("asm/nonmatchings/text_002CA560", func_002D1A38);

INCLUDE_ASM("asm/nonmatchings/text_002CA560", func_002D1B10);

INCLUDE_RODATA("asm/nonmatchings/text_002CA560", _vt$9GE_Device);

INCLUDE_RODATA("asm/nonmatchings/text_002CA560", _vt$12GE_PrimCache);

INCLUDE_ASM("asm/nonmatchings/text_002CA560", func_002D1B50);

INCLUDE_ASM("asm/nonmatchings/text_002CA560", func_002D1B90);

int func_002D1BC0() {
    return 0;
}

int func_002D1BC8() {
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/text_002CA560", __tf12GE_PrimCache);

INCLUDE_ASM("asm/nonmatchings/text_002CA560", _$_12GE_PrimCache); /* GE_PrimCache::~GE_PrimCache */

INCLUDE_ASM("asm/nonmatchings/text_002CA560", func_002D1C40);

INCLUDE_ASM("asm/nonmatchings/text_002CA560", func_002D1C50);

INCLUDE_ASM("asm/nonmatchings/text_002CA560", func_002D1C58);

INCLUDE_ASM("asm/nonmatchings/text_002CA560", func_002D1C60);

INCLUDE_ASM("asm/nonmatchings/text_002CA560", func_002D1C68);

INCLUDE_ASM("asm/nonmatchings/text_002CA560", func_002D1C70);

int func_002D1C78() {
    return 0;
}

INCLUDE_ASM("asm/nonmatchings/text_002CA560", func_002D1C80);

INCLUDE_ASM("asm/nonmatchings/text_002CA560", func_002D1C88);

INCLUDE_ASM("asm/nonmatchings/text_002CA560", func_002D1C90);

INCLUDE_ASM("asm/nonmatchings/text_002CA560", __tf9GE_Device);

INCLUDE_ASM("asm/nonmatchings/text_002CA560", func_002D1CE8);

INCLUDE_ASM("asm/nonmatchings/text_002CA560", func_002D1CF0);

INCLUDE_ASM("asm/nonmatchings/text_002CA560", func_002D1CF8);

INCLUDE_ASM("asm/nonmatchings/text_002CA560", func_002D1D00);

INCLUDE_ASM("asm/nonmatchings/text_002CA560", func_002D1D08);

INCLUDE_ASM("asm/nonmatchings/text_002CA560", func_002D1D18);

INCLUDE_ASM("asm/nonmatchings/text_002CA560", func_002D1D20);

int func_002D1D58() {
    return 0;
}

void func_002D1D60() {
    return;
}

void func_002D1D68() {
    return;
}

INCLUDE_ASM("asm/nonmatchings/text_002CA560", func_002D1D70);

INCLUDE_ASM("asm/nonmatchings/text_002CA560", func_002D1E40);

INCLUDE_ASM("asm/nonmatchings/text_002CA560", func_002D1E48);

INCLUDE_ASM("asm/nonmatchings/text_002CA560", func_002D1E50);

INCLUDE_ASM("asm/nonmatchings/text_002CA560", func_002D1E70);

INCLUDE_ASM("asm/nonmatchings/text_002CA560", func_002D1E90);

INCLUDE_ASM("asm/nonmatchings/text_002CA560", func_002D1ED8);

INCLUDE_ASM("asm/nonmatchings/text_002CA560", func_002D1F00);

INCLUDE_ASM("asm/nonmatchings/text_002CA560", func_002D1F58);

INCLUDE_ASM("asm/nonmatchings/text_002CA560", func_002D1FC8);

INCLUDE_ASM("asm/nonmatchings/text_002CA560", func_002D2068);

INCLUDE_ASM("asm/nonmatchings/text_002CA560", func_002D2108);

INCLUDE_ASM("asm/nonmatchings/text_002CA560", func_002D2148);

INCLUDE_ASM("asm/nonmatchings/text_002CA560", func_002D21B8);

INCLUDE_ASM("asm/nonmatchings/text_002CA560", func_002D2228);

void func_002D2250() {
    return;
}

void func_002D2258() {
    return;
}

INCLUDE_ASM("asm/nonmatchings/text_002CA560", func_002D2260);

INCLUDE_ASM("asm/nonmatchings/text_002CA560", func_002D2280);

INCLUDE_ASM("asm/nonmatchings/text_002CA560", func_002D2288);

INCLUDE_ASM("asm/nonmatchings/text_002CA560", func_002D22B8);

INCLUDE_ASM("asm/nonmatchings/text_002CA560", func_002D22C0);

INCLUDE_ASM("asm/nonmatchings/text_002CA560", func_002D22C8);

INCLUDE_ASM("asm/nonmatchings/text_002CA560", func_002D22D0);

INCLUDE_ASM("asm/nonmatchings/text_002CA560", func_002D22D8);

INCLUDE_ASM("asm/nonmatchings/text_002CA560", func_002D22E0);

INCLUDE_ASM("asm/nonmatchings/text_002CA560", func_002D22F8);

INCLUDE_ASM("asm/nonmatchings/text_002CA560", func_002D2300);

INCLUDE_ASM("asm/nonmatchings/text_002CA560", func_002D2318);

void func_002D2328() {
    return;
}

INCLUDE_ASM("asm/nonmatchings/text_002CA560", func_002D2330); /* return -0x1 */

INCLUDE_ASM("asm/nonmatchings/text_002CA560", func_002D2338); /* return -0x1; */

INCLUDE_ASM("asm/nonmatchings/text_002CA560", func_002D2340);

INCLUDE_ASM("asm/nonmatchings/text_002CA560", func_002D2348);

float func_002D2350() {
    return -1.0f;
}

INCLUDE_ASM("asm/nonmatchings/text_002CA560", func_002D2360);

INCLUDE_ASM("asm/nonmatchings/text_002CA560", func_002D23A0);

INCLUDE_ASM("asm/nonmatchings/text_002CA560", func_002D23D0);

INCLUDE_ASM("asm/nonmatchings/text_002CA560", func_002D26E8);

INCLUDE_ASM("asm/nonmatchings/text_002CA560", __tf17GE_TransformState);

INCLUDE_ASM("asm/nonmatchings/text_002CA560", func_002D2D40);

INCLUDE_ASM("asm/nonmatchings/text_002CA560", func_002D2D60);
