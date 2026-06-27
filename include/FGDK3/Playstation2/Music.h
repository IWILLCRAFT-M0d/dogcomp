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
        // virtual ? func_002887C0
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
        // virtual ? = 0
        // virtual ? func_00281BA8
        // virtual ? = 0
        // virtual ? = 0
        // virtual ? = 0
        // virtual ? = 0
        // virtual ? = 0

};

class Music_PS2Performance : public Music_Performance/*, public Thread*/ {
    public:
        int unk120;
        int unk124;
        /* 0x128 */ bool m_paused;
        Music_PS2Performance();
        virtual ~Music_PS2Performance();
        // virtual ? FUN_00284af0

        // virtual ? FUN_002856f0

        // virtual ? FUN_00284b60

        // virtual ?  FUN_00284c28
        // virtual ? FUN_00284ce0

        virtual void PauseNow();
        virtual void ResumeNow();
};

class Music_PS2Track : public Music_Track {
    public:
        virtual ~Music_PS2Track();
        // virtual ? func_002826B0
};


class Music_Piece {
    public:
        int unk0;
        int unk4;
        int unk8;
        Music_Piece();
        virtual ~Music_Piece();
        // virtual ? = 0
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

