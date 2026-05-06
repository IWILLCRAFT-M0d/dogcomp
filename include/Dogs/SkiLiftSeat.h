#ifndef SKILIFTSEAT_H
#define SKILIFTSEAT_H

#include "WorldObj.h"

class SkiLiftSeat : public WorldObject {
    public:
        int unk5C4;

        float unk5F0;
        float unk5F4;

        SkiLiftSeat(ClassInfo*, SimObj_Universe*, int, short);
        virtual ~SkiLiftSeat();

};

#endif
