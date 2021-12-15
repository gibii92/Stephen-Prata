#include <iostream>
using namespace std;
#include <cstring>
struct stringy {
    char * str;
    int ct;
};
//////////////
void set(stringy & a, char  b[]);
void show(const stringy & a, int b = 1);
void show(const char  a[], int b = 1);
int main()
{
    stringy beany;
    char testing[] = "Rzeczywistosc to juz nie to, co kiedys.";
    set(beany, testing);
    show(beany);
    show(beany, 2);
    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);
    show(testing, 3);
    show("Gotowe!");
    return 0;
}
void set(stringy & a, char b[])
{
    char * temp = new char[strlen(b)+1];
    strcpy(temp, b);
    a.str=temp;
    a.ct=strlen(b);
}
void show(const stringy & a, int b )
{
    for(int i = 0;i<b;i++)
    {cout<<"Lancuch: "<<a.str<<endl;}
}
void show(const char  a[], int b )
{
    for(int i = 0;i<b;i++)
    {cout<<"Lancuch: "<<a<<endl;}
}