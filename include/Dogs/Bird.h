#ifndef BIRD_H
#define BIRD_H

#include "WorldObj.h"


class Bird : public WorldObject {
    public:
        Bird(ClassInfo*, SimObj_Universe*, int, short);
        virtual ~Bird();
};


#endif
