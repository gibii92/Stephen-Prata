#include <iostream>
#include "file.h"

using namespace SALES;
Sales::Sales(){}
Sales::Sales(const double ar[], int n)
{
    average = 0;
    average += ar[0];
    min = ar[0];
    max = ar[0];
    for (int i = 1; i < n; i++)
    {
        average += ar[i];
        if (ar[i] < min)
            min = ar[i];
        if (ar[i] > min)
            max = ar[i];
    }
    average /= 4;
    sales[0] = min;
    sales[1] = sales[2] = sales[3] = 0;
    
}
void Sales::setSales()
{
    using std::cin;
    using std::cout;
    double tablicaaaa[4];
    for (int i = 0; i < 4; i++)
    {
        cout << "Sales " << i + 1 << ": ";
        cin >> tablicaaaa[i];
    }
    Sales nowy(tablicaaaa, 4);
    *this  = nowy;
    
}
void Sales::showSales() const
{
    using std::cout;
    using std::endl;
    for (int i = 0; i < 4; i++)
        cout << "Sales " << i + 1 << " " << sales[i] << endl;
    cout << "Min: " << min << endl;
    cout << "Max: " << max << endl;
    
    
    std::cout<<"Average: " <<average << endl;
}