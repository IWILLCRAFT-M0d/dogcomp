#ifndef TEXTURERES_H
#define TEXTURERES_H

#include "FGDK3/Playstation2/Thread.h"

#include "FGDK3/ThrowCat.h"
#include "FGDK3/RelRecv.h"

#include "unk.h"

extern void * const TextureRes_StdInit_UsedModules[];

Status TextureRes_InternalInitialise(void);
void TextureRes_InternalFinalise(void);
Status TextureRes_Initialise(void);
void TextureRes_Finalise(void);




// struct Texture_Resources : public Resource_Generic {
//
//     int unk14;
//     Texture_Resources();
//     virtual ~Texture_Resources();
// };

class GE_Texture {

};

class Texture_Resources : Resource<GE_Texture> {
    public:
        int unk14;
        Texture_Resources();
        virtual ~Texture_Resources();
};

#ifdef __cplusplus
extern "C" {
#endif
char* func_0031FBE0(void);
char* func_0031FBF0(void);
#ifdef __cplusplus
}
#endif

#endif
