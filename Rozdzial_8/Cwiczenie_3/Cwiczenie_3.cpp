#include <iostream>
#include <cctype>
using namespace std;
void to_upper(string & lancuch);
int main()
{
    string text;
    cout<<"Podaj lancuch (q, aby skonczyc): ";
    while(getline(cin, text)&&text!="q")
    {
        to_upper(text);
        cout<<text<<endl;
        cout<<"Podaj lancuch (q, aby skonczyc): ";
        
    }
    cout<<"Koniec"<<endl;
    return 0;
}
void to_upper(string & lancuch)
{
for(int i = 0; i<lancuch.length();i++)
    lancuch[i]=toupper(lancuch[i]);
}