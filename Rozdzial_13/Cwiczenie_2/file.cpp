#include <iostream>
#include "file.h"
#include <cstring>
Cd::Cd()
{
    performers = new char[50];
    performers[0] = '\0';
    label = new char[20];
    label[0] = '\0';
    selections = 0;
    playtime = 0;
}
Cd::Cd(const char *s1, const char *s2, int n, double x)
{
    performers = new char[51];
    std::strcpy(performers, s1);
    label = new char[21];
    std::strcpy(label, s2);
    selections = n;
    playtime = x;
}
Cd::Cd(const Cd &d)
{
    performers = new char[51];
    std::strcpy(performers, d.performers);
    label = new char[21];
    std::strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
}
Cd::~Cd()
{
    delete [] performers;
    delete [] label;
}
void Cd::Report() const
{
    std::cout << "Performers: " << performers << std::endl;
    std::cout << "Label: " << label << std::endl;
    std::cout << "Selections: " << selections << std::endl;
    std::cout << "Playtime: " << playtime << std::endl;
}
Cd &Cd::operator=(const Cd &d)
{
    if (this == &d)
        return *this;
    
    delete [] performers;
    performers = new char[51];
    std::strcpy(performers, d.performers);
    delete [] label;
    label = new char[21];
    std::strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
    return *this;
}
Classic::Classic()
{
    song= new char[50];
    song[0] = '\0';
}
Classic::Classic(const char *s, const char *s1, const char *s2, int n, double x) : Cd(s1, s2, n, x)
{
    song = new char[51];
    std::strcpy(song, s);
}
Classic::Classic(const char *s, const Cd &d) : Cd(d)
{
    song = new char[51];
    std::strcpy(song, s);
}
Classic::Classic(const Classic &d) : Cd(d)
{
    song = new char[51];
    std::strcpy(song, d.song);
}
Classic::~Classic() {delete [] song;}
void Classic::Report() const
{
    Cd::Report();
    std::cout << "Song: " << song << std::endl;
}
Classic &Classic::operator=(const Classic &d)
{
    if(this==&d)
    return *this;
    Cd::operator=(d);
    delete [] song;
    song = new char[51];
    std::strcpy(song, d.song);
    return *this;
}