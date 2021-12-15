#ifndef file_H_
#define file_H_
#include <string>
using std::ostream;
class Stock
{
private:
char * str;
int len;
int shares;
double share_val;
double total_val;
void set_tot() {total_val = shares * share_val;}
public:
Stock();
Stock(const char * s, long n =0, double pr = 0.0);
Stock(const Stock &);
~Stock();
Stock & operator=(const Stock &);
Stock & operator=(const char *);
void buy(long num, double price);
void sell(long num, double price);
void update(double price);
void show() const;
friend ostream & operator<<(ostream & os, const Stock & st);
const Stock & topval(const Stock & s) const;
};
#endif