#ifndef DUSTEFFECTS_H
#define DUSTEFFECTS_H

#include "SimObj.h"

class DustEffectManager : public SimObject {
    public:
        DustEffectManager(ClassInfo*, void*, int, short);
        virtual ~DustEffectManager();
};


#endif
