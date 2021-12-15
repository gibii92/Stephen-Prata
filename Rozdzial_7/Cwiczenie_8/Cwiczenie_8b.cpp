#include <iostream>
#include <array>
#include <string>
const int Seasons = 4;
struct s_expenses
{
    double d_expenses[Seasons];
}; 


const char * SSnames [Seasons] = {"Wiosna","Lato","Jesien","Zima"};

void fill(s_expenses * struktura, int Seasons);
void show(s_expenses struktura, int Seasons);
int main()
{
    s_expenses nowa;
    fill(&nowa, Seasons);
    show(nowa, Seasons);
    return 0;
}
void fill(s_expenses * struktura, int Seasons)
{
    using namespace std;
    for(int i = 0;i<Seasons; i++)
    {
        cout<<"Podaj wydatki za okres >>"<< SSnames[i]<<"<<: ";
        cin>>struktura->d_expenses[i];
    }
}
void show(s_expenses struktura, int Seasons)
{
    using namespace std;
    double total = 0.0;
    cout<<"\nWydatki\n";
    for(int i = 0;i<Seasons;i++)
    {
        cout<<SSnames[i]<<": "<<struktura.d_expenses[i]<<" zl"<<endl;
        total+=struktura.d_expenses[i];
    }
    cout<<"Lacznie wydatki roczne: "<< total<<" zl"<<endl;
}