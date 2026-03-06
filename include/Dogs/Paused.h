#ifndef PAUSED_H
#define PAUSED_H

#include "unk.h"

class PausedLayer : public GameLayer {
    public:
        PausedLayer();
        virtual ~PausedLayer();
};


#ifdef __cplusplus
extern "C" {
#endif

void func_001ED248(void);

#ifdef __cplusplus
}
#endif

#endif
