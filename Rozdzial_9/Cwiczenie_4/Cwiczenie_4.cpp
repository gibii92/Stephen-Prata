#include <iostream>
#include "file.cpp"
using namespace std;

int main()
{
    double tablica[4] = {1.0, 3.2, 4.1, 3.2};
    SALES::Sales nowa;
    SALES::setSales(nowa, tablica, 4);
    SALES::showSales(nowa);
    SALES::Sales nowa2;
    SALES::setSales(nowa2);
    SALES::showSales(nowa2);
    return 0;
}
