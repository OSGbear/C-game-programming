// Программа Swap
// Демонстрирует передачу ссылок для изменения переменных - аргументов
#include <iostream>
using namespace std;
void badSwap(int х, int у);
void goodSwap(int& х, int& у) ;
int main()
{
	int myScore = 150;
	int yourScore = 1000;
	cout << "Original values\n";
	cout << "myScore; " << myScore << "\n";
	cout << "yourScore; " << yourScore << "\n\n";
	cout << "Calling badSwap()\n";

	badSwap(myScore, yourScore);
	cout << "myScore; " << myScore << "\n";
	cout << "yourScore; " << yourScore << "\n\n";

	cout << "Calling goodSwap()\n";
	goodSwap(myScore, yourScore);
	cout << "myScore; " << myScore << "\n";
	cout << "yourScore; " << yourScore << "\n";
	return 0;
}
void badSwap(int х, int у)
{
	int temp = х;
	х = у;
	у = temp;
}
void goodSwap(int& х, int& у)
{
	int temp = х;
	х = у;
	у = temp;
}