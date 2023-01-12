// Hero_Inventory.cpp :

// Программа Hero's Inventory
// Демонстрирует работу с массивами
#include <iostream>
#include <string>
using namespace std;
int main()
{
	const int MAX_ITEMS = 10;
	string inventory[MAX_ITEMS];
	int numltems = 0;
	inventory[numltems++]="sword";
	inventory[numltems++]="armor";
	inventory[numltems++]="shield";
	cout << "Your items:\n";
	for (int i = 0; i < numltems; ++i)
	{
		cout << inventory[i] << endl;
	}
	cout << "\nYou trade your sword for a battle axe. ";
	inventory[0] = "battl axe";
	cout << "\nYour items:\n";
	for (int i = 0; i < numltems; ++i)
	{
		cout << inventory[i] << endl;
	}
		cout << "\n The item name " << inventory[0] << " has ";
		cout << inventory[0].size() << " letters in it. \n"; //.size() -функция-член; inventory[0]-элемент
		cout << "\nYou find а healing potion.";
	
		if (numltems < MAX_ITEMS)
		{
		inventory[numltems++] = "healing potion";
		}
		else
		{
		cout << "You have too many items and can't carry another.";
		}
		cout << "\nYour items:\n";
	
		for (int i = 0; i < numltems; ++i)
		{
			cout << inventory[i] << endl;
		}
			return 0;
	}
