#ifndef PS2GE_RENDERHARDWARE_H
#define PS2GE_RENDERHARDWARE_H

#include "ge_unk.h"

class GE_PS2RenderHardware : public GE_RenderHardware {
    public:
        GE_PS2RenderHardware();
        virtual ~GE_PS2RenderHardware();
        virtual int func_002A5300();
        virtual int func_002A5298();
};


#endif
