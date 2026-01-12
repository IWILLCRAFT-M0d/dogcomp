#ifndef THREAD_H
#define THREAD_H


#ifdef __cplusplus
extern "C" {
#endif
    void InitThread(); // InitThread is not found in 3.0 SDK header perhaps

    int foo_(char*a);
#ifdef __cplusplus
}
#endif

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


Status Thread_InternalInitialise(void);



#endif
