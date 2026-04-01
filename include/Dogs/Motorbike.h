#ifndef MOTORBIKE_H
#define MOTORBIKE_H

#include "WheeledVehicle.h"


class Motorbike : public WheeledVehicle {
    public:
        static ClassInfo* s_classInfo;
        Motorbike(ClassInfo*, SimObj_Universe*, int, short);
        virtual ~Motorbike();
        virtual ClassInfo* func_00144BA0();
};


#endif
