#include <iostream>
using namespace std;
void funkcja_1();
void funkcja_2();
int main()
{
    funkcja_1();
    funkcja_1();
    funkcja_2();
    funkcja_2();
    return 0;
}
void funkcja_1()
{
    cout<<"Entliczek pentliczek\n";
}
void funkcja_2()
{
    cout<<"Czerwony stoliczek\n";
}