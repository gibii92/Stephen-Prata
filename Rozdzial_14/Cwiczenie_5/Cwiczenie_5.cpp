#include <iostream>
#include "file.cpp"
using namespace std;
int main(void)
{
    employee em("Tadeusz", "Hubert", "Sprzedawca");
    cout << em << endl;
    em.ShowAll();
    cout<<endl;
    manager ma("Amforiusz", "Smoczewski", "Malarz", 5);
    cout << ma << endl;
    ma.ShowAll();
    cout<<endl;
    fink fi("Maurycy", "Okulski", "Hydraulik", "Julian Bar");
    cout << fi << endl;
    fi.ShowAll();
    cout<<endl;
    highfink hf(ma, "Jan Kudlaty");
    hf.ShowAll();
    cout<<endl;
    cout << "Wcisnij dowolny przycisk, aby przejsc do nastepnego etapu:\n";
    cin.get();
    highfink hf2;
    hf2.SetAll();
    cout << "Uzywa wskaznika abstr_emp *:\n";
    abstr_emp *tri[4] = {&em, &fi, &hf, &hf2};
    for (int i = 0; i < 4; i++)
        tri[i]->ShowAll();
    return 0;
}