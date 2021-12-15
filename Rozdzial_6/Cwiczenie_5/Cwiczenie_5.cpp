#include <iostream>
using namespace std;
int main()
{
    cout << "Obliczanie podatku z twarpow.\n";
    cout << "Podaj kwote do odliczenia podatku: ";
    int twarp;
    double kwota;
    while (cin >> twarp && twarp > 0)
    {
        kwota = 0;
        if (twarp <= 5000)
        {
            cout << "Nie zaplacisz podatku.\n";
        }
        else if(twarp>5000&&twarp<=15000)
            cout<<"Zaplacisz "<<(twarp-5000)*0.10<<" podatku.\n";
             else if(twarp>15000&&twarp<=35000)
            cout<<"Zaplacisz "<<10000*0.10+(twarp-15000)*0.15<<" podatku.\n";
            else if(twarp>35000)
            cout<<"Zaplacisz "<<10000*0.10+20000*0.15+(twarp-35000)*0.2<<" podatku.\n";
        cout << "Podaj kwote do odliczenia podatku: ";
    }
    cout << "Koniec";   
    return 0;
}