#ifndef ZONE_H
#define ZONE_H


#include "SimObj.h"

class Zone : public SimObject {
    public:
        int unk114;
        Zone(ClassInfo*, SimObj_Universe*, int, short);
        virtual ~Zone();
        virtual ClassInfo* func_0018A098();
};

class ZoneRadius : public Zone {
    public:
        int unk120;
        ZoneRadius(ClassInfo*, SimObj_Universe*, int, short);
        virtual ~ZoneRadius();
};

class ZoneFromNavGraph : public Zone {
    public:
        int unk120;
        int unk124;
        int unk128;
        //unk12C;
        int unk130;
        int unk134;
        //unk140
        ZoneFromNavGraph(ClassInfo*, SimObj_Universe*, int, short);
        virtual ~ZoneFromNavGraph();
};

#endif
