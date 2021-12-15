#include <iostream>
#include "file.cpp"
using namespace std;

int main()
{
    Person one;
    Person two("Staszek");
    Person three("Jacek", "Placek");
    one.Show();
    cout<<endl;
    one.FormalShow();
    two.Show();
    cout<<endl;
    two.FormalShow();
    three.Show();
    cout<<endl;
    three.FormalShow();
    return 0;
}
