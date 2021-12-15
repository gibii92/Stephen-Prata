#include <iostream>
#include "file.cpp"

int main(void)
{
    using namespace std;
    
    Stonewt tablica[6] = {10,20,30};
    int min =0, max=0;
    for(int i = 3;i<6;i++)
    {
        cout<<"Wartosc elementu o indeksie "<<i<<": ";
        double a;
        cin>>a;
        tablica[i]=a;
    }
    Stonewt temp(11, 0);
    int zlicz = 0;
    int i;
    for(i =0;i<6;i++)
    {
        if(tablica[i]<tablica[min])
            min=i;
        if(tablica[i]>tablica[max])
            max=i;
        if(tablica[i]>=temp)
        zlicz++;
    }
    cout<<"Indeks elementu o najnizszej wartosci: "<<min<<endl;
    cout<<"Indeks elementu o najwyzszej wartosci: "<<max<<endl;
    cout<<"Ilosc elementow o wartosci wyzszej niz 11 kamieni: "<<zlicz<<endl;
    

    return 0;
}