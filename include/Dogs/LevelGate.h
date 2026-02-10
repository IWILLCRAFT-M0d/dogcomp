#ifndef LEVELGATE_H
#define LEVELGATE_H

#include "SimObj.h"

class LevelGate : public SimObject {
    public:
        LevelGate(void*, void*, int, short);
        virtual ~LevelGate();
};

#endif
