#include <iostream>
#include "file.h"
#include <cstring>
using namespace std;
////////////////////////////////////////////////////////////////////////////////////////////////
abcDMA::abcDMA(const char *l, int r)
{
    label = new char[strlen(l) + 1];
    strcpy(label, l);
    rating = r;
}
abcDMA::abcDMA(const abcDMA &rs)
{
    label = new char[strlen(rs.label) + 1];
    strcpy(label, rs.label);
    rating = rs.rating;
}
abcDMA::~abcDMA() { delete[] label; }
abcDMA &abcDMA::operator=(const abcDMA &rs)
{
    if (&rs == this)
        return *this;
    delete[] label;
    label = new char[strlen(rs.label) + 1];
    strcpy(label, rs.label);
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
////////////////////////////////////////////////////////////////////////////////////////////////
baseDMA::baseDMA(const char *l, int r) : abcDMA(l, r) {}
std::ostream &operator<<(std::ostream &os, const baseDMA &rs)
{
    os << (const abcDMA &)rs;
    return os;
}
void baseDMA::View() const
{
    abcDMA::View();
}
////////////////////////////////////////////////////////////////////////////////////////////////
lacksDMA::lacksDMA(const char *c, const char *l, int r) : abcDMA(l, r)
{
    std::strncpy(color, c, 49);
    color[49] = '\0';
}
std::ostream &operator<<(std::ostream &os, const lacksDMA &rs)
{
    os << (const abcDMA &)rs;
    os << "Color: " << rs.color << endl;
    return os;
}
void lacksDMA::View() const
{
    abcDMA::View();
    cout << "Color: " << color << endl;
}
////////////////////////////////////////////////////////////////////////////////////////////////
hasDMA::hasDMA(const char *s, const char *l, int r) : abcDMA(l, r)
{
    style = new char[strlen(s) + 1];
    strcpy(style, l);
}
hasDMA::hasDMA(const hasDMA &rs) : abcDMA(rs)
{
    style = new char[strlen(rs.style) + 1];
    strcpy(style, rs.style);
}
hasDMA::~hasDMA() { delete[] style; }
hasDMA &hasDMA::operator=(const hasDMA &rs)
{
    if (&rs == this)
        return *this;
    delete[] style;
    abcDMA::operator=(rs);
    style = new char[strlen(rs.style) + 1];
    strcpy(style, rs.style);
    return *this;
}
std::ostream &operator<<(std::ostream &os, const hasDMA &rs)
{
    os << (const abcDMA &)rs<<endl;
    os << "Style: " << rs.style << endl;
    return os;
}
void hasDMA::View() const
{
    abcDMA::View();
    cout << "Style: " << style << endl;
}