#ifndef SMALLTHING_H
#define SMALLTHING_H

#include "HitTri.h"


class SmallThing : public HitTri_Object {
    public:
        SmallThing(void*, void*, int, short);
        virtual ~SmallThing();
};


#endif
