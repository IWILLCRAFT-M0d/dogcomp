#ifndef MOTORBIKE_H
#define MOTORBIKE_H

#include "WheeledVehicle.h"


class Motorbike : public WheeledVehicle {
    public:
        Motorbike(void*, void*, int, short);
        virtual ~Motorbike();
};


#endif
