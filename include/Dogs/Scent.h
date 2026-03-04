#ifndef SCENT_H
#define SCENT_H

#include "SimObj.h"

class Scent : public SimObject {
    public:
        float unk114;
        float unk118;
        int unk11C;
        int unk120;
        Scent(ClassInfo*, SimObj_Universe*, int, short);
        virtual ~Scent();
};

#endif
