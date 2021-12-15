#include <iostream>
#include <cstring>
#include "file.cpp"
const int SIZE = 5;
int main()
{
    using namespace std;
    Person *lolas[SIZE];
    int ct;
    for (ct = 0; ct < SIZE; ct++)
    {
        char choice;
        cout << "Wybierz Postac:\ng: Gunslinger\tp: PokerPlayer\nb: BadDude\tw: Wyjscie\n";
        cin >> choice;
        while (strchr("gpbw", choice) == NULL)
        {
            cout << "Wybierz Postac:\ng: Gunslinger\tp: PokerPlayer\nb: BadDude\tw: Wyjscie\n";
            cin >> choice;
        }
        if (choice == 'w')
            break;
        switch (choice)
        {
        case 'g':
            lolas[ct] = new Gunslinger;
            break;
        case 'p':
            lolas[ct] = new PokerPlayer;
            break;
        case 'b':
            lolas[ct] = new BadDude;
            break;
        }
        cin.get();
        lolas[ct]->Set();
    }
    cout << "\nLista postaci:" ;
    int i;
    for (i = 0; i < ct; i++)
    {
        cout << endl;
        lolas[i]->Show();
    }
    for (i = 0; i < ct; i++)
        delete lolas[i];
    return 0;
}