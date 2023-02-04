// Программа M-L
#include <iostream>
#include <string>
using namespace std;
string askText(string prompt);
int askNumber(string prompt);
void tell(string name, int number);
int main()
{
	if
	
	
	
	cout << "Welcome to M-L.\n\n";
	cout << "enter text.\n";
	string name = askText("Please enter а text; ");
	int number = askNumber("Please enter а number; ");
	tell (name, number);
	return 0;
}

string askText(string prompt)
{
	string text;
	cout << prompt;
	cin >> text;
	return text;
}

int askNumber(string prompt)
{
	int num;
	cout << prompt;
	cin >> num;
	return num;
}

void tell(string name, int number)
{
	cout << "your text ";
	cout << name<<endl;
	cout << "your number\n";
	cout << number<<endl;
	
}

/*You are basically right. The only issue I see is that you did not use any default values in you functions. Another issue is could be that we are not putting in checks when asking for the number. 

Here is how I understand the question. This code has not been tested, but it does use a default value for the prompt:
#include <iostream>
#include <string>
// If nothing is passed in, it will call "Tell me a number"
// If a string is passed in it will echo the string
int Ask(const std::string& prompt = "Tell me a number") // Default 
{
	int number = 0;
	std::cout << prompt << "\n";
	// This should have a check to see if the input is a number!
	std::cin << number;
	std::cout << "\n";
	std::cout << "you entered: " << number <<"\n";
	return number;
}

int main ()
{
	// Default Prompt
	int num1 = AskNumber();
	// Defined prompt
	int num2 = AskNumber("Please, tell me a number");

	std::cout << "Numbers returned: " << num1 << ", " << num2 << std::endl;
	return 0;
}

Hopefully that helps.
*/

/*
значения по умолчанию в своих функциях. 
Другая проблема может заключаться в том, что мы не выставляем чеки, когда запрашиваем номер.

Вот как я понимаю вопрос. Этот код не тестировался, но он использует значение по умолчанию для подсказки:




// Если ничего не передано, вызовет "Скажи мне номер"
// Если передана строка, она будет выведена эхом
int Ask(const std::string& prompt = "Назови мне число") // По умолчанию
{
целое число = 0;
std::cout << приглашение << "\n";
// Это должно иметь проверку, чтобы увидеть, является ли ввод числом!
std::cin << число;
std::cout << "\n";
std::cout << "вы ввели: " << number <<"\n";
обратный номер;
}

основной ()
{
// Подсказка по умолчанию
int num1 = СпроситьЧисло();
// Определенная подсказка
int num2 = AskNumber("Назовите, пожалуйста, число");

std::cout << "Возвращенные числа: " << num1 << ", " << num2 << std::endl;
вернуть 0;
}

Надеюсь, это поможет.*/