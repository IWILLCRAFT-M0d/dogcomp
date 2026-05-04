#ifndef NAVGRAPHRES_H
#define NAVGRAPHRES_H

#include "FGDK3/Playstation2/Thread.h"

extern void * const NavGraphRes_StdInit_UsedModules[];

Status NavGraphRes_InternalInitialise();
void NavGraphRes_InternalFinalise();
Status NavGraphRes_Initialise();
void NavGraphRes_Finalise();


// Resource navgraph
// 0x1C - navgraph points?
// float[4]
// 4 bytes (id)?
// padding 12 bytes
class NavGraph_Resources /* : public Resource<NavGraph> */ {

};

#endif
