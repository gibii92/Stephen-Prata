#include <iostream>
#include <array>
#include <string>

const int Seasons = 4;

const char * SSnames [Seasons] = {"Wiosna","Lato","Jesien","Zima"};

void fill(double expenses[], int Seasons);
void show(double expenses[], int Seasons);
int main()
{
    double expenses[Seasons];
    fill(expenses, Seasons);
    show(expenses, Seasons);
    return 0;
}
void fill(double expenses[], int Seasons)
{
    using namespace std;
    for(int i = 0;i<Seasons; i++)
    {
        cout<<"Podaj wydatki za okres >>"<< SSnames[i]<<"<<: ";
        cin>>expenses[i];
    }
}
void show(double expenses[], int Seasons)
{
    using namespace std;
    double total = 0.0;
    cout<<"\nWydatki\n";
    for(int i = 0;i<Seasons;i++)
    {
        cout<<SSnames[i]<<": "<<expenses[i]<<" zl"<<endl;
        total+=expenses[i];
    }
    cout<<"Lacznie wydatki roczne: "<< total<<" zl"<<endl;
}