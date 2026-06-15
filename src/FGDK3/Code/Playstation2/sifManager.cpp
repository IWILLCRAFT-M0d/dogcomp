#include "common.h"
#include "data_unk.h"
#include "file_unk.h"
#include "FGDK3/Playstation2/sifManager.h"
#include <libcdvd.h>
#include <sifdev.h>
#include <sifrpc.h>
#include <stdio.h>
#include <malloc.h>

#ifdef NON_MATCHING
//https://decomp.me/scratch/APAJC
extern void func_0031FC50(void); // remove when function is actually defined
void func_0026FBA0(void) {

    int temp_17;
    int temp_2;

    func_0031FC50();
    sceSifInitRpc(0);
    sceCdInit(SCECdINIT);
    sceCdMmode(SCECdDVD);
loop_2:
    string_ascii* file = func_00273000("IOPRP270.IMG");
    file->EnsureSpaceFor(file->m_cont->m_len + 1);
    file->m_cont->m_data[file->m_cont->m_len] = 0;
    temp_17 = sceSifRebootIop(file->m_cont->m_data);
    temp_2 = file->m_cont->m_unk0 - 1;
    file->m_cont->m_unk0 = temp_2;
    if ((temp_2 == 0) && (file->m_cont != NULL)) {
       delete file->m_cont->m_data;
       delete &file->m_cont;
    }
    if (temp_17 == 0) {
        printf("Can't find 'IOPRP255.IMG'\n");
        goto loop_2;
    }
    do {

    } while (sceSifSyncIop() == 0);
    func_0031FC50();
    sceSifInitRpc(0);
}

#else
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/sifManager", func_0026FBA0);
#endif

#ifdef NON_MATCHING
Status sifManager_InternalInitialise() {
    int fd;
    void* buf;
    //if (D_00451A84 == 0) {
    //D_00451A84 = 1;
    func_0026FBA0();
    sceCdInit(SCECdINIT);
    sceCdMmode(SCECdDVD);
    sceFsReset();
    //}
    sceSifInitIopHeap();
    string_ascii* file = func_00273000("IRXFILES.DAT");
    file->EnsureSpaceFor(file->m_cont->m_len + 1);
    fd = sceOpen(file->m_cont->m_data, 1);


    int temp = sceLseek(fd, 0, SCE_SEEK_END);
    sceLseek(fd, 0, SCE_SEEK_SET);
    if (temp < 1) {
    printf("Fatal error: could not find IRXFILES.DAT.\n");
    //
    }
    else {
    buf = memalign(0x40, temp);
    sceRead(fd, buf, temp);
    sceClose(fd);

    // sceSifAllocIopHeap
    }
}
#else
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/sifManager", sifManager_InternalInitialise__Fv);
#endif

void sifManager_InternalFinalise() {
    return;
}

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/sifManager", Semaphore_Initialise__Fv);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/sifManager", Semaphore_Finalise__Fv);
