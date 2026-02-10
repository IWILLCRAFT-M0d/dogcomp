#ifndef RAT_H
#define RAT_H

#include "SmallThing.h"


class Rat : public SmallThing {
    public:
        Rat(void*, void*, int, short);
        virtual ~Rat();
};


#endif
