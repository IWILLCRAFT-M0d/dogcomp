#ifndef FLYINGHAT_H
#define FLYINGHAT_H

#include "SmallThing.h"


class FlyingHat : public SmallThing {
    public:
        int unk700;
        int unk704;
        FlyingHat(ClassInfo*, SimObj_Universe*, int, short);
        virtual ~FlyingHat();
};


#endif
