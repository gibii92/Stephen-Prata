#include <iostream>
template<typename T>
void ShowArray(T arr[], int n);
template<typename T>
void ShowArray(T* arr[], int n);
template<typename T>
T SumArray(T arr[], int n);
template<typename T>
T SumArray(T* arr[], int n);
struct debts
{
    char name[50];
    double amount;
};
int main()
{
    using namespace std;
    int things[6] = {13,31,103,301,310,130};
    struct debts mr_E[3] =
    {
        {"Ima",2400.0},
        {"Ura", 1300.0},
        {"Iby", 1800.0}
    };
    double *pd[3];
    for(int i = 0;i<3;i++)
    pd[i] = &mr_E[i].amount;
    cout<<"Wyliczanie rzeczy pana E.:\n";
    ShowArray(things,6);
    cout<<"Wyliczanie dlugow pana E.:\n";
    ShowArray(pd,3);
    cout<<"Wyliczanie rzeczy pana E.:\n";
    cout<<SumArray(things,6)<<endl;
    cout<<"Wyliczanie dlugow pana E.:\n";
    cout<<SumArray(pd,3)<<endl;
    return 0;
    
}
template<typename T>
void ShowArray(T arr[], int n)
{
    using namespace std;
    cout<<"szablon A\n";
    for(int i =0;i<n;i++)
    cout<<arr[i]<<' ';
    cout<<endl;

}
template<typename T>
void ShowArray(T* arr[], int n)
{
using namespace std;
    cout<<"szablon B\n";
    for(int i =0;i<n;i++)
    cout<<* arr[i]<<' ';
    cout<<endl;
}
template<typename T>
T SumArray(T arr[], int n)
{
    T suma = 0;
    for(int i =0;i<n;i++)
    suma+=arr[i];
    return suma;
}
template<typename T>
T SumArray(T* arr[], int n)
{
    T suma = 0;
    for(int i =0;i<n;i++)
    suma+=*arr[i];
    return suma;
}