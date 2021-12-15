#include <iostream>
#include "file.cpp"
#include <string>
using namespace std;
const int CLIENTS = 4;
int main()
{
    abcDMA *p_clients[CLIENTS];
    char t_label[50];
    int t_rating;
    char t_color[50];
    char t_style[50];
    int kind;
    for (int i = 0; i < CLIENTS; i++)
    {
        cout << "Klient nr " << i + 1 << endl;
        cout << "Label: ";
        cin.getline(t_label, 50);
        cout << "Rating: ";
        cin >> t_rating;
        cout << "Wpisz 1 dla baseDMA, 2 dla lacksDMA lub 3 dla hasDMA: ";
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
            p_clients[i] = new lacksDMA(t_style, t_label, t_rating);
            break;
        default:
            p_clients[i] = new baseDMA(t_label, t_rating);
            break;
        }
        cout << endl;
        
    }
    for (int i = 0; i < CLIENTS; i++)
        {
            p_clients[i]->View();
            cout << endl;
        }
        for (int i = 0; i < CLIENTS; i++)
            delete p_clients[i];
    return 0;
}
