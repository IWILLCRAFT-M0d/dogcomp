#ifndef MOTORBIKE_H
#define MOTORBIKE_H

#include "WheeledVehicle.h"


class Motorbike : public WheeledVehicle {
    public:
        Motorbike(ClassInfo*, void*, int, short);
        virtual ~Motorbike();
};


#endif
