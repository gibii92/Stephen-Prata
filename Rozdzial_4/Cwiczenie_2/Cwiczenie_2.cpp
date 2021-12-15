#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name, dessert;
    cout << "Podaj swoje imie:\n";
    getline(cin, name);
    cout << "Podaj swoj ulubiony deser:\n";
    getline(cin, dessert);
    cout << "Mamy dla ciebie " << dessert;
    cout << ", " << name << ".\n";
    return 0;
}