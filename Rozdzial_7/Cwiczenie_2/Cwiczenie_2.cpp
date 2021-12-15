#include <iostream>
using namespace std;
int tablica(int dane[], int n);
void wyswietl(const int dane[], int n);
double srednia(const int dane[], int n);
int main()
{
    int n = 10;
    int wynik[n];
    n = tablica(wynik, n);
    wyswietl(wynik, n);
    cout << "Srednia wynosi: " << srednia(wynik, n) << endl;
    cout << "Koniec" << endl;
    return 0;
}
int tablica(int dane[], int n)
{
    int licznik = 0;
    for (int i = 0; i < n; i++)
    {
        cout << "Wynik " << i + 1 << " ";
        if (cin >> dane[i])
            licznik++;
        else
            break;
    }
    return licznik;
}
void wyswietl(const int dane[], int n)
{
    for (int i = 0; i < n; i++)
        cout << dane[i] << " ";
    cout<<endl;
}
double srednia(const int dane[], int n)
{
    double srednia = 0;
    for (int i = 0; i < n; i++)
        srednia += dane[i];
    srednia /= n;
    return srednia;
}
