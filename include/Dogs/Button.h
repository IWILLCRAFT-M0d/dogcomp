#ifndef BUTTON_H
#define BUTTON_H

#include "WorldObj.h"


class Button : public WorldObject {
    public:
        Button(void*, void*, int, short);
        virtual ~Button();
};


#endif
