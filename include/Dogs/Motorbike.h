#ifndef MOTORBIKE_H
#define MOTORBIKE_H

#include "WheeledVehicle.h"


class Motorbike : public WheeledVehicle {
    public:
        Motorbike() : WheeledVehicle(2) {};
        virtual ~Motorbike();
};


#endif
