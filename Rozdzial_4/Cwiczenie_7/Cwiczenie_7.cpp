#include <iostream>
#include <string>
using namespace std;
struct Pizza
{
    string firma;
    double srednica;
    double waga;
};
int main()
{   
    Pizza snack;
    cout<<"Podaj nastepujace dane:"<<endl;
    cout<<"Firma: ";
    getline(cin, snack.firma);
    cout<<"Srednica: ";
    cin>>snack.srednica;
    cout<<"Waga: ";
    cin>>snack.waga;
    cout<<"Firma: "<<snack.firma<<endl;
    cout<<"Srednica: "<<snack.srednica<<endl;
    cout<<"Waga: "<<snack.waga<<endl;
    return 0;
}