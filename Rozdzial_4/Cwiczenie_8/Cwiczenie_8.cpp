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
    Pizza * snack = new Pizza;
    cout<<"Podaj nastepujace dane:"<<endl;
    cout<<"Srednica: ";
    cin>>snack->srednica;
    cin.get();
    cout<<"Firma: ";
    getline(cin, snack->firma);
    
    cout<<"Waga: ";
    cin>>snack->waga;
    cout<<"Firma: "<<snack->firma<<endl;
    cout<<"Srednica: "<<snack->srednica<<endl;
    cout<<"Waga: "<<snack->waga<<endl;
    delete snack;
    return 0;
}