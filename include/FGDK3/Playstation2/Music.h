#ifndef PS2MUSIC_H
#define PS2MUSIC_H

#include "FGDK3/Playstation2/Thread.h"

#include "FGDK3/Playstation2/IOPMem.h"
#include "FGDK3/Playstation2/sifManager.h"
#include "FGDK3/Playstation2/SoundManager.h"
//Music_ObjectService header goes here
#include "FGDK3/Playstation2/RunPath.h"
//StdMem header goes here

class Music_Performance {
    public:
        int unk0;
        int unk4;
        int unk8;
        int unkC;
        Music_Performance();
        virtual ~Music_Performance();
};

class Music_PS2Performance : public Music_Performance {
    public:
        int unk120;
        int unk124;
        int m_paused; // 0x128
        Music_PS2Performance();
        virtual ~Music_PS2Performance();
        void PauseNow();
        void ResumeNow();
};

class Music_Piece {
    public:
        int unk0;
        int unk4;
        int unk8;
        Music_Piece();
        virtual ~Music_Piece();
};
/*
class Music_PS2Piece : public Music_Piece {

};
*/

Status Music_InternalInitialise(void);
void Music_InternalFinalise(void);
Status Music_Initialise(void);
void Music_Finalise(void);

#ifdef __cplusplus
extern "C" {
#endif
char* func_00280660(int);
int func_00280708(char*);
#ifdef __cplusplus
}
#endif


#endif

