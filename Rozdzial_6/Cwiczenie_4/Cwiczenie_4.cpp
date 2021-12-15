#include <iostream>
const int strsize = 20;
struct zpdw
{
    char imie[strsize];
    char stanowisko[strsize];
    char pseudozpdw[strsize];
    int preferencje;
};
using namespace std;
int main()
{
    zpdw Goscie[4] =
        {
            {"Szymon N", "Prezes", "Gruby", 1},
            {"Konrad N", "Zastepca", "Koziuszy", 2},
            {"Weronika N", "Kadrowa", "Weroniczka", 0},
            {"Karolina N", "Ksiegowa", "Powazna", 1}};
    cout << "Zakon Programistow Dobrej Woli\n";
    cout << "a) lista wg imion\t\tb) lista wg stanowisk\nc) lista wg pseudonimow\t\td) lista wg preferencji\nq. koniec\n";
    cout << "Wybierz jedna z opcji: ";
    char znak;
    while (cin >> znak && znak != 'q')
    {
        switch (znak)
        {
        case 'a':
        {
            cout << "Lista wg imion\n";
            for (int i = 0; i < 4; i++)
                cout << Goscie[i].imie << endl;
            break;
        }
        case 'b':
        {
            cout << "Lista wg stanowisk\n";
            for (int i = 0; i < 4; i++)
                cout << Goscie[i].stanowisko << endl;
            break;
        }
        case 'c':
        {
            cout << "Lista wg pseudonimow\n";
            for (int i = 0; i < 4; i++)
                cout << Goscie[i].pseudozpdw << endl;
            break;
        }
        case 'd':
        {
            cout << "Lista wg preferencji\n";
            for (int i = 0; i < 4; i++)
                if (Goscie[i].preferencje == 0)
                    cout << Goscie[i].imie << endl;
                else if (Goscie[i].preferencje == 1)
                    cout << Goscie[i].stanowisko << endl;
                else if (Goscie[i].preferencje == 2)
                    cout << Goscie[i].pseudozpdw << endl;
            break;
        }
        default:
            cout << "Nie ma takiej opcji\n";
        }
        cout << "Zakon Programistow Dobrej Woli\n";
        cout << "a) lista wg imion\t\tb) lista wg stanowisk\nc) lista wg pseudonimow\t\td) lista wg preferencji\nq. koniec";
        cout << "Wybierz jedna z opcji: ";
    }
    cout<<"Koniec";
    return 0;
}