#ifndef WHEELEDVEHICLE_H
#define WHEELEDVEHICLE_H

#include "HitTri.h"


class WheeledVehicle : public HitTri_Object {
    public:
        WheeledVehicle(int wheels);
        virtual ~WheeledVehicle();
};


#endif
