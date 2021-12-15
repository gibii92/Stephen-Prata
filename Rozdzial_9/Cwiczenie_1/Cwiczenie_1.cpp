#include <iostream>
#include "golf.cpp"
using namespace std;
int main()
{
    
    golf ann;
    setgolf(ann, "Ann Birdfree", 24);
    showgolf(ann);
    cout<<"Podaj ilosc zawodnikow do wprowadzenia: ";
    int ilu;
    cin>>ilu;
    golf andy[ilu];
    int i;
    for(i = 0;i<ilu;i++)
    {
        if(setgolf(andy[i])==0)
        break;
    }
    for(int j = 0;j<i;j++)
    showgolf(andy[j]);
    handicap(ann, 28);
    showgolf(ann);
    return 0;
}