#ifndef DUSTEFFECTS_H
#define DUSTEFFECTS_H

#include "SimObj.h"

class DustEffectManager : public SimObject {
    public:
        int unk11C;
        DustEffectManager(ClassInfo*, SimObj_Universe*, int, short);
        virtual ~DustEffectManager();
};


#endif
