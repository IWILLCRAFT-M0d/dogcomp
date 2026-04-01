#ifndef PAUSED_H
#define PAUSED_H

#include "unk.h"

class PausedLayer : public GameLayer {
    public:
        PausedLayer();
        virtual ~PausedLayer();
        virtual void func_001ED248();
};

#endif
