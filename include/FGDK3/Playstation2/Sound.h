#ifndef PS2SOUND_H
#define PS2SOUND_H

#include "FGDK3/Playstation2/Thread.h"

#include "FGDK3/Playstation2/SoundManager.h"
#include "FGDK3/Playstation2/Music.h"

extern void * const Sound_StdInit_UsedModules[];

Status Sound_InternalInitialise(void);
void Sound_InternalFinalise(void);
Status Sound_Initialise(void);
void Sound_Finalise(void);

class SoundImplementation {
    public:
        void* unk0;
        int unk4;
        int unk8;
        int unkC;
        int unk10;
        int unk14;
        int unk18;
        int unk24;
        int unk28;
        SoundImplementation(void*);
        virtual ~SoundImplementation();
        void func_0026F8B8();
        void func_0026E498();
};

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif

#endif
