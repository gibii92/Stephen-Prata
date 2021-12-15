#include <iostream>
using namespace std;
int main()
{
    cout<<"Podaj wzrost w cm: ";
    int cm, stopy, cale;
    cin>>cm;
    const double cal = 2.54;
    stopy= cm/cal/12;
    cale=(int) (cm / cal) % 12;
    cout << "Twój wzrost w stopach i calach wynosi " << stopy << "_" << cale;
    return 0;
}