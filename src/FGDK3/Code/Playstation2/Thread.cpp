#include "common.h"
#include "FGDK3/Playstation2/Thread.h"

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Thread", func_0026B710);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Thread", func_0026B808);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Thread", func_0026B900);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Thread", func_0026B948);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Thread", func_0026B988);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Thread", func_0026B9A8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Thread", func_0026B9D8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Thread", func_0026BA08);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Thread", func_0026BA30);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Thread", func_0026BA50);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Thread", func_0026BAD0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Thread", func_0026BAF8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Thread", func_0026BB00);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Thread", Create__Q29Semaphore14Implementationii);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Thread", func_0026BB88);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Thread", func_0026BC08);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Thread", func_0026BC68);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Thread", func_0026BC90);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Thread", func_0026BCB8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Thread", func_0026BCE8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Thread", func_0026BDA0);

// `-snas` Required
#ifdef NON_MATCHING
Status Thread_InternalInitialise() {
    // Status arg0;
    int temp_v0;
    int* temp_s1;

    InitThread();
    temp_s1 = new int;
    *temp_s1 = (int)Semaphore::Implementation::Create(1, 1);
    D_00451948 = temp_s1;
    return Status(0xFFFFFFFFU, "c:/coding/fgdk3/Code/Playstation2/Thread.cpp", 522);
}
#else
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Thread", Thread_InternalInitialise__Fv);
#endif

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Thread", func_0026BE90);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Thread", Thread_Initialise__Fv);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Thread", Thread_Finalise__Fv);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Thread", func_0026BF30);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Thread", func_0026BFE8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Thread", func_0026C028);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Thread", func_0026C058);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Thread", func_0026C098);

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Playstation2/Thread", D_0043B650);

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Playstation2/Thread", D_0043B680);

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Playstation2/Thread", D_0043B6D0);

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Playstation2/Thread", D_0043B700);

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Playstation2/Thread", D_0043B750);

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Playstation2/Thread", D_0043B770);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Thread", __tf23PS2ThreadImplementation);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Thread", func_0026C138);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Thread", func_0026C1A8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Thread", func_0026C1E8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Thread", func_0026C258);

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Playstation2/Thread", D_0043B7D0);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Thread", func_0026C2C8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Thread", func_0026C338);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Thread", func_0026C340);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Thread", func_0026C360);
