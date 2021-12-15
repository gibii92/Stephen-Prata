#include <iostream>
using namespace std;
#include "file.cpp"
int main()
{
    Cow test1;
    test1.ShowCow();
    Cow test2("Piotr", "Sport",30.5);
    test2.ShowCow();
    Cow test3 = test2;
    test3.ShowCow();
    Cow test4;
    test4 = test2;
    test4.ShowCow();
    cout<<"\nGotowe\n";
    return 0;
}