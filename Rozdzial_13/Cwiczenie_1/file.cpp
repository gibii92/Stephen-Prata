#include <iostream>
#include "file.h"
#include <cstring>

using namespace std;
Cd::Cd(){performers[0] = '\0';
	label[0] = '\0';
	selections = 0;
	playtime = 0;}
Cd::Cd(const char *s1, const char *s2, int n, double x)
{
    std::strncpy(performers, s1, 50);
    performers[50] = '\0';
    std::strncpy(label, s2, 20);
    label[20] = '\0';
    selections = n;
    playtime = x;
}
Cd::Cd(const Cd &d)
{
    std::strncpy(performers, d.performers, 50);
    performers[50] = '\0';
    std::strncpy(label, d.label, 20);
    label[20] = '\0';
    selections = d.selections;
    playtime = d.playtime;
}
void Cd::Report() const
{
    std::cout << " Performers: " << performers << std::endl;
    std::cout << " Label: " << label << std::endl;
    std::cout << " Selections: " << selections << std::endl;
    std::cout << " Playtime: " << playtime << std::endl;
}
Cd &Cd::operator=(const Cd &d)
{
    if (this == &d)
        return *this;
    std::strncpy(performers, d.performers, 50);
    performers[50] = '\0';
    std::strncpy(label, d.label, 20);
    label[20] = '\0';
    selections = d.selections;
    playtime = d.playtime;
    return *this;
}
Cd::~Cd()
{
}
//////////////////////////////
Classic::Classic()
{
    song[0] = '\0';
}
Classic::Classic(const char *s, const char *p, const char *l, int se, double pl) : Cd(p, l, se, pl)
{
    std::strncpy(song, s, 50);
    song[50] = '\0';
}
Classic::Classic(const char *s, Cd &rs) : Cd(rs)
{
    std::strncpy(song, s, 50 - 1);
    song[50 - 1] = '\0';
}
Classic::Classic(const Classic & c) : Cd(c)
{
	strncpy(song, c.song, 50-1);
	song[50-1] = '\0';	
}
void Classic::Report() const
{
    Cd::Report();
    std::cout << " Song: " << song << std::endl;
}
Classic::~Classic()
{
}
Classic &Classic::operator=(const Classic &c)
{
    Cd::operator=(c);
    strncpy(song, c.song, 50 - 1);
    song[50 - 1] = '\0';
    return *this;
}