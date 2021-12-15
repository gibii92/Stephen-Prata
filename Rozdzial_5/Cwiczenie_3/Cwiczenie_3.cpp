#include <iostream>
using namespace std;

int main()
{
    int a, suma = 0;
    cout << "Podawaj liczby. 0 zakonczy podawanie liczb." << endl;
    while (cin >> a && a != 0)
    {
        suma += a;
        cout << "Suma wynosi " << suma << endl;
    }
    cout << "Suma wynosi " << suma << endl;
    cout << "Zakonczono." << endl;
    return 0;
}