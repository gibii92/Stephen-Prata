#include <iostream>
#include <string>
using namespace std;
struct wplacajacy
{
    string Nazwisko;
    double kwota;
};
int main()
{
    cout << "Program sledzacy wplyw na konto Towarzystwa na Rzecz Zachowania Dobrych Wplywow.\n";
    int ilu;
    cout << "Podaj liczbe wplacajych: ";
    cin >> ilu;
    wplacajacy *lista = new wplacajacy[ilu];
    for (int i = 0; i < ilu; i++)
    {
        cout << "Wplacajacy nr " << i + 1 << endl;
        cout << "Nazwisko: ";
        cin.get();
        getline(cin, lista[i].Nazwisko);
        cout << "Kwota: ";
        cin >> lista[i].kwota;
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