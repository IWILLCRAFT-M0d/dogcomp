#ifndef SNOWBALL_H
#define SNOWBALL_H

#include "SphereObj.h"


class Snowball : public SphereObj {
    public:
        /* 0x600 */ bool m_canRoll;
        Snowball(ClassInfo*, SimObj_Universe*, int, short);
        virtual ~Snowball();
        // virtual ClassInfo* func_001731D0();
        // virtual base function (00168410)
        // virtual base function (00185680)
        // virtual base function (001857E8)
        // virtual ? func_00172C08
        // virtual base function (00182AD0)
        // virtual base function (00182A70)
        // virtual base function (00168688)
        // virtual base function (00168778)
        // virtual base function (00188460)
        // virtual base function (00188448)
        //~~~~~
        virtual void func_00172BE8();
        //~~~~~
        // virtual base function (001870D8)
        // virtual base function (001884E8)
        // end of vtable @ 003C7328
};


#endif

