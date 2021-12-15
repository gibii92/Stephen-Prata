#include <iostream>
#include "file.h"
#include <cstring>
Cd::Cd()
{
    performers[0] = '\0';
    label[0] = '\0';
    selections = 0;
    playtime = 0;
}
Cd::Cd(const char *s1, const char *s2, int n, double x)
{
    std::strncpy(performers, s1, 50);
    performers[50] = '\0';
    std::strncpy(label, s2, 50);
    label[50] = '\0';
    selections = n;
    playtime = x;
}
Cd::Cd(const Cd &d)
{
    std::strncpy(performers, d.performers, 50);
    performers[50] = '\0';
    std::strncpy(label, d.label, 50);
    label[50] = '\0';
    selections = d.selections;
    playtime = d.playtime;
}
Cd::~Cd()
{
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
    std::strncpy(performers, d.performers, 50);
    performers[50] = '\0';
    std::strncpy(label, d.label, 50);
    label[50] = '\0';
    selections = d.selections;
    playtime = d.playtime;
    return *this;
}
Classic::Classic() : Cd()
{
    song[0] = '\0';
}
Classic::Classic(const char *s, const char *s1, const char *s2, int n, double x) : Cd(s1, s2, n, x)
{
    std::strncpy(song, s, 50);
    song[50] = '\0';
}
/* Classic::Classic(const char *s, const Cd &d) : Cd(d)
{
    std::strncpy(song, s, 50 - 1);
    song[50 - 1] = '\0';
} */
/* Classic::Classic(const Classic &d) : Cd(d)
{
    std::strncpy(song, d.song, 50 - 1);
    song[50 - 1] = '\0';
}
Classic::~Classic() {} */
void Classic::Report() const
{
    Cd::Report();
    std::cout << "Song: " << song << std::endl;
}
/* Classic &Classic::operator=(const Classic &d)
{
    Cd::operator=(d);
    std::strncpy(song, d.song, 50 - 1);
    song[50 - 1] = '\0';
    return *this;
} */