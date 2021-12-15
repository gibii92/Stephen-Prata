#include <iostream>
using namespace std;
#include <string>
int main()
{
    int liczba, suma_rok[3] = {}, suma = 0;
    string miesiace[12] = {"styczen", "luty", "marzec", "kwiecien", "maj", "czerwiec", "lipiec", "sierpien", "wrzesien", "pazdziernik", "listopad", "grudzien"};
    int sprzedaz[3][12];
    for (int i = 0; i < 3; i++)
    {
        cout << "Rok " << i + 1 << endl;
        for (int j = 0; j < 12; j++)
        {
            cout << miesiace[j] << ": ";
            cin >> liczba;
            suma_rok[i] += liczba;
            suma += liczba;
        }
    }
    for (int i = 0; i < 3; i++)
        cout << "Roczna liczba sprzedanych ksiazek za rok " << i + 1 << " wynosi: " << suma_rok[i] << endl;
    cout << "Laczna liczba sprzedanych ksiazek: " << suma << endl;
    return 0;
}