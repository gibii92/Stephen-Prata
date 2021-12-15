#include <iostream>
using namespace std;
int main()
{
    const double cal_na_metr = 0.0254;
    const double funt_na_kilogram = 2.2;
    double BMI;
    cout << "Podaj wzrost w stopach: ";
    int stopy;
    cin >> stopy;
    cout << "Reszta w calach: ";
    int cale;
    cin >> cale;
    cout << "Podaj wage w funtach: ";
    int funty;
    cin >> funty;
    BMI = (funty / funt_na_kilogram) / (((stopy * 12 + cale) * cal_na_metr) * (stopy * 12 + cale) * cal_na_metr);
    cout << "Twoje BMI wynosi: " << BMI;
    return 0;
}