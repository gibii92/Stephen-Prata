#ifndef file_H_
#define file_H_
#include <string>
#include <valarray>
using namespace std;
///////////////////////////////////////////////////////////////////////////////
template <class T1, class T2>
class Pair
{
private:
    T1 rocznik;
    T2 butelki;

public:
    T1 &first();
    T2 &second();
    T1 first() const { return rocznik; }
    T2 second() const { return butelki; }
    Pair(const T1 &aval, const T2 &bval) : rocznik(aval), butelki(bval) {}
    Pair() {}
};
template <class T1, class T2>
T1 &Pair<T1, T2>::first() { return rocznik; }

template <class T1, class T2>
T2 &Pair<T1, T2>::second() { return butelki; }
///////////////////////////////////////////////////////////////////////////////

class Wine
{
private:
    typedef std::valarray<int> ArrayInt;
    typedef Pair<ArrayInt, ArrayInt> PairArray;
    string name;
    int years;
    PairArray data;
    

public:
    Wine();
    Wine(const char *l, int y, const int yr[], const int bot[]);
    Wine(const char *l, int y);
    void GetBottles();
    const string &Label() const;
    int Sum();
    void Show() const;
};

/////////////////////////////////////////////////////////////////////////////////
#endif // !file_H_
