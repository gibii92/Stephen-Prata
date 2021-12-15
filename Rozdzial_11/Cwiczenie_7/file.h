#ifndef file_H_
#define file_H_
class complex
{
private:
    double A;
    double B;
public:
    complex();
    complex(double a, double b);
    ~complex();
    friend std::ostream &operator<<(std::ostream &os, const complex &v);
    friend std::istream &operator>>(std::istream &os,  complex &v);
    complex operator+(const complex &b) const;
    complex operator-(const complex &b) const;
    complex operator*(const complex &b) const;
    friend complex operator*(double n, const complex &b);
    complex operator*(double n) const;
    complex operator~() const;
};
#endif