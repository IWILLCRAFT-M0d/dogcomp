#ifndef THREAD_H
#define THREAD_H


#ifdef __cplusplus
extern "C" {
#endif
    void InitThread();
#ifdef __cplusplus
}
#endif

extern int* D_00451948;

class Status {
    public:
    static char *m_file;
    static int m_line;
    static char m_errorString[128];
    unsigned int m_unk0;

    Status();
    Status(unsigned int i, char* file, int line) {
        m_unk0 = i;
        m_file = file;
        m_line = line;
        m_errorString[0] = '\0';
    }
    virtual int foo();
};

struct Semaphore {
    struct Implementation {
        virtual ~Implementation() {}
        static Implementation *Create(int init, int max);
        virtual void Signal() = 0;
        virtual void Wait() = 0;
        virtual int Poll() = 0;
    };
    /* 0x00 */ Implementation *impl;
    ~Semaphore();
};

#ifdef __cplusplus
extern "C" {
#endif
    Status Thread_InternalInitialise();
#ifdef __cplusplus
}
#endif


#endif
