#include <cfloat>
#include "app.h"

sDataStore theDataStore;

void generate()
{
    // Imagine there are 10 clients and 3 servers.
    for( int k = 0; k < 3;k++) {
        cxy loc(rand() % 100, rand() % 100);
        cServer::add(std::to_string(k),loc);
    }
    for( int k = 0; k < 10;k++) {
        cxy loc(rand() % 100, rand() % 100);
        cClient::add(std::to_string(k),loc);
    }

    std::cout << theDataStore.theServers.size() << " servers, "
        << theDataStore.theClients.size() << " clients\n";
}

void calculate()
{
    /*
    LOOP until stop
Loop over servers
  SET closest = NULL
  SET shortest = INFINITY
  Loop over clients 
     IF client has server
         CONTINUE
     SET dist = distance from client to server
     IF dist < shortest
       SET closest = client
       SET shortest = dist
  ENDLOOP over clients
  IF closest == NULL
       STOP
  Connect closest client to server
ENDLOOP over servers
ENDLOOP until stop
    */

   while( true )
   {
        // loop over servers
        for( auto s : theDataStore.theServers )
        {
            cClient* closest = 0;
            double shortest = DBL_MAX;

            // loop over clients
            for( auto c : theDataStore.theClients )
            {
                // client already connected to server
                if( c->hasServer() )
                    continue;
                
                // check for closest client so far
                double dist2 = c->dist2( *s );
                if( dist2 < shortest ) {
                    shortest = dist2;
                    closest = c;
                }
            }

            // check if all clients connected to a server
            if( ! closest ) {

                // done, reprt results
                std::cout << "Clients per server: ";
                for( auto sc : theDataStore.theServers )
                    std::cout << sc->clientCount() << " ";
                std::cout << "\n";
                return;
            }

            // connect client to server
            closest->Server( s );
            
        }
   }


}


main()
{
    generate();
    calculate();

    return 0;
}
