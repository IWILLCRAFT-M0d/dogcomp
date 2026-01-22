#include "common.h"
#include "FGDK3/Playstation2/Thread.h"
#include "FGDK3/Playstation2/sifManager.h"

#include <ee/eekernel.h>
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Thread", __23PS2ThreadImplementationP6Threadi);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Thread", _$_23PS2ThreadImplementation);


Thread::Implementation *Thread::Implementation::Create(Thread* th, int stack_size) {
    return new PS2ThreadImplementation(th, stack_size);
}

void PS2ThreadImplementation::EntryPoint(PS2ThreadImplementation* impl) {
    impl->m_exitCode = impl->m_thread->EntryPoint();
}

int PS2ThreadImplementation::Go() {
    return StartThread(this->m_threadId, this);
}

void PS2ThreadImplementation::Suspend() {
    if (this->m_suspendCnt++ == 0) {
        SuspendThread(this->m_threadId);
    }
}

void PS2ThreadImplementation::Resume() {
    if (this->m_suspendCnt-- == 1) {
        ResumeThread(this->m_threadId);
    }
}

int PS2ThreadImplementation::GetPriority() {
    ThreadParam param;

    ReferThreadStatus(this->m_threadId, &param);

    return param.currentPriority;
}

void PS2ThreadImplementation::SetPriority(int prio) {
    ChangeThreadPriority(this->m_threadId, prio);
}


#ifdef NOT_MATCHING
PS2ThreadImplementation *PS2ThreadImplementation::GetCurrent() {
    m_threadMutex.Wait();

    int id = GetThreadId();
    PS2ThreadImplementation *p = m_topThread;
    for (; p != 0; p = p->m_next) {
        if (p->m_threadId == id) {
            break;
        }
    }

    m_threadMutex.Signal();
    return p;
}
#else
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Thread", GetCurrent__23PS2ThreadImplementation);
#endif

void PS2ThreadImplementation::Exit(int code) {
    this->m_exitCode = code;
    TerminateThread(this->m_threadId);
}

int PS2ThreadImplementation::GetExitCode() {
    return this->m_exitCode;
}

void Thread::SwitchToNext() {
    PS2ThreadImplementation *s;

    s = PS2ThreadImplementation::GetCurrent();
    RotateThreadReadyQueue(s->m_thread->GetPriority());
}


INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Thread", Create__Q29Semaphore14Implementationii);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Thread", __26PS2SemaphoreImplementationii);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Thread", _$_26PS2SemaphoreImplementation);

void PS2SemaphoreImplementation::Signal() {
    if (this->m_initialized) {
        SignalSema(this->m_semaId);
    }
}

void PS2SemaphoreImplementation::Wait() {
    if (this->m_initialized) {
        WaitSema(this->m_semaId);
    }
}

int PS2SemaphoreImplementation::Poll() {
    if (this->m_initialized) {
        return PollSema(this->m_semaId) != -1;
    }

    return 1;
}

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

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Thread", Thread_InternalFinalise__Fv);

#ifdef NON_MATCHING
StdInit_ModuleDescription Thread_StdInit_Description = {
    0,
    &Thread_StdInit_UsedModules
};

void * const Thread_StdInit_UsedModules[] = {
    &Thread_InternalInitialise,
    &Thread_InternalFinalise,
    0,
    0,
};

Status Thread_Initialise(void) {
    return StdInit_InitialisationSequence(&Thread_StdInit_Description);
}

void Thread_Finalise(void) {
    StdInit_FinalisationSequence(&Thread_StdInit_Description);
}
#else
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Thread", Thread_Initialise__Fv);
INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Thread", Thread_Finalise__Fv);
#endif

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Thread", func_0026BF30);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Thread", __tfQ26Thread14Implementation);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Thread", _$_Q26Thread14Implementation);

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

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Thread", func_0026C1A8); /* __tf6Thread */

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Thread", func_0026C1E8);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Thread", func_0026C258);

INCLUDE_RODATA("asm/nonmatchings/FGDK3/Code/Playstation2/Thread", _vt$13DefaultThread);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Thread", __tf13DefaultThread);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Thread", EntryPoint__13DefaultThread);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Thread", func_0026C340);

INCLUDE_ASM("asm/nonmatchings/FGDK3/Code/Playstation2/Thread", func_0026C360);
