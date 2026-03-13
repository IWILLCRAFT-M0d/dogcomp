#ifndef SKIDOO_H
#define SKIDOO_H

#include "WheeledVehicle.h"


class Skidoo : public WheeledVehicle {
    public:
        Skidoo(ClassInfo*, SimObj_Universe*, int, short);
        virtual ~Skidoo();
        void func_00169478();
};


#endif
