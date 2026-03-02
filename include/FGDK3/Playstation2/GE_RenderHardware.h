#ifndef PS2GE_RENDERHARDWARE_H
#define PS2GE_RENDERHARDWARE_H

#include "unk.h"

class GE_PS2RenderHardware : public GE_RenderHardware {
    public:
        GE_PS2RenderHardware();
        virtual ~GE_PS2RenderHardware();
        int func_002A5300(void);
        int func_002A5298(void);
};

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#endif
