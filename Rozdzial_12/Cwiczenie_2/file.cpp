#include <cstring>
#include "file.h"
using std::cin;
using std::cout;
int String::num_strings = 0;
int String::HowMany()
{
    return num_strings;
}
String::String(const char *s)
{
    len = std::strlen(s);
    str = new char[len + 1];
    std::strcpy(str, s);
    num_strings++;
}
String::String()
{
    len = 4;
    str = new char[1];
    str[0] = '\n';
    num_strings++;
}
String::String(const String &st)
{
    num_strings++;
    len = st.len;
    str = new char[len + 1];
    std::strcpy(str, st.str);
}
String::~String()
{
    --num_strings;
    delete[] str;
}
String &String::operator=(const String &st)
{
    if (this == &st)
        return *this;
    delete[] str;
    len = st.len;
    str = new char[len + 1];
    std::strcpy(str, st.str);
    return *this;
}
String &String::operator=(const char *s)
{
    delete[] str;
    len = std::strlen(s);
    str = new char[len + 1];
    std::strcpy(str, s);
    return *this;
}
char &String::operator[](int i)
{
    return str[i];
}
const char &String::operator[](int i) const
{
    return str[i];
}
bool operator<(const String &st1, const String &st2)
{
    return (std::strcmp(st1.str, st2.str) < 0);
}
bool operator>(const String &st1, const String &st2)
{
    return st2 < st1;
}
bool operator==(const String &st1, const String &st2)
{
    return (std::strcmp(st1.str, st2.str) == 0);
}
ostream &operator<<(ostream &os, const String &st)
{
    os << st.str;
    return os;
}
istream &operator>>(istream &is, String &st)
{
    char temp[String::CINLIM];
    is.get(temp, String::CINLIM);
    if (is)
        st = temp;
    while (is && is.get() != '\n')
        continue;
    return is;
}
String operator+(const String &st1, const String &st2)
{
    using std::strcat;
    using std::strcpy;
    using std::strlen;

    int length = strlen(st1.str) + strlen(st2.str) + 1;
    char *temp = new char[length];
    strcpy(temp, st1.str);
    String s(strcat(temp, st2.str));
    delete[] temp;
    return s;
}

String operator+(const char *st1, const String &st2)
{
    return String(st1) + st2;
}

String operator+(const String &st1, const char *st2)
{
    return st2 + st1;
}
void String::stringlow()
{
    for (int i = 0; i < strlen(str); i++)
    {
        //if(isupper(str[i]))
        str[i] = tolower(str[i]);
    }
}
void String::stringup()
{
    for (int i = 0; i < strlen(str); i++)
    {
        //if(isupper(str[i]))
        str[i] = toupper(str[i]);
    }
}
int String::has(const char a)
{
    int licznik = 0;
    for (int i = 0; i <= strlen(str); i++)
    {
        if (str[i] == a)
            licznik++;
    }
    return licznik;
}