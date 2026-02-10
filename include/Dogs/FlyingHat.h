#ifndef FLYINGHAT_H
#define FLYINGHAT_H

#include "SmallThing.h"


class FlyingHat : public SmallThing {
    public:
        FlyingHat(void*, void*, int, short);
        virtual ~FlyingHat();
};


#endif
