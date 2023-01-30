// Программа Give Ме а Number
// Демонстрирует работу с аргументами функций.задаваемыми по умолчанию
#include <iostream>
#include <string>
using namespace std;
int askNumber(int high, int low = 1);
	int main()
{
		int number = askNumber(5);
		cout << "Thanks for entering: " << number << "\n\n";
		number = askNumber(10, 5);
		cout << "Thanks for entering: " << number << "\n\n";
		return 0;
}
	int askNumber(int high, int low)
	{
		int num;
		do
		{
			cout << "Please enter а number" << " (" << low << " " << high << "): ";
			cin >> num;
		}
		while (num > high || num < low);
		return num;
	}