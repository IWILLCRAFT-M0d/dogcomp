#ifndef SELECTOR_H
#define SELECTOR_H

#include "WorldObj.h"

class Selector : public WorldObject {
    public:
        int unk5C0; // game slot selection (0-2)
        float unk5C4;
        float unk5C8;
        bool unk5CC; // selector movement unlocked (m_selectorUnlocked?)
        Selector(ClassInfo*, SimObj_Universe*, int, short);
        virtual ~Selector();
        virtual ClassInfo* func_00161038();
        //00160738



        virtual void func_00160758();
};

#endif
