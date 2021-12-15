#include <iostream>
#include <string>
using namespace std;
struct Batonik
{
    string marka;
    double waga;
    int kalorie;
} snack = {
    "Mocha Munch", 2.3, 350};
int main()
{
    cout<<"Marka: "<<snack.marka<<endl;
    cout<<"Waga: "<<snack.waga<<endl;
    cout<<"Kalorie: "<<snack.kalorie<<endl;
    return 0;
}