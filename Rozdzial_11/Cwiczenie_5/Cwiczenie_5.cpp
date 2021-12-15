#include <iostream>
#include "file.cpp"

int main(void)
{
    using namespace std;

    Stonewt wolfe(20, 5.7);
    

    cout << "incognito's weight: " << wolfe << endl;
    wolfe.stone_form();
    cout << "incognito's weight: " << wolfe << endl;
    wolfe.pound_form();
    cout << "incognito's weight: " << wolfe << endl;
    wolfe.floating_point_form();
    cout << "incognito's weight: " << wolfe << endl;
    wolfe=2*wolfe;
    cout << "incognito's weight: " << wolfe << endl;
    

    return 0;
}