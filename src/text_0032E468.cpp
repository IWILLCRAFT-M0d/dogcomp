#include "common.h"

#include <ee/eekernel.h>

// libsdr
INCLUDE_ASM("asm/nonmatchings/text_0032E468", sceSdRemoteInit);

INCLUDE_ASM("asm/nonmatchings/text_0032E468", sceSdTransToIOP);

INCLUDE_ASM("asm/nonmatchings/text_0032E468", sceSdCallBack);

INCLUDE_ASM("asm/nonmatchings/text_0032E468", sceSdRemote);

INCLUDE_ASM("asm/nonmatchings/text_0032E468", sceSdRemoteCallbackInit);

INCLUDE_ASM("asm/nonmatchings/text_0032E468", _sdrCBThread);

INCLUDE_ASM("asm/nonmatchings/text_0032E468", _sdrCB);
