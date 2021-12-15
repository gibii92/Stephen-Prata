#include <iostream>
#include "file.cpp"
#include <cctype>
using namespace std;

int main()
{
    double suma = 0;
    Stack st;
    char ch;
    customer po;
    char fn[35];
    cout << "Nacisnij D, aby wprowadzic deklaracje, \n"
         << "P, aby przetworzyc deklaracje, lub K, aby zakonczyc.\n";
    while (cin >> ch && toupper(ch) != 'K')
    {
        while (cin.get() != '\n')
            continue;
        if (!isalpha(ch))
        {
            cout << '\a';
            continue;
        }

        switch (ch)
        {
        case 'D':
        case 'd':
            cout << "Podaj nazwisko dla nowej deklaracji: ";
            cin.getline(po.fullname, 35);
            cout << "Podaj kwote dla nowej deklaracji: ";
            cin >> po.payment;
            if (st.isfull())
                cout << "Stos pelen!\n";
            else
                st.push(po);
            break;
        case 'P':
        case 'p':
            if (st.isempty())
                cout << "Stos pusty!\n";
            else
            {
                
                st.pop(po);
                suma+=po.payment;
                cout << "Deklaracja " << po.fullname << " zdjeta\n";
                cout<<"Suma platnosci usuwanych deklaracji: "<<suma<<endl;
            }
            break;
        }
        cout << "Nacisnij D, aby wprowadzic deklaracje, \n"
             << "P, aby przetworzyc deklaracje, lub K, aby zakonczyc.\n";
    }
    cout << "Fajrant!\n";

    return 0;
}
