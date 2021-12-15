#include <iostream>
using namespace std;
#include "file.cpp"
#include <cstring>
int main()
{
    Stack st;
    char ch;
    unsigned long po;
    cout << "Nacisnij D, aby wprowadzic deklaracje, \nP, aby przetworzyc deklaracje, lub K, aby zakonczyc.\n";
    while (cin >> ch && toupper(ch) != 'K')
    {
        while (cin.get() != '\n')
            continue;
        if (!isalpha(ch))
        {
            cout << '\n';
            continue;
        }
        switch (ch)
        {
        case 'D':
        case 'd':
            cout << "Podaj numer nowej deklaracji: ";
            cin >> po;
            if (st.isfull())
                cout << "Stos pelen\n";
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
                cout << "Deklaracja nr" << po << " zdjeta.\n";
            }
            break;
        }
        cout << "Nacisnij D, aby wprowadzic deklaracje, \nP, aby przetworzyc deklaracje, lub K, aby zakonczyc.\n";
    }
    cout << "Zegnam\n";
    return 0;
}
