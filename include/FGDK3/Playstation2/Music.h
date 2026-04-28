#ifndef PS2MUSIC_H
#define PS2MUSIC_H

#include "FGDK3/Playstation2/Thread.h"

#include "unk.h"


extern void * const Music_StdInit_UsedModules[];

class Music_Channel {
    public:
        char unk[4];
        void* unk4;
        Music_Channel();
        virtual ~Music_Channel();
};

class Music_Performance {
    public:
        int unk0;
        int unk4;
        int unk8;
        int unkC;

        float unk24;
        float unk28;

        float unk9C;

        float unkA0;

        Music_MenuRegisterable* unk48;
        Music_Performance();
        virtual ~Music_Performance();
};

class Music_PS2Performance : public Music_Performance/*, public Thread*/ {
    public:
        int unk120;
        int unk124;
        /* 0x128 */ bool m_paused;
        Music_PS2Performance();
        virtual ~Music_PS2Performance();
        virtual void PauseNow();
        virtual void ResumeNow();
};

class Music_PS2Track : public Music_Track {

};


class Music_Piece {
    public:
        int unk0;
        int unk4;
        int unk8;
        Music_Piece();
        virtual ~Music_Piece();
};

class Music_PS2Piece : public Music_Piece {
    public:
        char* unk58; // name?
        /* 0x60 */ u_int headerinfo; // MIH address
        Music_PS2Piece(char*);
};


Status Music_InternalInitialise();
void Music_InternalFinalise();
Status Music_Initialise();
void Music_Finalise();

#ifdef __cplusplus
extern "C" {
#endif
char* func_00280660(int);
int func_00280708(char*);
#ifdef __cplusplus
}
#endif


#endif

