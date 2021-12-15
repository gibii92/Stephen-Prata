#include <iostream>
#include "file.h"
#include <cstdlib>
#include <ctime>
using namespace std;
Person::~Person()
{
}
void Person::Data() const
{
    cout << "Imie: " << imie << ", Nazwisko: " << nazwisko << endl;
}
void Person::Get()
{
    cout << "Imie: ";
    getline(cin, imie);
    cout << "Nazwisko: ";
    getline(cin, nazwisko);
}
////////////////////////////////////////////////////////////////////
void Gunslinger::Set()
{
    cout << "Podaj imie i nazwisko Gunslingera:\n";
    Person::Get();
    Get();
}
void Gunslinger::Show() const
{
    cout << "Postac Gunslinger:\n";
    Person::Data();
    Data();
}
void Gunslinger::Data() const
{
    cout << "Ilosc naciec na rewolwerze: " << ilosc_naciec << endl;
    cout << "Czas wyciagniecia rewolweru: " << Draw();
}
void Gunslinger::Get()
{
    cout << "Ile naciec znajduje sie na rewolwerze? ";
    cin >> ilosc_naciec;
    while (cin.get() != '\n')
        continue;
}
double Gunslinger::Draw() const
{
    double temp;
    cin >> temp;
    while (cin.get() != '\n')
        continue;
    return temp;
}
////////////////////////////////////////////////////////////////////

void PokerPlayer::Data() const
{
    cout<<"Wylosowana karta: "<<Draw();
}

void PokerPlayer::Set()
{
    cout << "Podaj imie i nazwisko PokerPlayer:\n";
    Person::Get();
}
void PokerPlayer::Show() const
{
    cout << "Postac PokerPlayer:\n";
    Person::Data();
    Data();
}
int PokerPlayer::Draw() const
{
    srand(time(NULL));
    return (std::rand() % 52) + 1;
}
////////////////////////////////////////////////////////////////////
void BadDude::Set()
{
    cout << "Podaj imie i nazwisko BadDude:\n";
    Person::Get();
    Get();
}
void BadDude::Show() const
{
    cout << "Postac BadDude:\n";
    Person::Data();
    Data();
}
void BadDude::Data() const
{
    Gunslinger::Data();
    PokerPlayer::Data();
}
void BadDude::Get()
{
    Gunslinger::Get();
}

double BadDude::Gdraw() const
{
    return Gunslinger::Draw();
}
int BadDude::Cdraw() const
{
    return PokerPlayer::Draw();
}