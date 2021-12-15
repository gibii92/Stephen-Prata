#include <iostream>
#include <string>
using namespace std;
struct Batonik
{
    string marka;
    double waga;
    int kalorie;
};
int main()
{
    Batonik snack[3] =
    {
        {"Moca Munch", 2.3,350},
        {"Poca Punch", 3.2,150},
        {"Boca Bunch", 3.3,250}
    };

    cout<<"Indeks: 1"<<endl;
    cout<<"Marka: "<<snack[0].marka<<endl;
    cout<<"Waga: "<<snack[0].waga<<endl;
    cout<<"Kalorie: "<<snack[0].kalorie<<endl;
    cout<<"Indeks: 2"<<endl;
    cout<<"Marka: "<<snack[1].marka<<endl;
    cout<<"Waga: "<<snack[1].waga<<endl;
    cout<<"Kalorie: "<<snack[1].kalorie<<endl;
    cout<<"Indeks: 3"<<endl;
    cout<<"Marka: "<<snack[2].marka<<endl;
    cout<<"Waga: "<<snack[2].waga<<endl;
    cout<<"Kalorie: "<<snack[2].kalorie<<endl;
    return 0;
}