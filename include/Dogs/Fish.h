#ifndef FISH_H
#define FISH_H

#include "WorldObj.h"


class Fish : public WorldObject {
    public:
        Fish(void*, void*, int, short);
        virtual ~Fish();
};


#endif
