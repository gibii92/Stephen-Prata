#include <iostream>
using namespace std;
#include <string>
struct car
{
    string marka;
    int rok_budowy;
};
int main()
{
    cout << "Ile samochodow chcesz skatalogowac? ";
    int ile;
    cin >> ile;
    car *wsk = new car[ile];
    for (int i = 0; i < ile; i++)
    {
        cout << "Samochod #" << i + 1 << ": ";
        cin.get();
        getline(cin, wsk[i].marka);
        cout << "Rok produkcji: ";
        cin >> wsk[i].rok_budowy;
    }
    for (int i = 0; i < ile; i++)
    {
        cout << wsk[i].rok_budowy << " " << wsk[i].marka << endl;
    }
    return 0;
}