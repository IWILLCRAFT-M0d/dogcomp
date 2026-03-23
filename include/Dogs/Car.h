#ifndef CAR_H
#define CAR_H

#include "WheeledVehicle.h"


class Car : public WheeledVehicle {
    public:
        Car(ClassInfo*, SimObj_Universe*, int, short);
        virtual ~Car();
        virtual ClassInfo* func_00124ED0();
};


#endif
