#include <iostream>
#include <string>
using namespace std;

int main()
{
    string wynik;
    string imie;
    string nazwisko;
    cout << "Podaj imie: ";
    getline(cin, imie);
    cout << "Podaj nazwisko: ";
    getline(cin, nazwisko);
    wynik += nazwisko + ", " + imie;
    cout << "Oto informacje zestawione w jeden napis: " << wynik;
    return 0;
}