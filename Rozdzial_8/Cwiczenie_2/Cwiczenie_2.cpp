#include <iostream>
#include<cstring>
using namespace std;
struct Batonik{
    char name[10];
    double weight;
    int calories;
};
void funkcja_a(Batonik & a, char * b = "Millenium Munch", double c=2.85, int d =350);
void show(const Batonik & a);
int main()
{
    Batonik nowa;
    funkcja_a(nowa, "Szymon", 3.12);
    show(nowa);
    return 0;
}
void funkcja_a(Batonik & a, char * b , double c, int d)
{
    a.calories = d;
    a.weight = c;
   strcpy(a.name, b);
}
void show(const Batonik & a)
{
    cout<<a.name<<endl;
    cout<<a.weight<<endl;
    cout<<a.calories<<endl;
}