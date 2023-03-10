// Виселица
// Классическая игра "Виселица"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cctype>
using namespace std;

int main()
{
	// подготовка
		const int МАХ_WRONG = 8; // максимально допустимое количество ошибок
		vector<string>words ; // подборка слов для загадывания
		words.push_back("GUESS") ;
		words.push_back("HANGMAN") ;
		words.push_back("DIFFICULT") ;
		srand(static_cast<unsigned int>(time(0))) ;
		random_shuffle(words.begin(),words.end()) ;
		const string THE_WORD = words[0]; //слово для отгадывания
		int wrong = 0 ; // количество ошибочных вариантов
		string soFar(THE_WORD.size(), '-') ; // часть слова.открытая на данный момент
		string used = "" ; // уже отгаданные буквы
		cout << "Welcome to Hangman. Good luck!\n" ;

	// основной цикл
		while ((wrong < МАХ_WRONG) && (soFar != THE_WORD)) {

			cout << "\n\nYou have " << (МАХ_WRONG - wrong);
			cout << " incorrect guesses left. \n";
			cout << "\nYou've used the following letters;\n" << used << endl;// Символы чоторые я уже писал
			cout << "\nSo far the word is;\n" << soFar << endl; // показать отгаданые буквы
			char guess;
			cout << "\n\nEnter your guess; ";
			cin >> guess; //получение символа
			guess = toupper(guess); //перевод в верхний регистр.
	// так как загаданное слово записано в верхнем регистре
			while (used.find(guess) != string::npos)/* если правильно понял то: если поиск найдет символ в уже написаных
				цыкл предложит ввести символ повторно*/
			{
				cout << "\nYou've already guessed " << guess << endl;
				cout << "Enter your guess; ";
				cin >> guess;
				guess = toupper(guess);
			}
			used += guess;
			if (THE_WORD.find(guess) != string::npos)
			{
				cout << "That's right ! " << guess << " is in the word. \n";
				// обновить переменную soFar.включив в нее новую угаданную букву
				for (int i = 0; i < THE_WORD.length(); ++i) //length можно заменить на size
				{
					if (THE_WORD[i] == guess)
					{
						soFar[i] = guess;
					}
				}
			}

			else
			{

				cout << "Sorry. " << guess << " isn't in the word.\n";
				++wrong;
			}
		}
			// конец игры
			if (wrong == МАХ_WRONG) {
				
				cout << "\nYou've been hanged!";
			}
			else
			{
				cout << "\nYou guessed it!";
			}
			cout << "\nThe word was " << THE_WORD << endl;
		return 0;
}