#ifndef DUSTEFFECTS_H
#define DUSTEFFECTS_H

#include "SimObj.h"

class DustEffectManager : public SimObject {
    public:
        static ClassInfo* s_classInfo;
        int unk118; // dust texture id/num (might be short type)
        int unk11C; // max dust particles?

        DustEffectManager(ClassInfo*, SimObj_Universe*, int, short);
        virtual ~DustEffectManager();
        virtual ClassInfo* func_0013B260();
};


#endif
