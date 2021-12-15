#include <iostream>
using namespace std;
double funkcja_1(double Celcjusz);
int main()
{
    cout<<"Podaj temperature w stopniach Celcjusza: ";
    double Celcjusz;
    cin>>Celcjusz;
    cout<<Celcjusz<<" stopnie Celcjusza to "<<funkcja_1(Celcjusz)<<" stopnie Fahrenheita.";
    return 0;
}
double funkcja_1(double Celcjusz)
{
    return Celcjusz*1.8+32;

}