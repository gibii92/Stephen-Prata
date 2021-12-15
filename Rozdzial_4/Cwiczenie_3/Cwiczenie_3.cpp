#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    const int lancuch = 20;
    
    char imie[lancuch];
    char nazwisko[lancuch];
    char wynik[lancuch];
    cout << "Podaj imie: ";
    cin.getline(imie, lancuch);
    cout << "Podaj nazwisko: ";
    cin.getline(nazwisko, lancuch);
    strcpy(wynik, nazwisko);
    strcat(wynik, ", ");
    strcat(wynik, imie);
    cout << "Oto informacje zestawione w jeden napis: " << wynik;
    return 0;
}