#ifndef FONTRES_H
#define FONTRES_H

#include "FGDK3/Playstation2/Thread.h"

class Font_Resources /* : public Resource<Font_Header> */ {

};

// font header?
// see 0x001704C0 in 1.ovl (basefont)
// float unk0 - character size?
// float unk4
// char[8] unk8
/* 0x14 */ // short m_textureId;
extern void * const FontRes_StdInit_UsedModules[];

Status FontRes_InternalInitialise();
void FontRes_InternalFinalise();
Status FontRes_Initialise();
void FontRes_Finalise();

#ifdef __cplusplus
extern "C" {
#endif
char * func_002D6B88(void);
#ifdef __cplusplus
}
#endif

#endif
