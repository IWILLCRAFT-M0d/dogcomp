#ifndef PS2THREAD_H
#define PS2THREAD_H


#ifdef __cplusplus
extern "C" {
#endif
    void InitThread(); // InitThread is not found in 3.0 SDK header perhaps

    int foo_(char*a);
#ifdef __cplusplus
}
#endif

#define STATUS_TRACE(_unk0) Status(_unk0, __FILE__, __LINE__)
#define STATUS_TRACE_2(_unk0) Status(_unk0, "c:/coding/fgdk3/Code/Playstation2/Thread.cpp", 522)

extern void * const Thread_StdInit_UsedModules[];

extern int* D_00451948;

class Status {
    public:
    /* sdata 0x004519F4 */ static char *m_file;
    /* sdata 0x004519F8 */ static int m_line;
    /* bss   0x0049F3B8 */ static char m_errorString[128];

    /* 0x00 */ unsigned int m_unk0;

    Status();
    Status(unsigned int i, char* file, int line) {
        m_unk0 = i;
        m_file = file;
        m_line = line;
        m_errorString[0] = '\0';
        if (0) {
            foo_("");
            foo_("%s");
        }
    }
    virtual ~Status();
    virtual int PrepareReport(char*, int);
};

struct StdInit_ModuleDescription {
    int unk0;
    const void *unk4;
};

extern Status StdInit_InitialisationSequence(StdInit_ModuleDescription*);
extern void StdInit_FinalisationSequence(StdInit_ModuleDescription*);

class StdInit_ClientBase {
public:
    int m_unk0;

    void CheckError(Status);
};

Status Semaphore_Initialise();
void Semaphore_Finalise();


class Thread {
    public:
    class Implementation {
        public:
        /* 0x00 */ Thread *m_thread;
        /* 0x04 */ /* vtbl pointer */

        static Thread::Implementation *Create(Thread*, int);

        /* vtbl[0] */ /* type_info function */
        /* vtbl[1] */ virtual ~Implementation() {}
        /* vtbl[2] */ virtual int Go() = 0;
        /* vtbl[3] */ virtual void Suspend() = 0;
        /* vtbl[4] */ virtual void Resume() = 0;
        /* vtbl[5] */ virtual int GetPriority() = 0;
        /* vtbl[6] */ virtual void SetPriority(int) = 0;
        /* vtbl[7] */ virtual void Exit(int) = 0;
        /* vtbl[8] */ virtual int GetExitCode() = 0;
    };

    /* 0x00 */ Implementation *impl;

    Thread() {
        impl = Thread::Implementation::Create(this, 0);
    }

    virtual ~Thread() {
        delete impl;
    }

    virtual int EntryPoint() = 0;
    static void SwitchToNext();

    int Go() {
        return impl->Go();
    }
    void Suspend() {
        impl->Suspend();
    }
    void Resume() {
        impl->Resume();
    }
    int GetPriority() {
        return impl->GetPriority();
    }
    void SetPriority(int prio) {
        impl->SetPriority(prio);
    }
    void Exit(int code) {
        impl->Exit(code);
    }
    int GetExitCode() {
        return impl->GetExitCode();
    }
};

class Semaphore {
    public:
    class Implementation {
        public:
        /* 0x00 */ /* vtbl pointer */
        static Implementation *Create(int init, int max);

        /* vtbl[0] */ /* type_info function */
        /* vtbl[1] */ virtual ~Implementation() {}
        /* vtbl[2] */ virtual void Signal() = 0;
        /* vtbl[3] */ virtual void Wait() = 0;
        /* vtbl[4] */ virtual int Poll() = 0;
    };

    /* 0x00 */ Implementation *impl;

    Semaphore(int init, int max) {
        impl = Semaphore::Implementation::Create(init, max);
    }

    Semaphore() {
        impl = Semaphore::Implementation::Create(1, 1);
    }

    ~Semaphore() {
        delete impl;
    }
    void Signal() {
        impl->Signal();
    }
    void Wait() {
        impl->Wait();
    }
    int Poll() {
        return impl->Poll();
    }
};

class PS2ThreadImplementation : /* 0x00 */ public Thread::Implementation {
    public:
    /* sbss  0x00453864 */ static PS2ThreadImplementation *m_topThread;
    /* sdata 0x00451930 */ static Semaphore m_threadMutex;

    /* 0x08 */ PS2ThreadImplementation *m_next;
    /* 0x0C */ int m_threadId;
    /* 0x10 */ void *m_stack;
    /* 0x14 */ int m_suspendCnt;
    /* 0x18 */ int m_exitCode;

    PS2ThreadImplementation();
    PS2ThreadImplementation(Thread*, int);

    static void EntryPoint(PS2ThreadImplementation*);
    static PS2ThreadImplementation *GetCurrent();

    /* vtbl[0] */ /* type_info function */
    /* vtbl[1] */ virtual ~PS2ThreadImplementation();
    /* vtbl[2] */ virtual int Go();
    /* vtbl[3] */ virtual void Suspend();
    /* vtbl[4] */ virtual void Resume();
    /* vtbl[5] */ virtual int GetPriority();
    /* vtbl[6] */ virtual void SetPriority(int);
    /* vtbl[7] */ virtual void Exit(int);
    /* vtbl[8] */ virtual int GetExitCode();
};

class PS2SemaphoreImplementation : /* 0x00 */ public Semaphore::Implementation {
    /* size:0x10 */

    public:
    /* 0x04 */ int m_initialized;
    /* 0x08 */ StdInit_ClientBase m_unk8;
    /* 0x0C */ int m_semaId;

    PS2SemaphoreImplementation(int init, int max);

    /* vtbl[0] */ /* type_info function */
    /* vtbl[1] */ virtual ~PS2SemaphoreImplementation();
    /* vtbl[2] */ virtual void Signal();
    /* vtbl[3] */ virtual void Wait();
    /* vtbl[4] */ virtual int Poll();
};

Status Thread_InternalInitialise();
void Thread_InternalFinalise();
Status Thread_Initialise();
void Thread_Finalise();


#endif
