#ifndef SKIDOO_H
#define SKIDOO_H

#include "WheeledVehicle.h"


class Skidoo : public WheeledVehicle {
    public:
        Skidoo(ClassInfo*, void*, int, short);
        virtual ~Skidoo();
};


#endif
