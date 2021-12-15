#include <iostream>
using std::cout;
#include "file.h"
complex::complex()
{
    A=B=0.0;
}
complex::complex(double a, double b)
{
    A=a;
    B=b;
}
complex::~complex()
{
}
std::ostream &operator<<(std::ostream &os, const complex &v)
{
        os <<"("<<v.A<<","<<v.B<<"i)"<<std::endl;
    
    return os;
}
std::istream &operator>>(std::istream &is,  complex &v)
{
    cout<<"skladowa rzeczywista: ";
    is>>v.A;
    cout<<"skladowa urojona: ";
    is>>v.B;
    return is;
}
complex complex::operator+(const complex &b) const
{
    return complex(A+b.A,B+b.B);
}
complex complex::operator-(const complex &b) const
{
    return complex(A-b.A,B-b.B);
}
complex complex::operator*(const complex &b) const
{
    return complex(A*b.A-B*b.B,A*b.B+B*b.A);
}
complex operator*(double n, const complex &b)
{
    return complex(n*b.A,n*b.B);
}
complex complex::operator*(double n) const
{
    return complex(n*A,n*B);
}
complex complex::operator~() const
{
    return complex(A, -B);
}