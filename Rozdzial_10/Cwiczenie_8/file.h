#ifndef file_h_
#define file_h_

typedef double Item;
class Lista
{
private:
    enum
    {
        MAX = 10
    };
    Item items[MAX];
    int top;

public:
    Lista();
    bool isempty() const;
    bool isfull() const;
    bool push(const Item &item);
    void printList() const;
    void visit(void (*pf)(Item &));
};
#endif