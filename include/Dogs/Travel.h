#ifndef TRAVEL_H
#define TRAVEL_H

#include "FGDK3/Animate.h"

class TravelToExternalPosAnimation /* : public AnimationComponent */ {
    public:
        virtual ~TravelToExternalPosAnimation();
        //
        virtual int func_00234DC8();
};

class NavToPosAnimation /* : public */ {
    public:
        // virtual ? func_002334C0();
        /*virtual*/ int func_002353C8();
};

class NavToDestinationAnimation {
    public:
        virtual ~NavToDestinationAnimation();

        virtual int func_00235228();

};

#ifdef __cplusplus
extern "C" {
#endif

int func_00234E60(void);
int func_00234EF8(void);
int func_00234F90(void);
int func_00235028(void);
int func_002350C0(void);
int func_00235158(void);
int func_002351C0(void);

int func_00235290(void);
int func_002352F8(void);
int func_00235360(void);
int func_00235430(void);
int func_00235438(void);
int func_002354A0(void);
#ifdef __cplusplus
}
#endif

#endif
