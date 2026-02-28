#ifndef FOOTPRINT_H
#define FOOTPRINT_H

#include "WorldObj.h"


class FootPrints : public WorldObject {
    public:
        FootPrints(ClassInfo*, void*, int, short);
        virtual ~FootPrints();
};


#endif
