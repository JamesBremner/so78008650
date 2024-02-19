#include "cxy.h"

class cServer
{
    std::string myName;
    cxy myLoc;
    int myClientCount;

public:
    cServer(const std::string &name, const cxy &loc)
        : myName(name), myLoc(loc), myClientCount(0)
    {
    }

    void addClient()
    {
        myClientCount++;
    }

    std::string name() const;
    cxy loc() const
    {
        return myLoc;
    }
    int clientCount() const
    {
        return myClientCount;
    }

    static void add(const std::string &name, const cxy &loc);

    static std::vector<cServer *> get();

    static std::string text();
};
class cClient
{
    std::string myName;
    cServer *myServer;
    cxy myLoc;

public:
    cClient(const std::string &name, const cxy &loc)
        : myName(name), myLoc(loc), myServer(0)
    {
    }

    void Server(cServer *s)
    {
        myServer = s;
        s->addClient();
    }
    double dist2(cServer &s) const;

    double dist2server() const;


    std::string name() const;
    bool hasServer() const
    {
        return (myServer);
    }

    static void add(const std::string &name, const cxy &loc);

    static std::vector<cClient *> get();

    static std::string text();
};
