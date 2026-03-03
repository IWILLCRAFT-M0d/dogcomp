#ifndef TUGOFWAR_H
#define TUGOFWAR_H

#include "WorldObj.h"

class TugOfWarGod : public WorldObject {
    public:
        int unk5F0; // tugofwar state?
        float unk5F4; // visual brightness?
        float unk5F8; // jake pull power?
        float unk5FC; // opponent dog pull power?

        int unk600;
        float unk604;
        int unk608;
        int unk60C;
        int unk610;
        //
        int unk618;
        int unk61C;
        int unk620;
        int unk624;
        int unk628;
        int unk62C;
        int unk630;
        int unk634;
        //
        int unk63C;
        int unk640;
        int unk644;
        //
        int unk64C;
        //
        float unk654;
        int unk658;
        int unk65C;
        int unk660;
        int unk664;
        int unk668;
        int unk66C;
        TugOfWarGod(ClassInfo*, SimObj_Universe*, int, short);
        virtual ~TugOfWarGod();
        void func_0017C238(void);
        void func_0017C248(void);
        void func_0017C218(void);
};

class TugOfWarRopeEnd : public WorldObject {
    public:
        int unk5C0;
        //unk5C4;
        int unk5C8;
        // unk5D0
        int unk5E0;
        TugOfWarRopeEnd(ClassInfo*, SimObj_Universe*, int, short);
        virtual ~TugOfWarRopeEnd();
};

#endif

