#ifndef CAR_H
#define CAR_H

#include "WheeledVehicle.h"


class Car : public WheeledVehicle {
    public:
        Car() : WheeledVehicle(4) {};
        virtual ~Car();
};


#endif
