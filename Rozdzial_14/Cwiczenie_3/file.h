#ifndef file_H_
#define file_H_
#include <string>
class Worker
{
private:
    std::string fullname;
    long id;

protected:
    virtual void Data() const;
    virtual void Get();

public:
    Worker() : fullname("brak"), id(0L) {}
    Worker(const std::string &s, long n) : fullname(s), id(n) {}
    virtual ~Worker() = 0;
    virtual void Set() = 0;
    virtual void Show() const = 0;
};
class Waiter : virtual public Worker
{
private:
    int panache;

protected:                                                                                  
    void Data() const;
    void Get();

public:
    Waiter() : Worker(), panache(0) {}
    Waiter(const std::string &s, long n, int p = 0) : Worker(s, n), panache(p) {}
    Waiter(const Worker &wk, int p = 0) : Worker(wk), panache(p) {}
    void Set();
    void Show() const;
};
class Singer : virtual public Worker
{
protected:
    enum
    {
        inna,
        alt,
        kontralt,
        sopran,
        bas,
        baryton,
        tenor
    };
    enum
    {
        Vtypes = 7
    };
    void Data() const;
    void Get();

private:
    static const char *pv[Vtypes];
    int voice;

public:
    Singer() : Worker(), voice(inna) {}
    Singer(const std::string &s, long n, int v = inna) : Worker(s, n), voice(v) {}
    Singer(const Worker &wk, int v = inna) : Worker(wk), voice(v) {}
    void Set();
    void Show() const;
};
class SingingWaiter : public Singer, public Waiter
{
protected:
    void Data() const;
    void Get();

public:
    SingingWaiter() {}
    SingingWaiter(const std::string &s, long n, int p = 0, int v = inna) : Worker(s, n), Waiter(s, n, p), Singer(s, n, v) {}
    SingingWaiter(const Worker &wk, int p = 0, int v = inna) : Worker(wk), Waiter(wk, p), Singer(wk, v) {}
    SingingWaiter(const Waiter &wt, int v = inna) : Worker(wt), Waiter(wt), Singer(wt, v) {}
    SingingWaiter(const Singer &wt, int p = 0) : Worker(wt), Waiter(wt, p), Singer(wt) {}
    void Set();
    void Show() const;
};
template <class Item>
class Queue
{
private:
    struct Node
    {
        Item item;
        struct Node *next;
    };
    enum
    {
        Q_SIZE = 10
    };
    Node *front;
    Node *rear;
    int items;
    const int qsize;
    Queue(const Queue &q) : qsize(0) {}
    Queue &operator=(const Queue &q) { return *this; }

public:
    Queue(int qs = Q_SIZE);
    ~Queue();
    bool isempty() const;
    bool isfull() const;
    int queuecount() const;
    bool enqueue(const Item &item);
    bool dequeue(Item &item);
};
template <class Item>
Queue<Item>::Queue(int qs) : qsize(qs)
{
    front = rear = NULL;
    items = 0;
}
template <class Item>
Queue<Item>::~Queue()
{
    Node *temp;
    while (front != NULL)
    {
        temp = front;
        front = front->next;
        delete temp;
    }
}
template <class Item>
bool Queue<Item>::isempty() const
{
    return items == 0;
}
template <class Item>
bool Queue<Item>::isfull() const
{
    return items == qsize;
}
template <class Item>
int Queue<Item>::queuecount() const
{
    return items;
}
template <class Item>
bool Queue<Item>::enqueue(const Item &item)
{
    if (isfull())
        return false;
    Node *add = new Node;
    add->item = item;
    add->next = NULL;
    items++;
    if (front == NULL)
        front = add;
    else
        rear->next = add;
    rear = add;
    return true;
}
template <class Item>
bool Queue<Item>::dequeue(Item &item)
{
    if (front == NULL)
        return false;
    item = front->item;
    items--;
    Node *temp = front;
    front = front->next;
    delete temp;
    if (items == 0)
        rear - NULL;
    return true;
}
#endif