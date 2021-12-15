#include <iostream>
#include <cctype>
#include <fstream>
using namespace std;
int main()
{
    ofstream outFile;
    outFile.open("plik.txt");
    outFile<<"Szymon Nawrocki"<<endl;
    outFile.close();
    ifstream inFile;
    inFile.open("plik.txt");
    if (!inFile.is_open())
    {
        cout << "Otwarcie pliku nie powiodlo sie." << endl;
    }
    char ch;
    int licznik = 0;
    
    while (inFile.get(ch))
    {
        cout << ch;
        if (!isspace(ch))
            licznik++;
    }
    cout << "\nLicznik znakow: " << licznik << endl;
    inFile.close();
    return 0;
}