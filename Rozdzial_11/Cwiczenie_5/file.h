#ifndef file_H_
#define file_H_
class Stonewt
{
    public:
    enum Mode{stone_f, pound_f,floating_point_f};
    private:
    enum{Lbs_per_stn = 14};
    int stone;
    double pds_left;
    double pounds;
    Mode mode;
    //prywatne metody ustawiajace skladowe
    void set_stone();
    void set_pds_left();
    void set_pounds();
    public:
    Stonewt();
    Stonewt(double lbs, Mode form = pound_f);
    Stonewt(int stn, double lbs,Mode form = floating_point_f);
    ~Stonewt();
    int stone_val() const {return stone;}
    double pds_left_val() const {return pds_left;}
    double pounds_val() const {return pounds;}
    void stone_form();
    void pound_form();
    void floating_point_form();
    friend std::ostream & operator<<(std::ostream & os, const Stonewt & v);
    Stonewt operator+(const Stonewt & b) const;
    Stonewt operator-(const Stonewt & b) const;
    Stonewt operator*(double n) const;
    friend Stonewt operator*(double n, const Stonewt & b);
    
};
#endif