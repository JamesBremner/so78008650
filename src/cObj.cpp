#include "app.h"

void cServer::add( const std::string& name , const cxy& loc )
{
    theDataStore.theServers.push_back( new cServer(name,loc) );
}
void cClient::add( const std::string& name , const cxy& loc )
{
    theDataStore.theClients.push_back( new cClient(name,loc) );
}

double cClient::dist2( cServer& s)
{
    return myLoc.dist2( s.loc() );
}

