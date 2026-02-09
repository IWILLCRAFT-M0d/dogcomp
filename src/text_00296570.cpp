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

// split
#ifdef NON_MATCHING

Status IOPMem_InternalInitialise(void) {
    return Status(0xFFFFFFFF, "c:/coding/fgdk3/Code/Playstation2/IOPMem.cpp", 47);
}

#else
INCLUDE_ASM("asm/nonmatchings/text_00296570", IOPMem_InternalInitialise__Fv);
#endif

void IOPMem_InternalFinalise(void) {
    return;
}

#ifdef NON_MATCHING

StdInit_ModuleDescription IOPMem_StdInit_Description = {
    0,
    &IOPMem_StdInit_UsedModules
};

void * const IOPMem_StdInit_UsedModules[] = {
    &IOPMem_InternalInitialise,
    &IOPMem_InternalFinalise,
    &Semaphore_Initialise,
    &Semaphore_Finalise,
    0,
    0,
};

Status IOPMem_Initialise(void) {
        return StdInit_InitialisationSequence(&IOPMem_StdInit_Description);
}

void IOPMem_Finalise(void) {
    StdInit_FinalisationSequence(&IOPMem_StdInit_Description);
}

#else
INCLUDE_ASM("asm/nonmatchings/text_00296570", IOPMem_Initialise__Fv);
INCLUDE_ASM("asm/nonmatchings/text_00296570", IOPMem_Finalise__Fv);
#endif

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_00296710);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_002967C8);
/*
void func_002967C8(void* arg0, int arg1) {
    sceSifFreeIopHeap(arg0);
    IOPMem_Finalise();
    if (arg1 & 1) {
        delete(arg0);
    }
}
*/

INCLUDE_RODATA("asm/nonmatchings/text_00296570", D_0043EC70); /* "c:/coding/fgdk3/Code/Playstation2/IOPMem.cpp" */

// sym name taken from rct3_mac

void InterfaceError(char* file, int line) {
    DDE_FatalError("Failed to get interface in %s (line %d).", file, line);
}

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_00296840);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_00296878);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_00296958); // classinfo?

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_00296990);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_00296AF0);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_00296CB8);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_00296D40); /* rct3 InterfaceTag::InterfaceTag */

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_00296FB0);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_002970C0);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_00297158);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_002971D0);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_002971F8);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_00297228);

INCLUDE_RODATA("asm/nonmatchings/text_00296570", D_0043ED70);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_00297238);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_00297378);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_002973C0);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_00297400);

INCLUDE_RODATA("asm/nonmatchings/text_00296570", D_0043EDC0); /* "13GenericObject" */

INCLUDE_ASM("asm/nonmatchings/text_00296570", __tf9ClassInfo);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_002974A0);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_002974A8);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_002974B0);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_002974E0);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_002974E8);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_00297520);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_00297558);

// split
INCLUDE_ASM("asm/nonmatchings/text_00296570", func_00297578);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_00297608);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_00297658);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_00297808);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_00297950);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_002979B0);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_00297A40);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_00297AC8);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_00297B88);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_00297BD8);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_00297D60);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_00297DD0);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_00297F88);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_00298688);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_002987C0);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_00298D50);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_00299190);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_002991C8);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_002991F8);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_00299250);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_00299258);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_00299270);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_00299278);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_002992D0);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_00299338);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_002993A0);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_00299448);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_00299450);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_00299600); /* ~GE_TextureTarget */

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_00299690);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_002996A8);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_002996C0);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_00299740);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_00299AE0);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_0029A008);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_0029A0C8);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_0029A188);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_0029A198);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_0029A600);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_0029A610); /* return 0; */

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_0029A618); /* return 0; */

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_0029A620); /* return; */

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_0029A628); /* return; */

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_0029A630);

INCLUDE_RODATA("asm/nonmatchings/text_00296570", _vt$16GE_TextureTarget);

INCLUDE_ASM("asm/nonmatchings/text_00296570", __tf16GE_TextureTarget);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_0029A700);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_0029A708);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_0029A738);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_0029A740);

INCLUDE_RODATA("asm/nonmatchings/text_00296570", D_0043EF70);

INCLUDE_ASM("asm/nonmatchings/text_00296570", __tf14GE_TexturePage);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_0029A798);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_0029A7F8);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_0029A8E8);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_0029A928);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_0029A968);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_0029AA28); /* return; */

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_0029AA30); /* return; */

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_0029AA38);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_0029AA48);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_0029AA58);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_0029B320);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_0029BAA8);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_0029BF60);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_0029C340);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_0029CC50);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_0029D728);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_0029FEA0);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_002A03E0);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_002A07C8);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_002A09C0);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_002A09E0);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_002A0AC0);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_002A0C18);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_002A0C58);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_002A0CB0);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_002A0D80);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_002A0D88);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_002A0D90);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_002A0DD0);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_002A0E10);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_002A1218);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_002A1500);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_002A1520);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_002A1678);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_002A1688);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_002A17E0);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_002A1938);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_002A1990);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_002A19A0);

INCLUDE_ASM("asm/nonmatchings/text_00296570", __tf9GE_Target);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_002A1A28); /* ~GE_Target */

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_002A1A58); /* return 0; */

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_002A1A60); /* return 0; */

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_002A1A68); /* return; */

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_002A1A70); /* return; */

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_002A1A78);

INCLUDE_ASM("asm/nonmatchings/text_00296570", __tf12GE_PS2Target);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_002A1B58);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_002A1B68);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_002A1B70); /* return 1.0f; */

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_002A1B80); /* return 1; */

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_002A1B88); /* return 0; */

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_002A1B90); /* return; */

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_002A1B98); /* asm("break 0x1"); */

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_002A1BA8); /* asm("break 0x1"); */

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_002A1BB8); /* asm("break 0x1"); */

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_002A1BC8); /* asm("break 0x1"); */

INCLUDE_RODATA("asm/nonmatchings/text_00296570", _vt$19GE_PS2DisplayTarget);

INCLUDE_RODATA("asm/nonmatchings/text_00296570", _vt$12GE_PS2Target);

INCLUDE_RODATA("asm/nonmatchings/text_00296570", _vt$9GE_Target);

INCLUDE_RODATA("asm/nonmatchings/text_00296570", D_0043F1F0); /* "9GE_Target" */

INCLUDE_RODATA("asm/nonmatchings/text_00296570", D_0043F200); /* "12GE_PS2Target" */

INCLUDE_ASM("asm/nonmatchings/text_00296570", __tf19GE_PS2DisplayTarget);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_002A1C70);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_002A1CB8);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_002A1D00);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_002A1D18);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_002A1D28);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_002A1D30);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_002A1D48);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_002A1D68);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_002A1D88);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_002A1E60);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_002A1E98);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_002A1F40);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_002A1F88);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_002A22A8);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_002A2330);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_002A23B8);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_002A2758);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_002A2790);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_002A2CD0);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_002A2D30);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_002A2DB0);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_002A2E60);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_002A2E90);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_002A2F10);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_002A2FD8);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_002A3070);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_002A3078);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_002A31C8);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_002A3AD0);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_002A3C00);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_002A3C78);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_002A4218);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_002A4230);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_002A44C8);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_002A44D8);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_002A46C0);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_002A46E0);

INCLUDE_RODATA("asm/nonmatchings/text_00296570", D_0043F250);

INCLUDE_RODATA("asm/nonmatchings/text_00296570", _vt$10ClipVolume);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_002A4838);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_002A4878);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_002A48A8); /* return 0; */

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_002A48B0); /* return 0; */

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_002A48B8);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_002A4928);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_002A4960);

INCLUDE_ASM("asm/nonmatchings/text_00296570", func_002A4980);
