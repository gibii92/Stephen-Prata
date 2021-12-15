#include <iostream>
using namespace std;

int main()
{
    int a, b, suma = 0;
    cout << "Podaj dwie liczby calkowite: " << endl;
    cout << "A: ";
    cin >> a;
    cout << "B: ";
    cin >> b;
    for (int i = a; i <= b; i++)
        suma += i;
    cout << "Suma liczb od " << a << " do " << b << " wynosi " << suma << endl;
    return 0;
}