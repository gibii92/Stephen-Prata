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
    Cd();
    Cd(const char *s1, const char *s2, int n, double x);
    //Cd(const Cd &d);
    //virtual ~Cd();
    virtual void Report() const;
    //Cd &operator=(const Cd &d);
};
class Classic : public Cd
{
private:
    char song[50];

public:
    Classic();
    Classic(const char *s, const char *s1, const char *s2, int n, double x);
    //Classic(const char *s, const Cd &d);
    //Classic(const Classic &d);
    //~Classic();
    void Report() const;
    //Classic &operator=(const Classic &d);
};

#endif