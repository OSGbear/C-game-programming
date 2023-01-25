#include <iostream>
#include <string> 
#include<vector>  
#include <algorithm>

int main()
{
	//данные пользователя
	std::vector<std::string> myGames;
	std::vector<std::string>::const_iterator iter;
	std::string command;
	std::string position;

	//myGames.reserve(20); //резервирую память
	std::cout << "command list: " << std::endl;
	std::cout << "add at the № -- 1" << std::endl;
	std::cout << "add to the end -- 2" << std::endl;
	std::cout << "delete last -- 3" << std::endl;
	std::cout << "delete № -- 4" << std::endl;
	std::cout << "clear all -- 5" << std::endl;
	std::cout << "quite" << std::endl;
	
	myGames.push_back("DUNE");

	while (command!="quite")
	{
		std::cout << "\n Enter the command" << std::endl;
		std::cin >> command;

		




		
		if (command=="1")
		{
			/*std::cout << "position" << std::endl;
			std::cin >> position;
			std::cin >> command;
			myGames.insert(myGames.iter[position].command); // вставить перед
			*/
		}
		else if (command == "2")
		{
			std::cout << "\n Enter name of the game" << std::endl;
			std::cin >> command;
			myGames.push_back(command);
		}
		
		else if (command == "3")
		{
			myGames.pop_back();
			std::cout << "last game removed from list" << std::endl;
		}
		else if (command == "4")
		{
			/*inventory.erase((inventory.begin() + 2));*/
		}
		else if (command == "5")
		{
			myGames.clear();
				std::cout << "list cleared" << std::endl;
		}

		/*for (iter = myGames.begin(); iter != myGames.end(); ++iter);
		{
			int i = 0;
			i++;
			std::cout << i;
			std::cout << *iter;
		}*/

		
	}


	return 0;
}

/*
добавить  №
удалить №
удалить последний

что хочу реализовать:
1 инициализация вектора для хранения данных (с определанным начальным значением)
2 инициализация итератора для работы с вектором
3 добавление данных: в начало, конец
4 замена данных
5 удаление первого последнего, иликонкретного элемента
6 завершение программы

*/