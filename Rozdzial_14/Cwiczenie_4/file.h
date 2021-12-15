#ifndef file_H_
#define file_H_
#include <string>
class Person
{
private:
    std::string imie;
    std::string nazwisko;

protected:
    virtual void Data() const;
    virtual void Get();

public:
    Person() : imie("Brak"), nazwisko("Brak") {}
    Person(const std::string &i, const std::string &n) : imie(i), nazwisko(n) {}
    virtual ~Person() = 0;
    virtual void Show() const = 0;
    virtual void Set() = 0;
};
/////////////////////////////////////////////////////////////////////////////////
class Gunslinger : virtual public Person
{
private:
    int ilosc_naciec;

protected:
    void Data() const;
    void Get();

public:
    Gunslinger() : Person(), ilosc_naciec(0) {}
    Gunslinger(const std::string &i, const std::string &n, int i_p = 0) : Person(i, n), ilosc_naciec(i_p) {}
    Gunslinger(const Person &wk, int i_p) : Person(wk), ilosc_naciec(i_p) {}
    void Show() const;
    double Draw() const;
    void Set();
};
/////////////////////////////////////////////////////////////////////////////////
class PokerPlayer : virtual public Person
{
protected:
    void Data() const;

public:
    PokerPlayer() : Person() {}
    PokerPlayer(const std::string &i, const std::string &n) : Person(i, n) {}
    PokerPlayer(const Person &wk) : Person(wk) {}
    void Show() const;
    void Set();
    int Draw() const;
};
/////////////////////////////////////////////////////////////////////////////////
class BadDude : public Gunslinger, public PokerPlayer
{

protected:
    void Get();
    void Data() const;

public:
    BadDude() {}
    BadDude(const std::string &i, const std::string &n, int i_p = 0) : Person(i, n), Gunslinger(i, n, i_p), PokerPlayer(i, n) {}
    BadDude(const Person &wk, int i_p) : Person(wk), Gunslinger(wk, i_p), PokerPlayer(wk) {}
    BadDude(const Gunslinger &wk, int i_p) : Person(wk), Gunslinger(wk, i_p), PokerPlayer(wk) {}
    BadDude(const PokerPlayer &wk, int i_p) : Person(wk), Gunslinger(wk, i_p), PokerPlayer(wk) {}

    void Show() const;
    double Gdraw() const;
    int Cdraw() const;
    void Set();
};

#endif