#include "app.h"

 std::string cOutput::text()
{
    std::string ret;
    for( cOutput* o : theDataStore.theOutput )
        ret += o->name() + ", ";
    return ret;
}