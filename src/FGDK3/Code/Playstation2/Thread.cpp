#include "common.h"
#include "FGDK3/Playstation2/Thread.h"
#include "FGDK3/Playstation2/sifManager.h"

#include <ee/eekernel.h>
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

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Thread", __26PS2SemaphoreImplementationii);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Thread", _$_26PS2SemaphoreImplementation);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Thread", Signal__26PS2SemaphoreImplementation);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Thread", Wait__26PS2SemaphoreImplementation);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Thread", Poll__26PS2SemaphoreImplementation);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Thread", __malloc_lock);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Thread", __malloc_unlock);

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

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Thread", __tfQ26Thread14Implementation);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Thread", func_0026C028);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Thread", __tfQ29Semaphore14Implementation);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Thread", _$_Q29Semaphore14Implementation);

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Playstation2/Thread", _vt$26PS2SemaphoreImplementation);

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Playstation2/Thread", _vt$23PS2ThreadImplementation);

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Playstation2/Thread", _vt$Q29Semaphore14Implementation);

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Playstation2/Thread", _vt$Q26Thread14Implementation);

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Playstation2/Thread", D_0043B750); /* "Q26Thread14Implementation" */

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Playstation2/Thread", D_0043B770); /* "Q29Semaphore14Implementation" */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Thread", __tf23PS2ThreadImplementation);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Thread", __tf26PS2SemaphoreImplementation);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Thread", func_0026C1A8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Thread", func_0026C1E8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Thread", func_0026C258);

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Playstation2/Thread", _vt$13DefaultThread);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Thread", __tf13DefaultThread);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Thread", EntryPoint__13DefaultThread);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Thread", func_0026C340);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Thread", func_0026C360);
