#include <iostream>
using namespace std;
double srednia_harmoniczna(double a, double b);
int main()
{
    cout<<"Podaj dwie liczby(podanie 0 zakonczy wprowadzanie)"<<endl;
    int a,b;
    while(cin>>a>>b&&a!=0&&b!=0)
    {
        cout<<"Srednia harmoniczna liczb "<<a<<" i "<<b<<" wynosi "<<srednia_harmoniczna(a,b)<<endl;
    }
    cout<<"Koniec"<<endl;
    return 0;
}
double srednia_harmoniczna(double a, double b)
{
    return (2.0*a*b)/(a+b);
}