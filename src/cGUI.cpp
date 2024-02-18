
#include "app.h"
#include <wex.h>
#include "cGUI.h"

cGUI::cGUI(
    const std::string &title,
    const std::vector<int> &vlocation)
    : fm(wex::maker::make()),
    pl(wex::maker::make<wex::panel>(fm))
{
    generate();
    calculate();
    std::cout << cObj::text() << "\n";
    std::cout << cOutput::text();

    fm.move(vlocation);
    fm.text(title);

    pl.move({10,100,400,400});
    pl.text("");

    fm.events().draw(
        [&](PAINTSTRUCT &ps)
        {
            wex::shapes S(ps);
            draw(S);
        });

    fm.show();
    fm.run();
}

     void cGUI::draw( wex::shapes& S )
    {
        pl.text(
            cObj::text() + "\n\n" + cOutput::text()         );
    }