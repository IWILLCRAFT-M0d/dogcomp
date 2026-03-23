#ifndef DIGGINGRACE_H
#define DIGGINGRACE_H

#include "WorldObj.h"

class DiggingRaceGod : public WorldObject {
    public:
        int unk5D0;
        int unk5D4;
        //
        int unk5DC;
        int unk5E0;
        int unk5E4;
        int unk5E8;
        int unk5EC;
        int unk5F0;
        int unk5F4;
        int unk5F8;
        //
        int unk630;
        int unk634;
        int unk638;
        DiggingRaceGod(ClassInfo*, SimObj_Universe*, int, short);
        virtual ~DiggingRaceGod();
        virtual ClassInfo* func_0012CC58();
};

#endif
