#include <iostream>

int main()
{
	unsigned int score = 0;
	short lives = 4;
	short attempts = 0;
	short att = 0;
	unsigned int averageScore = 0;

	void start(); 
	{
		std::cout << "Hello, at the beginning of the game you have:";
		std::cout << "Score = " << score << std::endl << "Average Score = " << averageScore << std::endl << "Lives = " << lives << std::endl;
		std::cout << "Attempts: " << attempts << std::endl << "last attempt scored = " << att << std::endl;
	}


	while (lives>0) { 
		lives--; 		
		int vvod();
		{
			std::cout << "\n\n It was a difficult fight and you scored points scored per attempt: ";
			std::cin >> att;
			score += att;
			attempts++;
			averageScore = score / attempts;
			std::cout << "Score = " << score << std::endl << "Average Score = " << averageScore << std::endl << "Lives = " << lives << std::endl;
			std::cout << "Attempts: " << attempts << std::endl << "last attempt scored = " << att << std::endl;
		}
	}

	
	
	if (lives == 0) {
			std::cout << "\n\n Geme Over!";
			std::cout << "\n Score = " << score << std::endl << "Average Score = " << averageScore << std::endl << "Lives = " << lives << std::endl;
			std::cout << "Attempts: " << attempts << std::endl << "last attempt scored = " << att << std::endl;
	}
	
	return 0;
}

