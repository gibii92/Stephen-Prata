#include <iostream>
using namespace std;
int main()
{
    cout << "r) roslinozerca\t\tp) pianista\nd) drzewo\t\tg) gra\n";
    cout << "Prosze podac litere r, p, t lub g.(wcisnij 'q' aby zakonczyc)\n";
    char znak;
    while (cin >> znak&&znak!='q')
    {
        switch (znak)
        {
        case 'r':
            cout << "Krowa to roslinozerca\n";
            break;
        case 'p':
            cout << "Chopin to pianista\n";
            break;
        case 'd':
            cout << "Klon to drzewo\n";
            break;
        case 'g':
            cout << "Tomb Raider to gra\n";
            break;
        default:
            cout << "Nie ma takiej opcji\n";
        }
        cout << "r) roslinozerca\t\tp) pianista\nd) drzewo\t\tg) gra" << endl;
        cout << "Prosze podac litere r, p, t lub g: ";
    }
    cout<<"Zakoncz";
    return 0;
}