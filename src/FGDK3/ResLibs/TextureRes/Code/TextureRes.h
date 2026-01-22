#ifndef TEXTURERES_H
#define TEXTURERES_H

#include "FGDK3/Playstation2/Thread.h"

Status TextureRes_InternalInitialise(void);
void TextureRes_InternalFinalise(void);
Status TextureRes_Initialise(void);
void TextureRes_Finalise(void);

/*
struct Texture_Resources : public Resource_Generic {

    int unk14;
    Texture_Resources();
    virtual ~Texture_Resources();
};

struct Resource_Generic {
    int unk0;
    int unk4;
    int unk8;
    void* unkC;

    Resource_Generic();
    virtual ~Resource_Generic();
};
*/

#endif
