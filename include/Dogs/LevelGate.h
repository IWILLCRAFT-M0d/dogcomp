#ifndef LEVELGATE_H
#define LEVELGATE_H

#include "SimObj.h"

class LevelGate : public SimObject {
    public:
        LevelGate(ClassInfo*, SimObj_Universe*, int, short);
        virtual ~LevelGate();
};

#endif
