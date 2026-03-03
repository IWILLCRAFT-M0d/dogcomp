#ifndef SOUNDCREATURE_H
#define SOUNDCREATURE_H


#include "SimObj.h"

class SoundCreature : public SimObject {
    public:
        int unk110;
        int unk114;
        int unk120;
        int unk124;
        int unk134;
        int unk138;
        int unk144;
        SoundCreature(ClassInfo*, SimObj_Universe*, int, short);
        virtual ~SoundCreature();
};


#endif
