#ifndef SKILIFTSEAT_H
#define SKILIFTSEAT_H

#include "WorldObj.h"

class SkiLiftSeat : public WorldObject {
    public:
        SkiLiftSeat(ClassInfo*, SimObj_Universe*, int, short);
        virtual ~SkiLiftSeat();

};

#endif
