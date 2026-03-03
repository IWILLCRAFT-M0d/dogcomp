#ifndef SMELL_H
#define SMELL_H

#include "SimObj.h"

class Smell : public SimObject {
    public:
        Smell(ClassInfo*, SimObj_Universe*, int, short);
        virtual ~Smell();
};

#endif
