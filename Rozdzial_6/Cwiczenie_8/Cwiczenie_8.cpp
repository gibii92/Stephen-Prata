#include <iostream>
#include <string>
#include <fstream>
using namespace std;
struct wplacajacy
{
    string Nazwisko;
    double kwota;
};
int main()
{
    cout << "Program sledzacy wplyw na konto Towarzystwa na Rzecz Zachowania Dobrych Wplywow.\n";
    ifstream inFile;
    inFile.open("plik_cwiczenie_9.txt");
    int ilu;
    inFile >> ilu;
    cout<<endl;
    wplacajacy *lista = new wplacajacy[ilu];
    for (int i = 0; i < ilu; i++)
    {
        inFile.get();
        getline(inFile, lista[i].Nazwisko);
        cout<<"Nazwisko: "<<lista[i].Nazwisko<<endl;
        inFile>>lista[i].kwota;
        cout<<"Kwota: "<<lista[i].kwota<<endl;
    }
    int pomocnicza = 0;
    cout << "Nasi Wspaniali Sponsorzy\n";
    for (int i = 0; i < ilu; i++)
    {
        if (lista[i].kwota >= 10000)
        {
            cout << lista[i].Nazwisko << endl;
            pomocnicza++;
        }
    }
    if (pomocnicza == 0)
        cout << "Brak\n";
    pomocnicza = 0;
    cout << "Nasi Sponsorzy\n";
    for (int i = 0; i < ilu; i++)
    {
        if (lista[i].kwota < 10000)
        {
            cout << lista[i].Nazwisko << endl;
            pomocnicza++;
        }
        if (pomocnicza == 0)
            cout << "Brak\n";
    }
    return 0;
}