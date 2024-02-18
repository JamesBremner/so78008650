#include "app.h"

#include <wex.h>
#include "cGUI.h"

sDataStore theDataStore;

void generate()
{
    cObj::add("A");
    cObj::add("B");
    cObj::add("C");
}

void calculate()
{
    for( cObj* o : cObj::get() )
    {
        theDataStore.theOutput.push_back(
            new cOutput( o->name() + "-processed"));
    }
}


std::string textOutput()
{
        std::string ret;
    return ret;
}

main()
{
    cGUI theGUI(
        "DataStore App",
        {50, 50, 1000, 500});

    return 0;
}
