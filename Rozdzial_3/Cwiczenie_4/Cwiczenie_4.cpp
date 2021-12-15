#include <iostream>
using namespace std;

int main()
{
    const int godzin_w_dniu = 24;
    const int minut_w_godzinie = 60;
    const int sekund_w_minucie = 60;
    cout << "Podaj liczbe sekund: ";
    long sekundy;
    cin >> sekundy;
    cout << sekundy << " sekund = ";
    int dzien, godzina, minuta;
    dzien = sekundy / (sekund_w_minucie * minut_w_godzinie * godzin_w_dniu);
    sekundy -= dzien * (sekund_w_minucie * minut_w_godzinie * godzin_w_dniu);
    godzina = sekundy / (sekund_w_minucie * minut_w_godzinie);
    sekundy -= godzina * (sekund_w_minucie * minut_w_godzinie);
    minuta = sekundy / sekund_w_minucie;
    sekundy -= minuta * sekund_w_minucie;
    cout << dzien << " dni, " << godzina << "godzin, " << minuta << " minut, " << sekundy << " sekund" << endl;
    return 0;
}