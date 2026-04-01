#ifndef CAR_H
#define CAR_H

#include "WheeledVehicle.h"


class Car : public WheeledVehicle {
    public:
        static ClassInfo* s_classInfo;
        Car(ClassInfo*, SimObj_Universe*, int, short);
        virtual ~Car();
        virtual ClassInfo* func_00124ED0();
};


#endif
