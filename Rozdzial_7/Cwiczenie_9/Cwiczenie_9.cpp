#include <iostream>
using namespace std;
const int SLEN = 30;
struct student
{
    char fullname[SLEN];
    char hobby[SLEN];
    int ooplevel;
};

int getinfo(student pa[], int n);
void display1(student st);
void display2(const student *ps);
void display3(const student pa[], int n);
int main()
{
    cout << "Podaj wielkosc grupy: ";
    int class_size;
    cin >> class_size;
    while (cin.get() != '\n')
        continue;
    student *ptr_stu = new student[class_size];
    int entered = getinfo(ptr_stu, class_size);
    for (int i = 0; i < entered; i++)
    {
        display1(ptr_stu[i]);
        display2(&ptr_stu[i]);
    }
    display3(ptr_stu, entered);
    delete[] ptr_stu;
    cout << "Gotowe\n";
    return 0;
}
int getinfo(student pa[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        cout << "Czlonek nr " << i + 1 << endl;
        cout << "Name: ";
        cin.getline(pa[i].fullname, SLEN);
        if (pa[i].fullname[0] == '\0')
            break;
        cout << "Hobby: ";
        cin.getline(pa[i].hobby, SLEN);
        cout << "OOPLEVEL: ";
        cin >> pa[i].ooplevel;
        cin.get();
    }
    return i;
}
void display1(student st)
{
    cout << "Name: " << st.fullname << "\tHobby: " << st.hobby << "\tOOPLEVEL: " << st.ooplevel << endl;
}
void display2(const student *ps)
{
    cout << "Name: " << ps->fullname << "\tHobby: " << ps->hobby << "\tOOPLEVEL: " << ps->ooplevel << endl;
}
void display3(const student pa[], int n)
{
    for (int i = 0; i < n; i++)
        cout << "Name: " << pa[i].fullname << "\tHobby: " << pa[i].hobby << "\tOOPLEVEL: " << pa[i].ooplevel << endl;
}