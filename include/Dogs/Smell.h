#ifndef SMELL_H
#define SMELL_H

#include "SimObj.h"

class Smell : public SimObject {
    public:
        static ClassInfo* s_classInfo;
        short unk110;
        int unk114;
        int unk118;
        //
        int unk134;
        Smell(ClassInfo*, SimObj_Universe*, int, short);
        virtual ~Smell();
        virtual ClassInfo* func_00172A28();
};

#endif
