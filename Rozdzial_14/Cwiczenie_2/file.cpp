#include <iostream>
#include "file.h"
Wine::Wine(const char *l, int y, const int yr[], const int bot[]) : std::string(l),PairArray(ArrayInt(y), ArrayInt(y))
{
    years=y;
    for (int i = 0; i < y; i++)
    {
        PairArray::first()[i] = yr[i];
        PairArray::second()[i] = bot[i];
    }
}
Wine::Wine(const char *l, int y) : std::string(l),PairArray(ArrayInt(y), ArrayInt(y))
{
    years=y;
    
}
void Wine::GetBottles()
{
    cout<<"Podaj dane dla "<<Wine::Label()<<"\n";
    int input;
    for(int i =0;i<years;i++)
    {
        cout<<"Wprowadz rocznik: ";
        cin>>input;
        PairArray::first()[i] = input;
        cout<<"Wprowadz liczbe butelek: ";
        cin>>input;
        PairArray::second()[i] = input;
        
    }
}
const string &Wine::Label() const
{
    return (const string &) *this;
}
int Wine::Sum()
{
    int temp =0;
    for(int i =0;i<years;i++)
    temp += PairArray::second()[i];
    return temp;

}
void Wine::Show() const
{
    cout<<"Wino: "<<Label()<<endl;
    cout<<"\tRocznik\tButelki\n";
    for(int i =0;i<years;i++)
    cout<<"\t"<<PairArray::first()[i]<<"\t"<<PairArray::second()[i]<<endl;
    
}