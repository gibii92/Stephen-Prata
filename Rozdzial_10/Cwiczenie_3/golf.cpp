#include <iostream>
#include "golf.h"
#include <cstring>
golf::golf(){}
golf::golf(const char *name, int hc)
{
    strcpy(fullname, name);
    handicap = hc;
}
void golf::setgolf()
{
    using namespace std;
    cout << "Podaj nazwisko: ";
    cin.get();
    char temp[Len];
    cin.getline(temp, Len);
    cout << "Podaj handicap: ";
    int temp_handicap;
    cin >> temp_handicap;
    golf nowy(temp, temp_handicap);
    *this = nowy;
}
void golf::sethandicap(int hc)
{
    handicap = hc;
}
void golf::showgolf() const
{
    using namespace std;
    cout << "Nazwisko: " << fullname << endl;
    cout << "Handicap: " << handicap << endl;
}
