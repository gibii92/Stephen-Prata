#include <iostream>
using namespace std;

int main()
{
    cout<<"Podaj liczbe ludnosci swiata: ";
    long long l_swiata;
    cin>>l_swiata;
    cout<<"Podaj liczbe ludnosci Polski: ";
    long long l_Polski;
    cin>>l_Polski;
    cout<<"Populacja Polski stanowi "<<l_Polski*100.0/l_swiata<<"% populacji swiata.";
    return 0;
}
