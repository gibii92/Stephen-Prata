#include <iostream>
#include "file.h"
Move::Move(double a, double b)//konstruktor - ustawia x na a, y na b
{
    x = a;
    y = b;
}
void Move::showmove() const//wyswietla biezace wartosci x i y
{
std::cout<<"X: "<<x<<", Y: "<<y<<std::endl;
}
Move Move::add(const Move & m) const
//powyzsza metoda sumuje x obiektu m i x obiektu wywolujacego, y obiekty m i y obiekty wywolujacego, tworzy nowy obiekt, inicjalizuje go obliczonymi sumami x i y i zwraca tak zainicjalizowany obiekt
{
    Move nowy(x+m.x,y+m.y);
    return nowy;
}
void Move::reset(double a , double b)//ustawia x na a, y na b
{
    x = a;
    y = b;
}