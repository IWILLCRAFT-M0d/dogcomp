#ifndef PS2GE_RENDERHARDWARE_H
#define PS2GE_RENDERHARDWARE_H

#include "ge_unk.h"

class GE_PS2RenderHardware : public GE_RenderHardware {
    public:
        int m_unk8;
        int m_unkC;
        //unk10;
        //unk14
        //unk18
        //unk1C
        //unk20
        void* unk24;
        void* unk28;
        GE_PS2RenderHardware();
        virtual ~GE_PS2RenderHardware();
        virtual void func_002A4D38();
        // virtual ? func_002A52A0
        virtual int func_002A5300();
        // virtual ? func_002A4D98
        // virtual ? func_002A4BF8
        virtual int func_002A5298();
};

void func_002A4C58(/**/);

#ifdef __cplusplus
extern "C" {
#endif
int func_002A5100(void);
int func_002A5110(void);
#ifdef __cplusplus
}
#endif

#endif /* PS2GE_RENDERHARDWARE_H */
