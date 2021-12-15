#include <iostream>
using std::cout;
#include "file.h"
void Stonewt::set_stone()
{
    stone = int(pounds) / Lbs_per_stn;
    pds_left = int(pounds) % Lbs_per_stn + pounds - int(pounds);
}

void Stonewt::set_pounds()
{
    pounds = stone * Lbs_per_stn + pds_left;
}
Stonewt::Stonewt()
{
    pds_left = stone = pounds = 0;
    mode = stone_f;
}
Stonewt::Stonewt(double lbs, Mode form)
{
    mode = form;
    pounds = lbs;
    set_stone();
}
Stonewt::Stonewt(int stn, double lbs, Mode form)
{
    mode = form;
    stone = stn;
    pds_left = lbs;
    set_pounds();
}
Stonewt::~Stonewt()
{
}
void Stonewt::stone_form()
{
    mode = stone_f;
}
void Stonewt::pound_form()
{
    mode = pound_f;
}
void Stonewt::floating_point_form()
{
    mode = floating_point_f;
}
std::ostream &operator<<(std::ostream &os, const Stonewt &v)
{
    if (v.mode == Stonewt::stone_f)
        os << "Stone: " << v.stone << ", " << v.pds_left << " pounds" << std::endl;
    else if (v.mode == Stonewt::pound_f)
        os << "Pounds: " << v.pounds << " pounds" << std::endl;
    else if (v.mode == Stonewt::floating_point_f)
        os << "Pounds: " << (int)v.pounds << " pounds" << std::endl;
    return os;
}
Stonewt Stonewt::operator+(const Stonewt &b) const
{
    return Stonewt(pounds + b.pounds);
}
Stonewt Stonewt::operator-(const Stonewt &b) const
{
    return Stonewt(pounds - b.pounds);
}
Stonewt Stonewt::operator*(double n) const
{
    return Stonewt(pounds * n);
}
Stonewt operator*(double n, const Stonewt &b)
{
    return b *n;
}