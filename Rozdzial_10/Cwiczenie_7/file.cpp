#include <iostream>
#include "file.h"
#include <string.h>
Plorg::Plorg(const char * i, int s)
{
    strcpy(imie, i);
    sytosc = s;
}
void Plorg::zmien_sytosc(int zs){
    sytosc+=zs;
}
void Plorg::wyswietl() const{
    std::cout<<"Imie: "<<imie<<std::endl;
    std::cout<<"Sytosc: "<<sytosc<<std::endl;
}