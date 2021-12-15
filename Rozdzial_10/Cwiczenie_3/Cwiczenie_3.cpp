#include <iostream>
#include "golf.cpp"
using namespace std;
int main()
{
    
    golf ann("Ann Birdfree", 24);
    ann.showgolf();
    cout<<"Podaj ilosc zawodnikow do wprowadzenia: ";
    int ilu;
    cin>>ilu;
    golf andy[ilu];
    for(int j = 0;j<ilu;j++)
    andy[j].setgolf();
    ann.sethandicap(28);
    ann.showgolf();
    return 0;
}