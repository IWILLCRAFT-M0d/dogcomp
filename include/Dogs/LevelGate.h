#ifndef LEVELGATE_H
#define LEVELGATE_H

#include "SimObj.h"

class LevelGate : public SimObject {
    public:
        int unk130;
        int unk134;
        LevelGate(ClassInfo*, SimObj_Universe*, int, short);
        virtual ~LevelGate();
};

#endif
