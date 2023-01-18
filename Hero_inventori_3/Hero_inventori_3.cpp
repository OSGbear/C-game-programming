// Программа Hero's Inventory 3.0
// Демонстрирует работу с итераторами
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
	vector<string> inventory;
	inventory.push_back("sword");
	inventory.push_back("armor");
	inventory.push_back("shield");
	vector<string>::iterator mylterator;
	vector<string>::const_iterator iter;
	cout << "Your items:\n";
	for (iter = inventory.begin(); iter != inventory.end(); ++iter)
	{
		cout << *iter << endl;
	}
	cout << "\nYou trade your sword for a battle axe.";
	mylterator = inventory.begin();
	*mylterator = "battle axe";
	cout << "\nYour items: \n";
	for (iter = inventory.begin(); iter != inventory.end(); ++iter)
	{
		cout << *iter << endl;
	}
	cout << "\nThe item name '" << *mylterator << "· has ";
	cout << (*mylterator).size() << " letters in it.\n";
	cout << "\nThe item name '" << *mylterator << "' has ";
	cout << mylterator->size() << " letters in it. \n";
	cout << "\nYou recover а crossbow from а slain enemy. ";
	inventory.insert(inventory.begin(), "crossbow");
	cout << "\nYour items: \n";
	for (iter = inventory.begin(); iter != inventory.end(); ++iter)
	{
		cout << *iter << endl;
	}
	cout << "\nYour armor is destroyed in а fierce battle. ";
	inventory.erase((inventory.begin() + 2));
	cout << "\nYour items:\n";
	for (iter = inventory.begin(); iter != inventory.end(); ++iter)
	{
		cout << *iter << endl;
	}
	system("pause");
	return 0;
}
		