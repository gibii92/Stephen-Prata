#include <iostream>
using namespace std;

int main()
{   
    int rok = 1;
    double kapital_Dafne = 100;
    double kapital_Cleo = 100;
    while (kapital_Cleo<=kapital_Dafne)
    {
        kapital_Dafne += 0.10*100;
        kapital_Cleo += 0.05*kapital_Cleo;
        cout<<"Rok "<<rok<<"\t\tKapitak Dafne: "<<kapital_Dafne<<"\t\tKapital Cleo: "<<kapital_Cleo<<endl;
        rok++;
    }
    
    return 0;
}