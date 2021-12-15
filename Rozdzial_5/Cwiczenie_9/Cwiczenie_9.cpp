#include <iostream>
#include <string>
using namespace std;
int main()
{
    cout << "Podawaj slowa (kiedy skonczysz, napisz \"gotowe\")" << endl;
    string slowo;
    int licznik = 0;
    cin >> slowo;
    while (slowo != "gotowe")
    {
        licznik++;
        cin >> slowo;
    }
    cout << "Podano " << licznik << " slow";
    return 0;
}