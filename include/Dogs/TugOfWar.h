#ifndef TUGOFWAR_H
#define TUGOFWAR_H

#include "WorldObj.h"

class TugOfWarGod : public WorldObject {
    public:
        int unk5F0; // tugofwar state?
        float unk5F4; // visual brightness?
        float unk5F8; // jake pull power?
        float unk5FC; // opponent dog pull power?
        TugOfWarGod(void*, void*, int, short);
        virtual ~TugOfWarGod();
        void func_0017C238(void);
        void func_0017C248(void);
        void func_0017C218(void);
};

#endif

