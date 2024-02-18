#include "app.h"

sDataStore theDataStore;

void generate()
{
    cObj::add("A");
    cObj::add("B");
    cObj::add("C");
}

void calculate()
{
    for (cObj *o : cObj::get())
    {
        theDataStore.theOutput.push_back(
            new cOutput(o->name() + "-processed"));
    }
}

std::string textOutput()
{
    std::string ret;
    return ret;
}

main()
{
    generate();
    calculate();
    std::cout << cObj::text() << "\n";
    std::cout << cOutput::text();

    return 0;
}
