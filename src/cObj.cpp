#include "app.h"

void cObj::add( const std::string& name )
{
    theDataStore.theInput.push_back( new cObj(name) );
}

 std::vector<cObj*> cObj::get()
 {
    return theDataStore.theInput;
 }

 std::string cObj::name() const
 {
    return myName;
 }

 std::string cObj::text()
{
    std::string ret;
    for( cObj* o : theDataStore.theInput )
        ret += o->name() + ", ";
    return ret;
}