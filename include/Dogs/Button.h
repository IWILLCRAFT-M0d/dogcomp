#ifndef BUTTON_H
#define BUTTON_H

#include "WorldObj.h"
#include <libvu0.h>

class Button : public WorldObject {
    public:
        static ClassInfo* s_classInfo;
        int unk5C0; // button receiver actorId
        float unk5C4; // button hold time (seconds)?
        sceVu0FVECTOR unk5D0;
        int unk5E0;
        int unk5E4;
        int unk5E8; // toggle state?
        int unk5EC; // buttonType (0 - standing, 1 - paw height)
        Button(ClassInfo*, SimObj_Universe*, int, short);
        virtual ~Button();
        virtual ClassInfo* func_0010A6F0();
        // virtual base function (00168410)
        // virtual base function (00185680)
        // virtual base function (001857E8)
        // virtual ? func_0010A178
        // virtual base function (00182AD0)
        // virtual base function (00182A70)
        // virtual base function (00168688)


        // virtual base function (001884E8)
        // end of vtable @ 0039D508

        virtual void func_0010A4E0();
        virtual int func_0010A550();


};


#endif
