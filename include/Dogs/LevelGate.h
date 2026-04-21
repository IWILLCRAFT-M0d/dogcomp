#ifndef LEVELGATE_H
#define LEVELGATE_H

#include "SimObj.h"

class LevelGate : public SimObject {
    public:
        int unk130; // actorId P? (partner_object)?
        int unk134; // actorId E? (exit_object)?
        LevelGate(ClassInfo*, SimObj_Universe*, int, short);
        virtual ~LevelGate();
        virtual ClassInfo* func_0013FD20();
};

#endif
