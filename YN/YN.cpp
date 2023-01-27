// Программа Yes or No
// Демонстрирует работу с возвращаемыми значениями и параметрами
#include <iostream>
#include <string>
using namespace std;
char askYesNol();
	char askYesNo2(string question);
int main()
{
	char answerl = askYesNol();
	cout << "Thanks for answering: " << answerl << "\n\n";
	char answer2 = askYesNo2("Do you wish to save your game?");
	cout << "Thanks for answering: " << answer2 << "\n";
	return 0;
}
char askYesNol()
{
	char response1;
	do
	{
		cout << "Please enter 'y' or 'n': ";
		cin >> response1;
	} while (response1 != 'y' && response1 != 'n');
	return response1;
}
char askYesNo2(string question)
{
	char response2;
		do
		{
			cout << question << " (y/n): ";
			cin >> response2;
		} 
	while (response2 != 'y' && response2 != 'n');
		return response2;
}