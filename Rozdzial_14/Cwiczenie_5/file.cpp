#include "file.h"
#include <iostream>
using namespace std;
abstr_emp::~abstr_emp() {}
abstr_emp::abstr_emp() : fname("Brak"), lname("Brak"), job("Brak")
{
}
abstr_emp::abstr_emp(const std::string &fn, const std::string &ln, const std::string &j) : fname(fn), lname(ln), job(j)
{
}
void abstr_emp::ShowAll() const
{
    cout << "Imie: " << fname << endl;
    cout << "Nazwisko: " << lname << endl;
    cout << "Zawod: " << job << endl;
}
void abstr_emp::SetAll()
{
    cout << "Imie: ";
    getline(cin, fname);
    cout << "Nazwisko: ";
    getline(cin, lname);
    cout << "Zawod: ";
    getline(cin, job);
}
std::ostream &operator<<(std::ostream &os, const abstr_emp &e)
{
    os << e.fname << " " << e.lname;
    return os;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
employee::employee() : abstr_emp()
{
}
employee::employee(const std::string &fn, const std::string &ln, const std::string &j) : abstr_emp(fn, ln, j)
{
}
void employee::ShowAll() const
{
    abstr_emp::ShowAll();
}
void employee::SetAll()
{
    abstr_emp::SetAll();
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
manager::manager() : abstr_emp(),inchargeof(0)
{
}
manager::manager(const std::string &fn, const std::string &ln, const std::string &j, int ico) : abstr_emp(fn, ln, j), inchargeof(ico)
{
}
manager::manager(const abstr_emp &e, int ico) : abstr_emp(e), inchargeof(ico)
{
}
manager::manager(const manager &m) : abstr_emp(m),inchargeof(m.inchargeof)
{

}
void manager::ShowAll() const
{

    abstr_emp::ShowAll();
    cout << "Liczba obiektow abstr_emp ktorymi zarzadza: " << InChargeOf() << endl;
}
void manager::SetAll()
{
    abstr_emp::SetAll();
    cout << "Liczba obiektow abstr_emp ktorymi zarzadza: ";
    cin >> InChargeOf();
}
/////////////////////////////////////////////////////////////////////////////////////////////////
fink::fink() : abstr_emp(),reportsto("Brak")
{
}
fink::fink(const std::string &fn, const std::string &ln, const std::string &j, const std::string &rpo) : abstr_emp(fn, ln, j), reportsto(rpo)
{
}
fink::fink(const abstr_emp &e, const std::string &rpo) : abstr_emp(e), reportsto(rpo)
{
}
fink::fink(const fink &e) : abstr_emp(e),reportsto(e.reportsto)
{
}
void fink::ShowAll() const
{
    abstr_emp::ShowAll();
    cout << "Do kogo przesyla raport: " << ReportsTo() << endl;
}
void fink::SetAll()
{
    abstr_emp::SetAll();
    cout << "Do kogo przesyla raport: ";
    getline(cin, ReportsTo());
}
////////////////////////////////////////////////////////////////////////////////////////////////////
highfink::highfink() : abstr_emp(), manager(), fink()
{
}
highfink::highfink(const std::string &fn, const std::string &ln, const std::string &j, const std::string &rpo, int ico) : abstr_emp(fn, ln, j), manager(fn, ln, j, ico), fink(fn, ln, j, rpo)
{
}
highfink::highfink(const abstr_emp &e, const std::string &rpo, int ico) : abstr_emp(e), manager(e, ico), fink(e, rpo)
{
}
highfink::highfink(const fink &f, int ico) : abstr_emp(f), fink(), manager(f, ico)
{
}
highfink::highfink(const manager &m, const std::string &rpo) : abstr_emp(m), manager(m), fink(m, rpo)
{
}
highfink::highfink(const highfink &h) : abstr_emp(h), manager(h), fink(h)
{
}
void highfink::ShowAll() const
{
    abstr_emp::ShowAll();
    cout << "Liczba obiektow abstr_emp ktorymi zarzadza: " << InChargeOf() << endl;
    cout << "Do kogo przesyla raport: " << ReportsTo() << endl;
}
void highfink::SetAll()
{
    abstr_emp::SetAll();
    cout << "Liczba obiektow abstr_emp ktorymi zarzadza: ";
    cin >> InChargeOf();
    cout << "Do kogo przesyla raport: ";
    cin >> ReportsTo();
}