#include <iostream>
#include "file.cpp"
using namespace std;

int main()
{
    double tablica[4] = {1.0, 3.2, 4.1, 3.2};
    SALES::Sales nowa(tablica, 4);
    nowa.showSales();   
    SALES::Sales obiekt2;
    obiekt2.setSales();
    obiekt2.showSales();   
    return 0;
}
