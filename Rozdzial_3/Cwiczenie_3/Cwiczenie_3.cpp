#include <iostream>
using namespace std;
int main()
{   
    int minuty_na_sekundy= 60;
    int stopnie_na_minuty=60;
    cout<<"Podaj dlugosc w stopniahc, minutach i sekundach:\n";
    cout<<"Najpierw podaj stopnie: ";
    int stopnie;
    cin>>stopnie;
    cout<<"Nastepnie podaj minuty stopnia luku: ";
    int minuty;
    cin>>minuty;
    cout<<"Na koniec podaj sekundy luku: ";
    int sekundy;
    cin>>sekundy;
    double wynik;
    wynik=stopnie+(1.0*minuty/stopnie_na_minuty)+(1.0*sekundy/minuty_na_sekundy/stopnie_na_minuty);
    cout<<stopnie<<" stopni, "<<minuty<<" minut, "<<sekundy<<" sekund = "<<wynik<<" stopni"<<endl;
    return 0;
}
