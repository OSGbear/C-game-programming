// Программа Menu Chooser
// Демонстрирует работу с инструкцией switch
#include <iostream>
using namespace std;
int main()
{
	cout << "Difficulty Levels\n\n";
	cout << "1 - Easy\n";
	cout << "2 - Normal\n";
	cout << "3 - Hard\n\n";
	int choice;
	enum con { a = 1, b = 2, c = 3 };
	cout << "Choice: ";
	cin >>choice ;
	switch (choice)
	{
	case a:
		cout << "You picked Easy.\n";
		break;
	case b:
		cout << "You picked Normal .\n";
		break;
	case c:
		cout << "You picked Hard.\n";
		break;
	default:
		cout << "You made an illegal choice.\n";
	}
	return 0;
}