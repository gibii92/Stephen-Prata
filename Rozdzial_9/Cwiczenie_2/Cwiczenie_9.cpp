#include <iostream>
using namespace std;
void strcount(string str);
int main()
{   
    string input;
    cout << "Wprowadz wiersz:\n";
    getline(cin, input);
    while (cin)
    {
        strcount(input);
        cout << "Wprowadz nastepny wiersz (wiersz pusty konczy wprowadzanie):\n";
        getline(cin, input);
    }
    cout << "Koniec\n";
    return 0;
}
void strcount(string str)
{
    static int total = 0;
    cout << "\"" << str << "\" zawiera ";
    total+= str.length();
    cout << str.length() << " znakow\n";
    cout << "Lacznie " << total << " znakow\n";
}