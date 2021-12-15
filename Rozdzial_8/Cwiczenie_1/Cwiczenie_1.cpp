#include <iostream>
using namespace std;
void show_string(char *lancuch, int a = 2);
int main()
{
    char temp[] = "Szymon";
    show_string(temp);
    show_string(temp, 2);
    show_string(temp, 2);
    return 0;
}

void show_string(char *lancuch, int a)
{
    static int b = 0;
    b++;
    for (int i = 0; i < b; i++)
        cout << lancuch << endl;
}