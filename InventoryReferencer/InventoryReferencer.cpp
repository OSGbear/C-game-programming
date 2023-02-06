// Программа Inventory Referencer
// Демонстрирует возврат ссылки
#include <iostream>
#include <string>
#include <vector>
using namespace std;
	// возвращает ссылку на строку
	string& refToElement (vector<string>& inventory, int i);
	int main()
	{
		vector<string> inventory;
		inventory.push_back("sword");
		inventory.push_back("armor");
		inventory.push_back("shiеld");
		// отображается строка.на которую указывает возвращенная ссылка
		cout << "Sending the returned reference to cout: \n";
		cout << refToElement(inventory, 0) << "\n \n";
		// присваивает одну ссылку другой - малозатратная операция присваивания
		cout << "Assigning the returned reference to another reference. \n";
		string& rStr = refToElement(inventory, 1);
		cout << "Sendi ng the new reference to cout: \n";
		cout << rStr << "\n\n";
		// копирует строковый объект - затратная операция присваивания
		cout << "Assigning the returned reference to а string object.\n";
		string str = refToElement(inventory, 2);
		cout << "Sending the new string object to cout:\n";
		cout << str << "\n\n";
		// изменение строкового объекта посредством возвращенной ссылки
		cout << "Altering an object through а returned reference. \n";
		rStr = "Healing Potion";
		cout << "Sending the altered object to cout:\n";
		cout << inventory[1] << endl;
		return 0;
	}
		// возвращает ссылку на строку
		string& refToElement(vector<string>& vec, int i)
		{
			return vec[i];
		}