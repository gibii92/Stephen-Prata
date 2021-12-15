#ifndef file_H_
#define file_H_
#include <iostream>
class abcDMA
{
private:
    char *label;
    int rating;

protected:
    const char *showLabel() const { return label; }
    int showRating() const { return rating; }

public:
    abcDMA(const char *l = "brak", int r = 0);
    abcDMA(const abcDMA &rs);
    virtual ~abcDMA();
    abcDMA &operator=(const abcDMA &rs);
    friend std::ostream &operator<<(std::ostream &os, const abcDMA &rs);
    virtual void View() const = 0;
};
class baseDMA : public abcDMA
{
private:
public:
    baseDMA(const char *l = "brak", int r = 0);
    baseDMA(const baseDMA &rs);
    virtual ~baseDMA();
    baseDMA &operator=(const baseDMA &rs);
    friend std::ostream &operator<<(std::ostream &os, const baseDMA &rs);
    virtual void View() const;
};
class lacksDMA : public abcDMA
{
private:
    char color[40];
public:
    lacksDMA(const char * c = "brak",const char *l = "brak", int r = 0);
    friend std::ostream &operator<<(std::ostream &os, const lacksDMA &rs);
     void View() const;
};
class hasDMA : public abcDMA
{
private:
    char *style;
public:
    hasDMA(const char *s = "brak",const char *l = "brak", int r = 0);
    hasDMA(const hasDMA &rs);
    ~hasDMA();
    hasDMA &operator=(const hasDMA &rs);
    friend std::ostream &operator<<(std::ostream &os, const hasDMA &rs);
     void View() const;
};
#endif