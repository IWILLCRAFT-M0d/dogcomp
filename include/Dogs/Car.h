#ifndef CAR_H
#define CAR_H

#include "WheeledVehicle.h"


class Car : public WheeledVehicle {
    public:
        Car(void*, void*, int, short);
        virtual ~Car();
};


#endif
