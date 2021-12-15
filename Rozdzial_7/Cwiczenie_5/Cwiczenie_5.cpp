#include <iostream>
using namespace std;
int silnia(int n);
int main()
{
    cout<<"Podaj wartosc dla ktorej chcesz wyliczyc silnie: ";
    int n;
    while(cin>>n&&n>0)
    {
        cout<<"Silnia z liczby "<<n<<" wynosi "<<silnia(n)<<endl;
    }
    cout<<"Zakoncz";
    return 0;
}
int silnia(int n)
{
    if(n==1) return 1;
    else return n*silnia(n-1);
    
}