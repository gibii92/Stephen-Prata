#include <iostream>
#include "file.h"
#include <cstring>
using namespace std;
abcDMA::abcDMA(const char *l, int r)
{
    label = new char[std::strlen(l) + 1];
    std::strcpy(label, l);
    rating = r;
}
abcDMA::abcDMA(const abcDMA &rs)
{
    label = new char[std::strlen(rs.label) + 1];
    std::strcpy(label, rs.label);
    rating = rs.rating;
}
abcDMA::~abcDMA()
{
    delete[] label;
}
abcDMA &abcDMA::operator=(const abcDMA &rs)
{
    if (this == &rs)
        return *this;
    delete[] label;
    label = new char[std::strlen(rs.label) + 1];
    std::strcpy(label, rs.label);
    rating = rs.rating;
    return *this;
}
std::ostream &operator<<(std::ostream &os, const abcDMA &rs)
{
    os << "Label: " << rs.label << endl;
    os << "Rating: " << rs.rating << endl;
    return os;
}
void abcDMA::View() const 
{
    cout << "Label: " << label << endl;
    cout << "Rating: " << rating << endl;
}

/////////////////////////////////////////////////////////////////////////////////
baseDMA::baseDMA(const char *l, int r) : abcDMA(l, r) {}
baseDMA::baseDMA(const baseDMA &rs) : abcDMA(rs) {}
baseDMA::~baseDMA() {}
baseDMA &baseDMA::operator=(const baseDMA &rs)
{
    abcDMA::operator=(rs);
    return *this;
}
std::ostream &operator<<(std::ostream &os, const baseDMA &rs)
{
    os << (const abcDMA &)rs << endl;
    return os;
}
void baseDMA::View() const
{
    cout << "Label: " << showLabel() << endl;
    cout << "Rating: " << showRating() << endl;
}
/////////////////////////////////////////////////////////////////////////////////
lacksDMA::lacksDMA(const char *c, const char *l, int r) : abcDMA(l, r)
{
    std::strncpy(color, c, 40);
    color[40] = '\0';
}
std::ostream &operator<<(std::ostream &os, const lacksDMA &rs)
{
    os << (const abcDMA &)rs << endl;
    os << "Color: " << rs.color << endl;
    return os;
}
void lacksDMA::View() const
{
    abcDMA::View();
    cout << "Color: " << color << endl;
}
///////////////////////////////////////////////////////////////////
hasDMA::hasDMA(const char *s, const char *l, int r) : abcDMA(l, r)
{
    style = new char[std::strlen(s) + 1];
    std::strcpy(style, s);
}
hasDMA::hasDMA(const hasDMA &rs) : abcDMA(rs)
{
    style = new char[std::strlen(rs.style) + 1];
    std::strcpy(style, rs.style);
}
hasDMA::~hasDMA() { delete[] style; }
hasDMA &hasDMA::operator=(const hasDMA &rs)
{
    if (this == &rs)
        return *this;
    delete[] style;
    style = new char[std::strlen(rs.style) + 1];
    std::strcpy(style, rs.style);
    return *this;
}
std::ostream &operator<<(std::ostream &os, const hasDMA &rs)
{
    os << (const abcDMA &)rs << endl;
    os << "Style: " << rs.style << endl;
    return os;
}
void hasDMA::View() const
{
    abcDMA::View();
    cout << "Style: " << style << endl;
}