#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<double, 3> czas;
    cout << "Podaj czas nr 1: ";
    cin >> czas[0];
    cout << "Podaj czas nr 2: ";
    cin >> czas[1];
    cout << "Podaj czas nr 3: ";
    cin >> czas[2];
    cout << "Sredni czas: " << (czas[0] + czas[1] + czas[2]) / 3 << endl;
    return 0;
}