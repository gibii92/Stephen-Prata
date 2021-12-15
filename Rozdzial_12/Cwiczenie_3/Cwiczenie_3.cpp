#include <iostream>
#include "file.cpp"
const int STKS = 4;
int main()
{
    Stock stocks[STKS] = {
        Stock("Nano", 12,20.0),
        Stock("Burak", 200,2.0),
        Stock("Gruz",130,3.25),
        Stock("Futro",60,6.5)
    };
    std::cout<<"Portfel inwestycyjny:\n";
    int st;
    for(st=0;st<STKS;st++)
    stocks[st].show();
    for(st=0;st<STKS;st++)
    std::cout<<stocks[st];
    const Stock * top = &stocks[0];
    for(st = 0; st<STKS;st++)
    top = &top->topval(stocks[st]);
    std::cout<<"\nNajbardziej wartosciowy pakiet:\n";
    top->show();
    return 0;
}