// компьютер угадывает номер
// Классическая игра в угадывание чисел
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	srand(static_cast<unsigned int>(time(0))); // запускаем генератор случайных чисел
	int guess = rand() % 100 + 1; //случайное число в диапазоне от 1до100
	int tries = 0;
	int secretNumber;
	cout << "\tWelcome to Guess My Number 1...100\n\n";
	cin >> secretNumber;
	//Соэдание игрового цикла
	do
	{
		cout << "Enter a guess: ";
		
		++tries;
		if (guess > secretNumber)
		{
			cout << "Too high!\n\n";
			--guess;
			cout << guess<<" ";
		}
		else if (guess < secretNumber)
		{
			cout << "Too low!\n\n";
			++guess;
			cout << guess<<" ";
		}
		
	} while (guess != secretNumber);

	cout << "\nThat's it! You got it in\t" << tries << " guesses!\n";

	return 0;
}