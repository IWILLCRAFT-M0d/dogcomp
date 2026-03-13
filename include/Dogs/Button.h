#ifndef BUTTON_H
#define BUTTON_H

#include "WorldObj.h"


class Button : public WorldObject {
    public:
        int unk5C0;
        float unk5C4; // button hold time (seconds)?

        int unk5E0;
        int unk5E4;
        int unk5E8; // toggle state?
        int unk5EC; // button press height?
        Button(ClassInfo*, SimObj_Universe*, int, short);
        virtual ~Button();
        ClassInfo* func_0010A6F0();
        void func_0010A4E0();
        int func_0010A550(void);


};


#endif
