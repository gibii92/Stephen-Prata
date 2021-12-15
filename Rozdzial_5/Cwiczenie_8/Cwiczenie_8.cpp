#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    cout << "Podawaj slowa (kiedy skonczysz, napisz \"gotowe\")";
    char slowo[20];
    int licznik = 0;
    cin >> slowo;
    while (strcmp(slowo, "gotowe"))
    {
        licznik++;
        cin >> slowo;
    }
    cout << "Podano " << licznik << " slow";
    return 0;
}