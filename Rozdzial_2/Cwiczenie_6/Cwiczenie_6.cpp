#include <iostream>
using namespace std;
double funkcja_1(double Lata_Swietlne);
int main()
{
    cout<<"Podaj liczbe lat swietlnych: ";
    double Lata_Swietlne;
    cin>>Lata_Swietlne;
    cout<<Lata_Swietlne<<" lat swietlnych =  "<<funkcja_1(Lata_Swietlne)<<" jednostek astronomicznych.";
    return 0;
}
double funkcja_1(double Lata_Swietlne)
{
    return Lata_Swietlne*63240;
}