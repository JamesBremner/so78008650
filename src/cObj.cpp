#include <math.h>
#include "app.h"

void cServer::add(const std::string &name, const cxy &loc)
{
    theDataStore.theServers.push_back(new cServer(name, loc));
}
void cClient::add(const std::string &name, const cxy &loc)
{
    theDataStore.theClients.push_back(new cClient(name, loc));
}

double cClient::dist2(cServer &s) const
{
    return myLoc.dist2(s.loc());
}
double cClient::dist2server() const
{
    return sqrt(dist2(*myServer));
}
