#include <iostream>
#include <string.h>
using namespace std;
template <class AnyType>
AnyType Funkcja(const AnyType a[], int n);
template<> const char * Funkcja(const char * const tablica [], int n);
int main()
{
    int tablica1[5] = {1,2,3,4,5};
    cout<<Funkcja(tablica1,5)<<endl;
    double tablica2[5] = {1.2,1.1,1.3,1.4,1.5};
    cout<<Funkcja(tablica2, 4)<<endl;
    const char * tablica3[5] ={"Szymon","Konrad","Weronika", "Karolina","Kasia"};
    cout<<Funkcja(tablica3, 5)<<endl;
    return 0;
}
template <class AnyType>
AnyType Funkcja(const AnyType a[], int n)
{
    AnyType temp =a[0];
    for(int i =1;i<n;i++)
    if(a[i]>temp)
        temp=a[i];
    return temp;
}
template<> const char * Funkcja(const char * const tablica [], int n)
{
    const char * temp = tablica[0];
for(int i =1;i<n;i++)
    if(strlen(tablica[i])>strlen(temp))
        temp=tablica[i];
    return temp;
}