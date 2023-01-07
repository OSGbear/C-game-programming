//Game_stats_0.1
#include <iostream>
using namespace std;


/*//
int main()
{
	int score;
	double distance;
	char playAgain;
	bool shieldsUp;
	short lives,aliensKilled;
	score = 0;
	distance = 1300.77;
	playAgain = 'y';
	shieldsUp = true;
	lives = 5;
	aliensKilled = 12;
	double engineTemp = 6572.89;
	cout << "\nscore: " << score << endl;
	cout << "distance: " << distance << endl;
	cout << "playAgain: " << playAgain << endl;
	//shieldsUp пропустим, булевые значения не выводяться как правило.
	cout << "lives: " << lives << endl;
	cout << "aliensKilled: " << aliensKilled << endl;
	cout << "engineTemp: " << engineTemp << endl;
	int fuel;
	cout << "\nHow much fuel? ";
	cin >> fuel;
	cout << "fuel: " << fuel << endl;
	typedef unsigned short int ushort;
	ushort bonus = 10;
	cout << "\nbonus: " << bonus << endl;
	return 0;
}
*/

////Game_stats_0.11

int main()
{
	int score = 0;
	double distance = 1300.77;
	char playAgain = 'y';
	bool shieldsUp = true;
	short lives = 5, aliensKilled = 12;
	double engineTemp = 6572.89;
	cout << "\nscore: " << score << endl;
	cout << "distance: " << distance << endl;
	cout << "playAgain: " << playAgain << endl;
	//shieldsUp пропустим, булевые значения не выводяться как правило.
	cout << "lives: " << lives << endl;
	cout << "aliensKilled: " << aliensKilled << endl;
	cout << "engineTemp: " << engineTemp << endl;
	int fuel;
	cout << "\nHow much fuel? ";
	cin >> fuel;
	cout << "fuel: " << fuel << endl;
	typedef unsigned short int ushort;
	ushort bonus = 10;
	cout << "\nbonus: " << bonus << endl;
	//return 0;
	//}


	// Программа Game Stats 2.0
	// Демонстрирует арифметические операции с переменными
	//int main()
	//{
		unsigned int score1 = 5000;
		cout << "score1: " << score1 << endl;
		// изменение значения переменной
		score1 = score1 + 100;
		cout << "score1: " << score1 << endl;
		// комбинированный оператор присваивания
		score1 += 100;
		cout << "score1: " << score1 << endl;
		// операторы инкремента
		int lives1 = 3;
		++lives1;
		cout << "lives1 : " << lives1 << endl;
		lives1 = 3;
		lives1++;
		cout << "lives1: " << lives1 << endl;
		lives1 = 3;
		int bonus1 = ++lives1 * 10;
		cout << "lives1, bonus1 " << lives1 << " " << bonus1 << endl;
		lives1 = 3;
		bonus1 = lives1++ * 10;
		cout << "lives1, bonus1 = " << lives1 << ", " << bonus1 << endl;
		// целочисленное переполнение
		score1 = 4294967295;
		cout << "\nscore1: " << score1 << endl;
		++score1;
		cout << "score1: " << score1 << endl;
		return 0;
	}




