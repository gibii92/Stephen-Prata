#include <iostream>
using std::cout;
using std::endl;
#include "file.h"
#include <cstring>
Cow::Cow()
{
    cout << "Konstruktor domyslny\n";
    std::strcpy(name, "");
    hobby = new char[1];
    hobby[0] = '\0';
    weight = 0.0;
}
Cow::Cow(const char *nm, const char *ho, double wt)
{
    cout << "Konstruktor\n";
    std::strcpy(name, nm);
    hobby = new char[std::strlen(ho) + 1];
    std::strcpy(hobby, ho);
    weight = wt;
}
Cow::Cow(const Cow &c)
{
    cout << "Konstruktor kopiujacy\n";
    std::strcpy(name, c.name);
    hobby = new char[std::strlen(c.hobby) + 1];
    std::strcpy(hobby, c.hobby);
    weight = c.weight;
}
Cow::~Cow()
{
    cout << "Destruktor\n";
    delete[] hobby;
}
Cow &Cow::operator=(const Cow &c)
{
    cout << "Operator przypisania\n";
    if (this == &c)
        return *this;
    delete[] hobby;
    std::strcat(name, c.name);
    hobby = new char[std::strlen(c.hobby) + 1];
    std::strcpy(hobby, c.hobby);
    weight = c.weight;
    return *this;
}
void Cow::ShowCow() const
{
    cout << "ShowCow\n";
    cout<<"Name: "<<name<<endl;
    cout<<"Hobby: "<<hobby<<endl;
    cout<<"Weight: "<<weight<<endl;

}