﻿// XOXO.cpp

// Демонстрирует работу с многомерными массивами
#include <iostream>
using namespace std;
int main()
{
	const int ROWS = 3;
	const int COLUMNS = 3;
	char board[ROWS][COLUMNS] = { {'o','x','o'},
	{' ', 'x' , 'x'},
	{'x', 'o', 'o'} };
	cout << "Here's the tic-tac-toe board:\n";
	for (int i = 0; i < ROWS; ++i)
	{
		for (int j = 0; j < COLUMNS; ++j)
		{
			cout << board[i][j];
		}
		cout << endl;
	}
	cout << "\n'x' moves to the empty location.\n\n";
	board[1][0] = 'x';
	cout << "Now the tic-tac-toe board is:\n";
	for (int i = 0; i < ROWS; ++i)
	{
		for (int j = 0; j < COLUMNS; ++j)
		{
			cout << board[i][j];
		}
		cout << endl;
	}
		cout << "\n'x' wins!";
		return 0;
	}