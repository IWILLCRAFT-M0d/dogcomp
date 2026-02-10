#ifndef DUSTEFFECTS_H
#define DUSTEFFECTS_H

#include "SimObj.h"

class DustEffectManager : public SimObject {
    public:
        DustEffectManager(void*, void*, int, short);
        virtual ~DustEffectManager();
};


#endif
