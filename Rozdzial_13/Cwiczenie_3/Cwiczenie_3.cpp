#include <iostream>
#include "file.cpp"
#include <string>
using namespace std;
const int CLIENTS = 4;
int main()
{
    abcDMA *p_clients[CLIENTS];

    int t_rating;
    int kind;
    for (int i = 0; i < CLIENTS; i++)
    {

        char t_label[50];
        char t_color[50];
        char t_style[50];
        cout << "Label: ";
        cin.getline(t_label, 50);

        cout << "Rating: ";
        cin >> t_rating;

        cout << "Podaj 1 dla konta baseDMA, 2 dla konta lacksDMA lub 3 dla konta hasDMA: ";
        cin >> kind;
        cin.get();
        switch (kind)
        {
        case 1:
            p_clients[i] = new baseDMA(t_label, t_rating);
            break;
        case 2:

            cout << "Color: ";
            cin.getline(t_color, 50);
            p_clients[i] = new lacksDMA(t_color, t_label, t_rating);
            break;

        case 3:

            cout << "Style: ";
            
            cin.getline(t_style, 50);
            p_clients[i] = new hasDMA(t_style, t_label, t_rating);
            break;

        default:

            p_clients[i] = new baseDMA(t_label, t_rating);
            break;
        }
    }
    cout << endl;
    for (int i = 0; i < CLIENTS; i++)
    {
        p_clients[i]->View();
        cout << endl;
    }
    for (int i = 0; i < CLIENTS; i++)
    {
        delete p_clients[i];
    }
    cout << "Gotowe" << endl;

    return 0;
}
