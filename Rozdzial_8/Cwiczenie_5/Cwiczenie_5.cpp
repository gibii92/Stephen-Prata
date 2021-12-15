#include <iostream>
using namespace std;
template <class AnyType>
AnyType Funkcja(AnyType a[]);
int main()
{
    int tablica1[5] = {1,2,3,4,5};
    cout<<Funkcja(tablica1)<<endl;
    double tablica2[5] = {1.2,1.1,1.3,1.4,1.5};
    cout<<Funkcja(tablica2)<<endl;
    return 0;
}
template <class AnyType>
AnyType Funkcja(AnyType a[])
{
    AnyType temp =a[0];
    for(int i =1;i<5;i++)
    if(a[i]>temp)
        temp=a[i];
    return temp;
}