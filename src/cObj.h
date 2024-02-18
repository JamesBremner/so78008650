class cObj
{
    std::string myName;

    public:

    cObj(const std::string& name )
    : myName( name )
    {}

    std::string name() const;

    static void add( const std::string& name );

    static std::vector<cObj*> get();

    static std::string text();
};
