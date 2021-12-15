#include <iostream>
#include "golf.h"
#include <cstring>
void setgolf(golf &g, const char *name, int hc)
{
    strcpy(g.fullname, name);
    g.handicap = hc;
}
int setgolf(golf &g)
{
    using namespace std;
    cout << "Podaj nazwisko: ";
    cin.get();
    char temp[Len];
    cin.getline(temp, Len);
    strcpy(g.fullname, temp);
    if (g.fullname[0] == '\0')
        return 0;
    cout << "Podaj handicap: ";
    cin >> g.handicap;
    
        return 1;
}
void handicap(golf &g, int hc)
{

    g.handicap = hc;
}
void showgolf(const golf &g)
{
    using namespace std;
    cout << "Nazwisko: " << g.fullname << endl;
    cout << "Handicap: " << g.handicap << endl;
}
