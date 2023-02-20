// CA.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int& plusThree(int number);
int main()
{
	std::cout<<plusThree(7)+5;
	

}

int& plusThree(int number)
{
	
	int threeMore = number + 3;
	return threeMore;
}