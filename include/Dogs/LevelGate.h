#ifndef LEVELGATE_H
#define LEVELGATE_H

#include "SimObj.h"

class LevelGate : public SimObject {
    public:
        int unk130; // actorId P?
        int unk134; // actorId E?
        LevelGate(ClassInfo*, SimObj_Universe*, int, short);
        virtual ~LevelGate();
        virtual ClassInfo* func_0013FD20();
};

#endif
