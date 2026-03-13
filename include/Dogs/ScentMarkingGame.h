#ifndef SCENTMARKINGGAME_H
#define SCENTMARKINGGAME_H

#include "SimObj.h"

class ScentMarkingGameNode : public SimObject {
    public:
        ScentMarkingGameNode(ClassInfo*, SimObj_Universe*, int, short);
        virtual ~ScentMarkingGameNode();
        ClassInfo* func_00160290();
};

#endif
