//Game Over 1.0

/*#include <iostream>

int main()
{
	std::cout << "Game over" << std::endl;
	std::system("pause");
	return 0;
}*/

//Geme Over 1.1 - демонстрация using

/*#include <iostream>
using namespace std;

int main()
{
	cout << "Game over" << endl;
	system("pause");
	return 0;
}*/

//Geme Over 1.2 - демонстрация using

#include <iostream>
using std::cout;
using std::endl;

int main()
{
	//+ д/з
	float scor1;
	float scor2;
	float scor3;
	cout << "Game over/ indicate points for the level, skill and number of defeated enemies" << endl;
	std::cin >> scor1;
	std::cin >> scor2;
	std::cin >> scor3;
	cout << "average value:" << (scor1 + scor2 + scor3)/3 << ".";
	system("\a pause");

	return 0;
}
