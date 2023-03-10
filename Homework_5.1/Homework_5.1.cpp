//игра-головоломка с доработкой по дз
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

string message();
int tW();
string guess;
string theWord;
string theHint;

string jumble;

//переменные для вычисления очков
long int score = 0;
short lives = 4;
short attempts = 0;
short att = 0;
unsigned int averageScore = 0;



int main()
{
	enum fields { WORD, HINT, NUM_FIELDS };
	const int NUM_WORDS = 5;
	const string WORDS[NUM_WORDS][NUM_FIELDS] =
	{
		{"wall", "Do you feel you're banging your head against something?"},
		{"wall", "These might help you see the answer. "},
		{"wall", "Going slowly. is it?"},
		{"wall", "Кеер at it."}, 
		{"wall", "It's what the game is all about."}
	};
	
	
	cout << "\t\t\tWelcome to Word Jumble!\n\n";

	while (lives > 0) 
	{
		srand(static_cast<unsigned int>(time(0)));
		int choice = (rand() % NUM_WORDS);
		 theWord = WORDS[choice][WORD]; //слово. которое нужно угадать //WORD =1?
		 theHint = WORDS[choice][HINT]; //подсказка для слова //HINT=2?

		 jumble = theWord; // перемешанный вариант слова
		int length = jumble.size(); //количество символов
		for (int i = 0; i < length; ++i) //перемешать х раз (зависит от кол. букв)
		{
			int index1 = (rand() % length);
			int index2 = (rand() % length);
			char temp = jumble[index1];
			jumble[index1] = jumble[index2];
			jumble[index2] = temp;
		}
		if (attempts != 0)
		{
			averageScore = score / attempts;
		}
		//score
		cout << "Score = " << score << std::endl << "Average Score = " << averageScore << std::endl;
		cout << "Lives = " << lives << std::endl;
		std::cout << "Attempts: " << attempts << std::endl << "last attempt scored = " << att << std::endl;
		//
		
		cout << "Unscramble е the letters to make а word. \n";
		cout << "Enter 'hint' for а hint. \n";
		cout << "Enter 'quit' to quit the game. \n\n";
		cout << "The jumble is: " << jumble;
		
		
		guess = message();
				
		 tW();
		
		if (guess == "quit")
		{
			lives = 0;
		}
	}

	cout << "\nThanks for playing.\n";
	cout << "Score = " << score << std::endl << "Average Score = " << averageScore << std::endl;
	std::cout << "Attempts: " << attempts << std::endl;
	return 0;
}

string message()
{
	string g;
	cout << "\n\nYour guess: ";
	cin >> g;
	
	return g;
}

int tW()
{
	while ((guess != theWord) && (guess != "quit") && (lives > 0))
	{
		if (guess == "hint")
		{
			cout << theHint;
			att = 40;
			score -= att;
			cout << "Score lost (-40), Score = " << score << endl;
		}
		else
		{
			cout << "Sorry. that's not it. ";
			score -= 20;
			lives--;
			cout << "Score lost (-20), Score = " << score << endl;
			cout << "Lives = " << lives;
			attempts++;
		}

		guess = message();

	}	
	if (guess == theWord)
	{
		cout << "\nThat's it! You guessed it!\n";
		att = 5 * 100;
		score += att;
		cout << "Score +1000.";
		attempts++;
	}
	return 0;
}