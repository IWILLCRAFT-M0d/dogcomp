#ifndef FISH_H
#define FISH_H

#include "WorldObj.h"


class Fish : public WorldObject {
    public:
        int unk5D0;
        int unk5D4;
        int unk5D8;

        float unk5F0;
        float unk5F4;
        int unk5F8;
        int unk5FC;
        int unk600;
        Fish(ClassInfo*, SimObj_Universe*, int, short);
        virtual ~Fish();
};


#endif
