#ifndef SOUNDCREATURE_H
#define SOUNDCREATURE_H


#include "SimObj.h"

class SoundCreature : public SimObject {
    public:
        SoundCreature(void*, void*, int, short);
        virtual ~SoundCreature();
};


#endif
