#include <iostream>
long double probability(unsigned numbers, unsigned picks, unsigned powerball);
int main()
{
    using namespace std;
    double total, choices, powerball;
    cout<<"Podaj najwieksza liczbe jaka mozna wybrac, liczbe skreslen oraz maksymalna wartosc powerball:\n";
    while((cin>>total>>choices>>powerball) && choices <=total)
    {
        cout<<"Szansa wygranej to jeden do ";
        cout<<probability(total, choices, powerball);
        cout<<".\n";
        cout<<"Nastepne trzy liczby (q, aby zakonczyc): ";
    }
    cout<<"Do widzenia\n";
    return 0;
}
long double probability(unsigned numbers, unsigned picks, unsigned powerball)
{
    long double result = 1.0;
    long double n;
    unsigned p;
    for(n = numbers, p= picks;p>0;n--,p--)
    result = result *n /p;
    return result*(1.0/powerball);
}