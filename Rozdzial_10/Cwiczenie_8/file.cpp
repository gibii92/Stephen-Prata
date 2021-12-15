#include <iostream>
#include "file.h"
Lista::Lista()
{
    top = 0;
}

bool Lista::isempty() const { return top == 0; }

bool Lista::isfull() const { return top == MAX; }

bool Lista::push(const Item &item)
{
    if (top < MAX)
    {
        items[top++] = item;
        return true;
    }
    else
        return false;
}
void Lista::printList() const
{
    using std::cout;
    using std::endl;

    if (isempty())
    {
        cout << "No list to print"
             << endl;
        return;
    }
    else
    {

        for (int i = 0; i < top; i++)
            cout << "Item " << i + 1 << ": "
                 << items[i] << endl;
    }
}
void Lista::visit(void (*pf)(Item &))
{

    for (int i = 0; i < top; i++)
        (*pf)(items[i]);
}