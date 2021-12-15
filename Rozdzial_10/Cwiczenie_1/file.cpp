#include <iostream>
#include "file.h"
Bank::Bank()
{
    using namespace std;
    cout<<"Tworzenie profilu nowego klienta\n";
    cout<<"Prosze podac nazwisko:\n";
    getline(cin, nazwisko);
    cout<<"Prosze podac numer konta:\n";
    getline(cin, numer_konta);
    cout<<"Podaj wartosc rachunku:\n";
    cin>>stan_konta;
}
void Bank::wyswietl() const
{
    using namespace std;
    cout<<"Nazwisko: "<<nazwisko<<endl;
    cout<<"Numer konta: "<<numer_konta<<endl;
    cout<<"Wartosc rachunku: "<<stan_konta<<endl;
}
void Bank::wplac()
{
    using namespace std;
    cout<<"Jaka kwote chcesz wplacic?\n";
    double kwota;
    if(cin>>kwota&&kwota>0)
        stan_konta+=kwota;
    else
    cout<<"Niepoprawna wartosc\n";
}
void Bank::wyplac()
{
     using namespace std;
    cout<<"Jaka kwote chcesz wyplacic?\n";
    double kwota;
    if(cin>>kwota&&kwota<stan_konta)
        stan_konta-=kwota;
    else
    cout<<"Niepoprawna wartosc\n";
}