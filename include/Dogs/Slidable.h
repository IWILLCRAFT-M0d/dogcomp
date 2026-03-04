#ifndef SLIDABLE_H
#define SLIDABLE_H

#include "WorldObj.h"

class Slidable : public WorldObject {
    public:
        int unk5C0;
        int unk5C4;
        int unk5C8;
        //
        int unk5D0;
        //
        int unk5F0;
        short unk610;
        float unk614;
        float unk618;
        int unk61C;
        int unk620;



        int unk624;
        Slidable(ClassInfo*, SimObj_Universe*, int, short);
        virtual ~Slidable();
};

#endif
