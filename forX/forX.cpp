//я испытал фантомную боль мозга пока разбирался как это работает

#include <iostream>

int main()
{
	std::cout << "\n\nCounting with nested for loops:\n";
	const int ROWS = 5;
	const int COLUMNS = 3;
	for (int i = 0; i < ROWS; ++i)
	{
		for (int j = 0; j < COLUMNS; ++j)
	{
			std::cout << i << "." << j << " ";
	}
		std::cout << std::endl;

	}
	return 0;
}