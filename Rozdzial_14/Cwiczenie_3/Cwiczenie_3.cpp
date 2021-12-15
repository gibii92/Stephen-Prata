#include <iostream>
#include "file.cpp"
#include <cstring>
const int SIZE = 5;
int main()
{
    Queue<Worker *> lolas;
    using namespace std;
    Worker *temp;
    int ct;
    for (ct = 0; ct < SIZE; ct++)
    {
        char choice;
        cout << "Podaj kategorie pracownika:\nk:kelner\tp:piosenkarz\ns:spiewajacy kelner\tw:wyjscie\n";
        cin >> choice;
        while (strchr("kpsw", choice) == NULL)
        {
            cout << "Wpisz k, p, s lub w: ";
            cin >> choice;
        }
        if (choice == 'w')
            break;
        switch (choice)
        {
        case 'k':
            temp = new Waiter;

            break;
        case 'p':
            temp = new Singer;

            break;
        case 's':
            temp = new SingingWaiter;

            break;
        }
        cin.get();
        temp->Set();
        lolas.enqueue(temp);
    }
    cout << "\nLista pracownikow:\n";
    int i;
    for (i = 0; i < ct; i++)
    {
        cout << endl;
        lolas.dequeue(temp);
        temp->Show();
        delete temp;
    }

    cout << "Koniec";
    return 0;
}