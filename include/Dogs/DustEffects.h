#ifndef DUSTEFFECTS_H
#define DUSTEFFECTS_H

#include "SimObj.h"

class DustEffectManager : public SimObject {
    public:
        static ClassInfo* s_classInfo;
        int unk11C;
        DustEffectManager(ClassInfo*, SimObj_Universe*, int, short);
        virtual ~DustEffectManager();
        virtual ClassInfo* func_0013B260();
};


#endif
