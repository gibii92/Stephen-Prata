#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "Jak masz na imie? ";
    string imie;
    getline(cin, imie);
    cout << "Jak sie nazywasz? ";
    string nazwisko;
    getline(cin, nazwisko);
    cout << "Na jaka ocene zaslugujesz? ";
    int ocena;
    cin >> ocena;
    cout << "Wiek? ";
    int wiek;
    cin >> wiek;
    cout << "Nazwisko: " << nazwisko << ", " << imie << endl;
    cout << "Ocena: " << --ocena << endl;
    cout << "Wiek: " << wiek << endl;
    return 0;
}