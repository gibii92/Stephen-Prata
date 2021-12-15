#include <iostream>
#include "file.h"
Wine::Wine() : name("Brak"), years(0)
{
    data.first().resize(years);
    data.second().resize(years);
}
Wine::Wine(const char *l, int y, const int yr[], const int bot[])
{
    name = l;
    years = y;
    data.first().resize(years);
    data.second().resize(years);
    for (int i = 0; i < years; i++)
    {
        data.first()[i] = yr[i];
        data.second()[i] = bot[i];
    }
}
Wine::Wine(const char *l, int y)
{
    name = l;
    years = y;
    data.first().resize(years);
    data.second().resize(years);

}
void Wine::GetBottles()
{
    cout<<"Podaj dane dla "<<name<<"\n";
    int input;
    for(int i =0;i<years;i++)
    {
        cout<<"Wprowadz rocznik: ";
        cin>>input;
        data.first()[i] = input;
        cout<<"Wprowadz liczbe butelek: ";
        cin>>input;
        data.second()[i] = input;
        
    }
}
const string &Wine::Label() const
{
    return name;
}
int Wine::Sum()
{
    int temp =0;
    for(int i =0;i<years;i++)
    temp += data.second()[i];
    return temp;

}
void Wine::Show() const
{
    cout<<"Wino: "<<name<<endl;
    cout<<"\tRocznik\tButelki\n";
    for(int i =0;i<years;i++)
    cout<<"\t"<<data.first()[i]<<"\t"<<data.second()[i]<<endl;
}