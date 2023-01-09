#include <iostream>

int main()
{
	short num [9]={ 1, 2, 3, 4, 5, 6, 7, 8, 9};
	for (short i = 0; i <=8; i++) {
		if (i == 0) 
		{
			std::cout << num[i] << "st"<<std::endl;
		}
		else if (i==1)
		{
			std::cout << num[i] << "nd" << std::endl;
		}
		else if (i == 2)
		{
			std::cout << num[i] << "rd" << std::endl;
		}
		else
		{
			std::cout << num[i] << "th" << std::endl;
		}
			
	
	}
	std::cout << "insert the number"<<std::endl;
	short num2=0;
	std::cin >> num2;
		if (num2 == 1)
		{
			std::cout << num2 << "st" << std::endl;
		}
		else if (num2 == 2)
		{
			std::cout << num2 << "nd" << std::endl;
		}
		else if (num2 == 3)
		{
			std::cout << num2 << "rd" << std::endl;
		}
		else
		{
			std::cout << num2 << "th" << std::endl;
		}
		



	

}

	
	

