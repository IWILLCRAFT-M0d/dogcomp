#ifndef WATERSPLASH_H
#define WATERSPLASH_H

#include "SimObj.h"

class StaticWaterRipple : public SimObject {
    public:
        StaticWaterRipple(ClassInfo*, SimObj_Universe*, int, short);
        virtual ~StaticWaterRipple();
};

#endif
