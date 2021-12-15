#include <iostream>
using namespace std;
#include<string>
int main()
{  
    int liczba, suma=0; 
    string miesiace[12] = {"styczen","luty","marzec","kwiecien","maj","czerwiec","lipiec","sierpien","wrzesien","pazdziernik","listopad","grudzien"};
    for(int i =0;i<12;i++)
        {
            cout<<miesiace[i]<<": ";
            cin>>liczba;
            suma+=liczba; 
        }
    cout<<"Roczna liczba sprzedanych ksiazek: "<<suma<<endl;
    return 0;
}