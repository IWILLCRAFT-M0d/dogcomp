#include "common.h"

#include "FGDK3/Playstation2/sifManager.h"
#include <libcdvd.h>
#include <sifdev.h>
#include <stdio.h>

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/sifManager", func_0026FBA0);
//sceGsResetPath();
//sceSifInitRpc(0);
//sceCdInit(SCECdINIT);
//sceCdMmode(SCECdDVD);

//sceGsResetPath();


#ifdef NON_MATCHING
Status sifManager_InternalInitialise() {
    //if (D_00451A84 == 0) {
    //D_00451A84 = 1;
    //0026fba0
    sceCdInit(SCECdINIT);
    sceCdMmode(SCECdDVD);
    sceFsReset();
    //}
    sceSifInitIopHeap();

    // if ( ) {
    printf("Fatal error: could not find IRXFILES.DAT.\n");

    //}
    // else {
    // memalign
    // sceRead
    // sceClose

    // sceSifAllocIopHeap
}
#else
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/sifManager", sifManager_InternalInitialise__Fv);
#endif

void sifManager_InternalFinalise() {
    return;
}

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/sifManager", Semaphore_Initialise__Fv);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/sifManager", Semaphore_Finalise__Fv);
