#ifndef TEXTURERES_H
#define TEXTURERES_H

#include "FGDK3/Playstation2/Thread.h"

#include "unk.h"

extern void * const TextureRes_StdInit_UsedModules[];

Status TextureRes_InternalInitialise();
void TextureRes_InternalFinalise();
Status TextureRes_Initialise();
void TextureRes_Finalise();

class GE_Texture {

};

class Texture_Resources : Resource<GE_Texture> {
    public:
        int unk14; // bool g_geInitialized?
        Texture_Resources();
        virtual ~Texture_Resources();
        //
        virtual void* func_0031F5E0();
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
