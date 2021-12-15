#ifndef golf_h_
#define golf_h_
const int Len = 40;

class golf
{
private:
    char fullname[Len];
    int handicap;

public:
    golf();
    golf(const char *name, int hc);
    void setgolf();
    void sethandicap(int hc);
    void showgolf() const;
};
#endif