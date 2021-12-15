#include <iostream>
#include "file.cpp"
using namespace std;

int main()
{
    Move obiekt_1(10,20);
    Move obiekt_2(30,40);
    obiekt_1.showmove();
    obiekt_2.showmove();
    Move obiekt_3 = obiekt_1.add(obiekt_2);
    obiekt_3.showmove();
    obiekt_1.reset(100,100);
    obiekt_1.showmove();
    return 0;
}
