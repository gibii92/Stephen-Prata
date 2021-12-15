/*Zauważ, że 100 km to 62,14 mili i 1 galon to 3,785 litra. Zatem 19 mil na galon oznacza około 12,4 l/100 km, a 19 mil na litrze to około 3,27 l/100km, z kolei 27 mil na galon to około 8,7 l/100km.*/
#include <iostream>
using namespace std;

int main()
{
    cout<<"Ile litrow zuzywasz na 100km? ";
    double litr, wynik;
    cin>>litr;
    wynik= litr/3.785;
    cout<<"100km na "<<wynik<<" galonow\n";
    wynik=62.14/wynik;
    cout<<wynik<<" mil na 1 galon\n";
    
    return 0;
}