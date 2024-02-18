class cOutput
{
    std::string myName;

public:
    cOutput(const std::string& name)
        : myName(name)
    {
    }
    std::string name() const
    {
        return myName;
    }
    static std::string text();
};