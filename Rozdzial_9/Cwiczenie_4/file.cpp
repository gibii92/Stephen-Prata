#include <iostream>
#include "file.h"
void SALES::setSales(Sales &s, const double ar[], int n)
{
    s.average += ar[0];
    s.min = ar[0];
    s.max = ar[0];
    for (int i = 1; i < n; i++)
    {
        s.average += ar[i];
        if (ar[i] < s.min)
            s.min = ar[i];
        if (ar[i] > s.min)
            s.max = ar[i];
    }
    s.average /= 4;
    s.sales[0] = s.min;
    s.sales[1] = s.sales[2] = s.sales[3] = 0;
    
}
void SALES::setSales(Sales &s)
{
    using std::cin;
    using std::cout;
    double tablicaaaa[4];
    for (int i = 0; i < 4; i++)
    {
        cout << "Sales " << i + 1 << ": ";
        cin >> tablicaaaa[i];
    }
    SALES::setSales(s, tablicaaaa, 4);
    
}
void SALES::showSales(const Sales &s)
{
    using std::cout;
    using std::endl;
    for (int i = 0; i < 4; i++)
        cout << "Sales " << i + 1 << " " << s.sales[i] << endl;
    cout << "Min: " << s.min << endl;
    cout << "Max: " << s.max << endl;
    cout << "Average: " << s.average << endl;
}