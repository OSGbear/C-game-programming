
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
	vector<string> myGames;
	string command;
	int position;

	vector<string>::iterator myIterator;
	vector<string>::const_iterator iter;

	while (command != "quite")
	{
		cout << "Command list: " << endl;
		cout << "add at the no.	-- 1" << endl;
		cout << "add to the end	-- 2" << endl;
		cout << "delete last	-- 3" << endl;
		cout << "delete no.	-- 4" << endl;
		cout << "clear all	-- 5" << endl;
		cout << "quite" << endl;

		cout << "\nGame list:\n";
		for (iter = myGames.begin(); iter != myGames.end(); ++iter)
		{

			//The counter does not work.I want to display the number + name in the console(0 game; 1 game(N); ...
			/*int i = 0;
			i++;
			cout << i;
			does not work!!!
			*/

			cout << *iter << endl;
		}

		cout << "\n Enter the command" << endl;
		cin >> command;


		if (command == "1")
		{
			cout << "position" << endl;
			cin >> position;
			
			if (-1 < position < myGames.size())
			{
				myIterator[position];

				cin >> command;
				*myIterator = command;
			}
			else
			{
				cout << "position off the list" << endl;
			}
			
			

			/*
			cout << "does not work" << endl;
			//in this element I want to insert the name of the game before another (at the specified index)
			cout << "position" << endl;
			cin >> position;
			cout << "\n Enter name of the game" << endl;
			cin >> command;
			myGames.insert(myGames.begin() + position.command); // вставить перед
			*/
		}
		else if (command == "2")//+
		{
			cout << "\n Enter name of the game" << endl;
			cin >> command;
			myGames.push_back(command);
		}

		else if (command == "3")
		{
			myGames.pop_back();
			cout << "last game removed from list" << endl;
		}
		else if (command == "4")
		{
			cout << "position to remove" << endl;
			cin >> position;
			if (-1 < position < myGames.size())
			{
				myGames.erase((myGames.begin() + position));
			}
			else
			{
				cout << "position off the list" << endl;
			}
		}
		else if (command == "5")
		{
			myGames.clear();
			std::cout << "list cleared" << std::endl;
		}

	}
	return 0;
}