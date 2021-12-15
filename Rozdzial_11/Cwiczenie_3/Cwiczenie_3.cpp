#include <iostream>
#include "file.cpp"
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    using VECTOR::Vector;
    srand(time(0));
    double direction;
    Vector step;
    cout << "Podaj ilosc prob: ";
    int n;
    cin >> n;
    Vector result[n];
    unsigned long steps = 0;
    double dstep = 20;
    double target = 100;
    unsigned long min , max, srednia = 0;
    cout << "Dystans do przejscia: " << target << ", dlugosc kroku: " << dstep << endl;
    for (int i = 0; i < n; i++)
    {
        
        while (result[i].magval() < target)
        {
            direction = rand() % 360;
            step.reset(dstep, direction, Vector::POL);
            result[i] = result[i] + step;
            steps++;
        }
        if(i==0)
        min=max=steps;
        srednia+=steps;
        if(steps<min)
            min = steps;
        if(steps    >max)
            max = steps;
        steps = 0;
            
    }
    srednia/=n;
    cout<<"Najmniejsza liczba krokow do osiagniecia celu: "<<min<<" krokow"<<endl;
    cout<<"Najwieksza liczba krokow do osiagniecia celu: "<<max<<" krokow"<<endl;
    cout<<"Srednia liczba krokow do osiagniecia celu: "<<srednia<<" krokow"<<endl;   
    cout << "Koniec!\n";
    cin.clear();
    while (cin.get() != '\n')
        continue;
    return 0;
}
