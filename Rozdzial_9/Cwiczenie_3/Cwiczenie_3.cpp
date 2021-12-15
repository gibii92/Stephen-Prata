#include <iostream>
#include <new>
#include <string.h>
using namespace std;
struct chaff
{
    char dross[20];
    int slag;
};
int main()
{
    char buffer1[200];
    chaff * p1 = new(buffer1) chaff[2];
    chaff * p2 = new chaff[2];
    strcpy(p1[0].dross,"Szymon");
    strcpy(p1[1].dross,"Szymon");
    p1[0].slag = 10;
    p1[1].slag = 10;

     for(int i = 0;i<2;i++)
    {
        cout<<"Dross: "<<p1[i].dross<<endl;
        cout<<"Slag: "<<p1[i].slag<<endl;      
    }
    delete [] p1;
    delete [] p2;
    return 0;
}