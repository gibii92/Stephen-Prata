#include <iostream>
#include "file.cpp"
using namespace std;
inline void doubleValue(double & x) {x = 2*x;}
inline void square(double & x) {x = x*x;}
inline void halve(double & x) {x = x/2;}
inline void reciprocal(double & x) {x = 1/x;}
int main()
{
    using std::cout;
	using std::endl;
	using std::cin;


	Lista l;

	cout << "Enter a number (q to quit): ";
	double d;	
	while (cin >> d && l.isfull() == 0)
	{
		l.push(d);
		if (l.isfull() == 0)
			cout << "Enter a number (q to quit): ";
	}
	cin.clear();
	cin.ignore(256, '\n');
	cout << "Here is your list: " << endl;
	l.printList();
	 

	cout << "Choose from the following (q to quit): "
	     << endl;
	cout << "1. doubleValue()          2. square()     \n"
	     << "3. halve()                4. reciprocal() \n";
	int choice;
	while (cin >> choice)
	{
		switch (choice)
		{
			case 1:
				l.visit(doubleValue);
				break;
			case 2:
				l.visit(square);
				break;
			case 3: 
				l.visit(halve);
				break;
			case 4:
				l.visit(reciprocal);
				break;
			default:
				cout << "Not an option" << endl;
				break;
		}
		cout << "Here is your new list: " << endl;
		l.printList();
		cout << "Choose from the following (q to quit): "
	     	     << endl;
		cout << "1. doubleValue()          2. square()     \n"
		     << "3. halve()                4. reciprocal() \n";
	}

	cout << "Bye!" << endl;
    return 0;
}
