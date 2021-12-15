#ifndef file_H_
#define file_H_
class Cd
{
private:
    char performers[50];
    char label[20];
    int selections;
    double playtime;

public:
    Cd(const char *s1, const char *s2, int n, double x);
    Cd(const Cd &d);
    Cd();
    virtual ~Cd();
    virtual void Report() const;
    Cd &operator=(const Cd &d);
};
class Classic : public Cd
{
private:
    char song[50];
public:
    Classic();
    Classic(const char *s, const char *p, const char *l, int se, double pl);
    Classic(const char *s, Cd &rs);
    Classic(const Classic & c);
    ~Classic();
     void Report() const;
     Classic & operator=(const Classic & c);
};
#endif