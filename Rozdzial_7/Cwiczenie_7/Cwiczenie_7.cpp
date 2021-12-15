#include <iostream>
const int Max = 5;
double *fill_array(double *begin, double *end);
void show_array(double *begin, double *end);
void revalue(double r, double *begin, double *end);

int main()
{
    using namespace std;
    double properties[Max];
    double *size = fill_array(properties, properties + Max);
    show_array(properties, size);
    if (size > 0)
    {
        cout << "Podaj czynnik zmiany wartosci: ";
        double factor;
        while (!(cin >> factor))
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "Niepoprawna wartosc; podaj liczbe: ";
        }
        revalue(factor, properties, size);
        show_array(properties, size);
    }
    cout << "Gotowe.\n";
    cin.get();
    cin.get();
    return 0;
}
double *fill_array(double *begin, double *end)
{
    using namespace std;
    double temp;
    int i;
    double *j;
    for (j = begin, i = 1; j != end; j++, i++)
    {
        cout << "Podaj wartosc nr " << i << ": ";
        cin >> temp;
        if (!cin)
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "Bledne dane, wprowadzenie danych przerwane.\n";
            break;
        }
        else if (temp < 0)
            break;
        *j = temp;
    }
    return j;
}
void show_array(double *begin, double *end)
{
    using namespace std;
    int i;
    double *j;
    for (j = begin, i = 1; j != end; j++, i++)
    {
        cout << "Nieruchomosc nr " << i << ": ";
        cout << *j << endl;
    }
}
void revalue(double r, double *begin, double *end)
{
    int i;
    double *j;
    for (j = begin, i = 1; j != end; j++, i++)
        *j *= r;
}