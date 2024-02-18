#pragma once

class cGUI
{
public:
    cGUI(
        const std::string &title,
        const std::vector<int> &vlocation);

     void draw( wex::shapes& S );


protected:
    wex::gui &fm;
    wex::panel& pl;
};