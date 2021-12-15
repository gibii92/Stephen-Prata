#include <iostream>

using namespace std;
int main()
{
    cout << "Podaj liczbe wierszy: ";
    int wiersze;
    cin >> wiersze;
    for (int i = 1; i <= wiersze; i++)
    {
        for (int x = wiersze - i; x > 0; x--)
            cout << ".";
        for (int y = 0; y < i; y++)
            cout << "*";
        cout << endl;
    }
    return 0;
}