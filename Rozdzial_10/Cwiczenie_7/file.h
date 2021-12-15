#ifndef file_h_
#define file_h_
class Plorg
{
private:
static const int LIMIT = 19;
char imie[LIMIT];
int sytosc;
public:
Plorg(const char * i = "Plorga", int s = 50);
void zmien_sytosc(int zs);
void wyswietl() const;
};
#endif