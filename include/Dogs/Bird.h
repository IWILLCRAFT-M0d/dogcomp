#ifndef BIRD_H
#define BIRD_H

#include "WorldObj.h"


class Bird : public WorldObject {
    public:
        Bird(void*, void*, int, short);
        virtual ~Bird();
};


#endif
