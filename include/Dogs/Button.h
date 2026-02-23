#ifndef BUTTON_H
#define BUTTON_H

#include "WorldObj.h"


class Button : public WorldObject {
    public:
        int unk5C4;

        int unk5E0;
        int unk5E4;
        int unk5E8; // toggle state?
        int unk5EC; // button press height?
        Button(void*, void*, int, short);
        virtual ~Button();
        int func_0010A550(void);
};


#endif
