/*Napisz program, który będzie pytał ile mil przejechano i ile galonów benzyny zużyto, a następnie wypisze ile samochód może przejechać mil na jednym galonie*/
#include <iostream>
using namespace std;

int main()
{
    cout<<"Ile mil przejechano? ";
    double mila;
    cin>>mila;
    cout<<"Ile galonow zuzyto? ";
    double galon;
    cin>>galon;
    cout<<"Na jednym galonie mozna przejechac "<<mila/galon<<" mil.";
    return 0;
}
