#include <iostream>
#include <cstring>
#include "file.h"
Stock::Stock()
{
    len = 4;
    str = new char[1];
    str[0] = '\0';
    shares = 0;
    share_val = 0.0;
    total_val = 0.0;
}
Stock::Stock(const char *s, long n, double pr)
{
    len = std::strlen(s);
    str = new char[len + 1];
    std::strcpy(str, s);

    if (n < 0)
    {
        std::cout << "Liczba udzialow nie moze byc ujemna; ustalam liczbe udzialow w " << str << " na 0.\n";
        shares = 0;
    }
    else
        shares = n;
    share_val = pr;
    set_tot();
}
Stock::Stock(const Stock & st)
{
    len = st.len;
    str = new char [len+1];
    std::strcpy(str, st.str);
}
Stock::~Stock()
{
    delete [] str;
}
Stock & Stock::operator=(const Stock & st)
{
    if(this ==&st)
    return *this;
    delete [] str;
    len = st.len;
    str = new char[len+1];
    std::strcpy(str, st.str);
    return *this;
}
Stock & Stock::operator=(const char *s)
{
delete [] str;
len = std::strlen(s);
str = new char[len+1];
std::strcpy(str,s);
return *this;
}
void Stock::buy(long num, double price)
{
    if (num < 0)
    {
        std::cout << "Liczba udzialow nie moze byc ujemna; Transakcja przerwana \n";
    }
    else
    {
        shares += num;
        share_val = price;
        set_tot();
    }
}
void Stock::sell(long num, double price)
{
    if (num > 0)
        std::cout << "Liczba udzialow nie moze byc ujemna; Transakcja przerwana \n";
    else if (num > shares)
        std::cout << "Nie mozesz sprzedac wiecej udzialow niz posiadasz; Transakcja przerwana \n";
    else
    {
        shares -= num;
        share_val = price;
        set_tot();
    }
}
void Stock::update(double price)
{
    share_val = price;
    set_tot();
}
void Stock::show() const
{
    using std::cout;
    using std::ios_base;
    ios_base::fmtflags orig = cout.setf(ios_base::fixed, ios_base::floatfield);
    std::streamsize prec = cout.precision(3);
    cout << "Spolka " << str << " Liczba udzialow: " << shares << " Cena udzialu: " << share_val << " zl";
    cout.precision(2);
    cout << " Laczna wartosc udzialow: " << total_val << " zl" << '\n';
    cout.setf(orig, ios_base::floatfield);
    cout.precision(prec);
}
const Stock &Stock::topval(const Stock &s) const
{
    if (s.total_val > total_val)
        return s;
    else
        return *this;
}
ostream & operator<<(ostream & os, const Stock & st)
{
    using std::ios_base;
    ios_base::fmtflags orig = os.setf(ios_base::fixed, ios_base::floatfield);
    std::streamsize prec = os.precision(3);
    os << "Spolka " << st.str << " Liczba udzialow: " <<st.shares << " Cena udzialu: " << st.share_val << " zl";
    os.precision(2);
    os << " Laczna wartosc udzialow: " << st.total_val << " zl" << '\n';
    os.setf(orig, ios_base::floatfield);
    os.precision(prec);
    return os;
}