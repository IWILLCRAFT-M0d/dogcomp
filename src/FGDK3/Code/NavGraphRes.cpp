#include "common.h"
#include "unk.h"
#include "mem.h"

#include "FGDK3/NavGraphRes.h"

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/NavGraphRes", D_0043C7A8); /* "NavGraph" */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/NavGraphRes", NavGraphRes_InternalInitialise__Fv);

void NavGraphRes_InternalFinalise() {
    return;
}

#ifdef NON_MATCHING

StdInit_ModuleDescription NavGraphRes_StdInit_Description = {
    0,
    &NavGraphRes_StdInit_UsedModules
};

void * const NavGraphRes_StdInit_UsedModules[] = {
    &NavGraphRes_InternalInitialise,
    &NavGraphRes_InternalFinalise,
    &ThrowCatch_Initialise,
    &ThrowCatch_Finalise,
    &RelRecv_Initialise,
    &RelRecv_Finalise,
    0,
    0,
};

Status NavGraphRes_Initialise() {
    return StdInit_InitialisationSequence(&NavGraphRes_StdInit_Description);
}
void NavGraphRes_Finalise() {
    StdInit_FinalisationSequence(&NavGraphRes_StdInit_Description);
}

#else
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/NavGraphRes", NavGraphRes_Initialise__Fv);
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/NavGraphRes", NavGraphRes_Finalise__Fv);
#endif

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/NavGraphRes", func_00279920); /* load? */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/NavGraphRes", func_002799E0); /* unload? */

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/NavGraphRes", _vt$18NavGraph_Resources);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/NavGraphRes", __tf18NavGraph_Resources);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/NavGraphRes", func_00279A50); /* return "NavGraph"; */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/NavGraphRes", func_00279A60);  /* return "NavGraph"; */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/NavGraphRes", __tft8Resource1Z8NavGraph);

// Beginning of NavGraph.cpp?
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/NavGraphRes", func_00279AC0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/NavGraphRes", func_00279C78);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/NavGraphRes", func_00279CF8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/NavGraphRes", func_00279D58);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/NavGraphRes", func_00279EA0); // "Too many points added - increase m_maxVerts"

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/NavGraphRes", func_0027A270);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/NavGraphRes", func_0027A2F8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/NavGraphRes", func_0027A348);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/NavGraphRes", func_0027A538);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/NavGraphRes", func_0027A550);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/NavGraphRes", func_0027A5A0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/NavGraphRes", func_0027A618);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/NavGraphRes", func_0027A670);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/NavGraphRes", func_0027A9C8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/NavGraphRes", func_0027AA50);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/NavGraphRes", func_0027AAF8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/NavGraphRes", func_0027AC78);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/NavGraphRes", func_0027AE88);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/NavGraphRes", func_0027AEF8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/NavGraphRes", func_0027B560);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/NavGraphRes", func_0027BA78);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/NavGraphRes", func_0027C098);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/NavGraphRes", func_0027C0B0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/NavGraphRes", func_0027C0C8);

void func_0027C4E8(void) {
    return;
}

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/NavGraphRes", func_0027C4F0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/NavGraphRes", func_0027C578);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/NavGraphRes", func_0027C5A8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/NavGraphRes", func_0027C640);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/NavGraphRes", func_0027C770);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/NavGraphRes", func_0027C7B0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/NavGraphRes", func_0027C7F8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/NavGraphRes", func_0027CA20);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/NavGraphRes", func_0027CB38);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/NavGraphRes", func_0027CD48);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/NavGraphRes", func_0027CDE0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/NavGraphRes", func_0027D0F8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/NavGraphRes", func_0027D130);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/NavGraphRes", func_0027D240);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/NavGraphRes", func_0027D4E0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/NavGraphRes", func_0027D4F8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/NavGraphRes", func_0027D500);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/NavGraphRes", func_0027DB30);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/NavGraphRes", func_0027DC70);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/NavGraphRes", func_0027DD60);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/NavGraphRes", func_0027DD80);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/NavGraphRes", func_0027DE18);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/NavGraphRes", func_0027DE78);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/NavGraphRes", func_0027DE98);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/NavGraphRes", func_0027DEB8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/NavGraphRes", func_0027DF50);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/NavGraphRes", func_0027DFB0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/NavGraphRes", func_0027DFD0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/NavGraphRes", func_0027E068);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/NavGraphRes", func_0027E0C8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/NavGraphRes", func_0027E160);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/NavGraphRes", func_0027E1C0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/NavGraphRes", func_0027E1E0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/NavGraphRes", func_0027E278);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/NavGraphRes", func_0027E2D8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/NavGraphRes", func_0027E2F8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/NavGraphRes", func_0027E478);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/NavGraphRes", func_0027E5C0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/NavGraphRes", func_0027E610);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/NavGraphRes", func_0027E808);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/NavGraphRes", func_0027E828);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/NavGraphRes", func_0027E940);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/NavGraphRes", func_0027E970);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/NavGraphRes", func_0027E998);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/NavGraphRes", func_0027E9A0); /* a0->unk4 = f12 */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/NavGraphRes", func_0027E9A8); /* return (float) a0->unk8 */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/NavGraphRes", func_0027E9B0);

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/NavGraphRes", _vt$28NavGraphCellFromPosSphereHit);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/NavGraphRes", __tf28NavGraphCellFromPosSphereHit);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/NavGraphRes", func_0027EA08);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/NavGraphRes", __tf19NavSphereHitPackage);
