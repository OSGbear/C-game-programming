
// Игра Guess Му Number
// Классическая игра в угадывание чисел
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

	int main()
{
		srand(static_cast<unsigned int>(time(0))); // запускаем генератор случайных чисел
		int secretNumber = rand() % 100 + 1; //случайное число в диапазоне от 1до100
		int tries = 0;
		int guess;
		cout << "\tWelcome to Guess My Number 1...100\n\n";
				
		//Соэдание игрового цикла
			do
	{
				cout << "Enter а guess: ";
				cin >> guess;
				++tries;
			if (guess > secretNumber)
			{
				cout << "Too high!\n\n";
			}
			else if (guess < secretNumber)
			{
				cout << "Too low!\n\n";
			}
			else
			{
				cout << "\nThat's it! You got it in\t" << tries << " guesses!\n";
			}
	} 
			while (guess != secretNumber);
	return 0;
}