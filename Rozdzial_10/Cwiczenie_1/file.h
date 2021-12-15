#ifndef file_h_
#define file_h_
#include <string>
class Bank
{
    private:
    std::string nazwisko;
    std::string numer_konta;
    double stan_konta;
    public:
    Bank();
    void wyswietl() const;
    void wplac();
    void wyplac();
};

#endif