// Классическая игра-головоломка. в которой пользователь разгадывает слова. с подсказками или без них.
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
	enum fields { WORD, HINT, NUM_FIELDS };
	const int NUM_WORDS = 5;
	const string WORDS[NUM_WORDS][NUM_FIELDS] =
	{

	{"wall", "Do you feel you're banging your head against something?"},
	{"glasses", "These might help you see the answer. "},
	{"labored", "Going slowly. is it?"},
	{"persistent", "Кеер at it."}, {"jumЫe", "It's what the game is all about."}
	};
	srand(static_cast<unsigned int>(time(0)));
	int choice = (rand() % NUM_WORDS);
	string theWord = WORDS[choice][WORD]; //слово. которое нужно угадать //WORD =1?
	string theHint = WORDS[choice][HINT]; //подсказка для слова //HINT=2?

	string jumble = theWord; // перемешанный вариант слова
	int length = jumble.size(); //количество символов
	for (int i = 0; i < length; ++i) //перемешать х раз (зависит от кол. букв)
	{
		int index1 = (rand() % length);
		int index2 = (rand() % length);
		char temp = jumble[index1];
		jumble[index1] = jumble[index2];
		jumble[index2] = temp;
