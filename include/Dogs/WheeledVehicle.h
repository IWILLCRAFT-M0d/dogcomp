#ifndef WHEELEDVEHICLE_H
#define WHEELEDVEHICLE_H

#include "HitTri.h"


class WheeledVehicle : public HitTri_Object {
    public:
        float unk624;
        float unk628;
        int unk62C;
        int unk630;
        float unk634;
        int unk638;
        int unk63C;
        int unk640;
        int unk644;
        int unk648;
        // char unk650[4];
        // char unk654[4];
        // char unk658[4];
        // char unk65C[4];
        float unk660;
        float unk6B0;
        int unk6B4;
        int unk6B8;
        WheeledVehicle(int wheels, void*, void*, int, short);
        virtual ~WheeledVehicle();
        void func_00180528(float);
        void func_00180530(void);
        void func_00180540(void);
};


#endif
