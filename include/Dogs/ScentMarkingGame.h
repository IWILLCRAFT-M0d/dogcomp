#ifndef SCENTMARKINGGAME_H
#define SCENTMARKINGGAME_H

#include "SimObj.h"
#include "WorldObj.h"

class ScentMarkingGameNode : public SimObject {
    public:
        ScentMarkingGameNode(ClassInfo*, SimObj_Universe*, int, short);
        virtual ~ScentMarkingGameNode();
        virtual ClassInfo* func_00160290();
};

class ScentMarkingGameGodInterface /**/ {

};

class ScentMarkingGameGod : /*public WorldObject,*/ public ScentMarkingGameGodInterface {

};

#endif
