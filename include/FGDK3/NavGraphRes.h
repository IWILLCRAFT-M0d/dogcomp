#ifndef NAVGRAPHRES_H
#define NAVGRAPHRES_H

#include "FGDK3/Playstation2/Thread.h"
#include "ThrowCat.h"
#include "RelRecv.h"

extern void * const NavGraphRes_StdInit_UsedModules[];

Status NavGraphRes_InternalInitialise();
void NavGraphRes_InternalFinalise();
Status NavGraphRes_Initialise();
void NavGraphRes_Finalise();

class NavGraph_Resources /* : public Resource<NavGraph> */ {

};

#endif
