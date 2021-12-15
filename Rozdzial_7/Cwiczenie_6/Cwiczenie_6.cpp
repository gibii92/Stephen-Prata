#include <iostream>
using namespace std;
int fill_array(double tablica[], int n);
void show_array(const double tablica[], int n);
void reverse_array(double tablica[], int n);
int main()
{
    int n = 10;
    double tablica_1[10];
    n = fill_array(tablica_1, 10);
    show_array(tablica_1, n);
    reverse_array(tablica_1, n);
    show_array(tablica_1, n);
    cout << "Zakoncz";
    return 0;
}
int fill_array(double tablica[], int n)
{
    double temp;
    int i;
    for (i = 0; i < n; i++)
    {
        cout << "Indeks " << i << ": ";
        cin >> temp;
        if (!cin)
            break;
        else
            tablica[i] = temp;
    }
    return i;
}
void show_array(const double tablica[], int n)
{
    for (int i = 0; i < n; i++)
        cout << "Indeks: " << i << "\tWartosc: " << tablica[i] << endl;
    cout<<endl;
}
void reverse_array(double tablica[], int n)
{
    double tablica_temp[n];
    for (int i = n - 1, j = 0; j < n; i--, j++)
        tablica_temp[i] = tablica[j];
    for (int i = 0, j = 0; j < n; i++, j++)
        tablica[i] = tablica_temp[j];
}