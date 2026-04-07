#ifndef BUTTON_H
#define BUTTON_H

#include "WorldObj.h"


class Button : public WorldObject {
    public:
        static ClassInfo* s_classInfo;
        int unk5C0; // receiver actorId
        float unk5C4; // button hold time (seconds)?

        int unk5E0;
        int unk5E4;
        int unk5E8; // toggle state?
        int unk5EC; // buttonType (0 - standing, 1 - paw height)
        Button(ClassInfo*, SimObj_Universe*, int, short);
        virtual ~Button();
        virtual ClassInfo* func_0010A6F0();
        virtual void func_0010A4E0();
        virtual int func_0010A550();


};


#endif
