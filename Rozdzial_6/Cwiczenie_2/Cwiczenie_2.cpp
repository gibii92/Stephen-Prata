#include <iostream>

using namespace std;
int main()
{
    cout << "Podaj kolejnych wartosci datkow." << endl;
    double datki[10];
    double suma = 0.0;
    double srednia;
    int i = 0;
    cout << "Datek nr 1: ";
    while (i < 10 && cin >> datki[i])
    {
        suma += datki[i];
        i++;

        if (i < 10)
            cout << "Datek nr " << i + 1 << ": ";
    }
    cout << "Suma: " << suma << endl;
    srednia = suma / i;
    cout << "Srednia: " << srednia << endl;
    cout<<"Datki wieksze od sredniej to: ";
    for (int j = 0; j < i; j++)
    {
        if (datki[j] > srednia)
            cout << datki[j] <<" ";
    }
    return 0;
}