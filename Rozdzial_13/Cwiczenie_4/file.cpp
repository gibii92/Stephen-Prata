#include <iostream>
#include "file.h"
#include <cstring>
Port::Port(const char *br, const char *st, int b)
{
    brand = new char[strlen(br) + 1];
    strcpy(brand, br);
    brand[strlen(br)] = '\0';
    std::strncpy(style, st, 19);
    style[20] = '\0';
    bottles = b;
}
Port::Port(const Port &p)
{
    brand = new char[strlen(p.brand) + 1];
    strcpy(brand, p.brand);
    std::strcpy(style, p.style);
    bottles = p.bottles;
}

Port &Port::operator=(const Port &p)
{

    if (&p == this)
        return *this;
    delete[] brand;
    brand = new char[strlen(p.brand) + 1];
    strcpy(brand, p.brand);
    strcpy(style, p.style);
    bottles = p.bottles;
    return *this;
}
Port &Port::operator+=(int b)
{
    bottles += b;
    return *this;
}
Port &Port::operator-=(int b)
{
    bottles -= b;
    return *this;
}
void Port::Show() const
{
    std::cout << "Marka: " << brand << std::endl;
    std::cout << "Rodzaj: " << style << std::endl;
    std::cout << "Butelek: " << bottles << std::endl;
}
std::ostream &operator<<(std::ostream &os, const Port &p)
{
    os << p.brand << ", " << p.style << ", " << p.bottles;
    return os;
}
////////////////////////////////////////////////////////////////////////
VintagePort::VintagePort() : Port("Best", "Vintage")
{
    nickname = new char[10];
    strcpy(nickname, "Gucio");
    year = 1980;
}
VintagePort::VintagePort(const char *br, int b, const char *nn, int y): Port(br,"Vintage",b)
{
    nickname = new char[strlen(nn) + 1];
    strcpy(nickname, nn);
    year = y;

}
VintagePort::VintagePort(const VintagePort &vp): Port(vp)
{
nickname = new char[strlen(vp.nickname) + 1];
    strcpy(nickname, vp.nickname);
    year = vp.year;
}
VintagePort &VintagePort::operator=(const VintagePort &vp)
{
    if (&vp == this)
        return *this;
    delete[] nickname;
    Port::operator=(vp);
    nickname = new char[strlen(vp.nickname) + 1];
    strcpy(nickname, vp.nickname);
    year = vp.year;
    return *this;
}
void VintagePort::Show() const
{
    Port::Show();
    std::cout << "Nickname: " << nickname << std::endl;
    std::cout << "Year: " << year << std::endl;
}
std::ostream &operator<<(std::ostream &os, const VintagePort &vp)
{
    os << (const Port &)vp << ", Nickname: " << vp.nickname << ", " << vp.year;
    return os;
}