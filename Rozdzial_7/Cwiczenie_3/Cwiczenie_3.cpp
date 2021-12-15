#include <iostream>
using namespace std;
struct pudlo
{
    char producent[40];
    float wysokosc;
    float szerokosc;
    float dlugosc;
    float objetosc;
};
void wyswietl(pudlo a);
void oblicz_objetosc(pudlo * a);
int main()
{
    pudlo nowe = {"Szymon", 10, 10, 10};
    wyswietl(nowe);
    oblicz_objetosc(&nowe);
    wyswietl(nowe);
    return 0;
}
void wyswietl(pudlo a)
{
    cout<<"Producent: "<<a.producent<<endl;
    cout<<"Wysokosc: "<<a.wysokosc<<endl;
    cout<<"Szerokosc: "<<a.szerokosc<<endl;
    cout<<"Dlugosc: "<<a.dlugosc<<endl;
    cout<<"Objetosc: "<<a.objetosc<<endl;
}
void oblicz_objetosc(pudlo * a)
{
    a->objetosc=a->dlugosc*a->szerokosc*a->wysokosc;
}