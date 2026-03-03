#ifndef FOOTPRINT_H
#define FOOTPRINT_H

#include "WorldObj.h"


class FootPrints : public WorldObject {
    public:
        FootPrints(ClassInfo*, SimObj_Universe*, int, short);
        virtual ~FootPrints();
};


#endif
