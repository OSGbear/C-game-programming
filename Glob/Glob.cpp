// Программа Glob Демонстрирует работу с глобальными переменными
#include <iostream>
using namespace std;
	int glob = 10 ; // глобальная переменная
	void access_global();
	void hide_global();
	void change_global();
	int main()
{
	cout<< "In main() glob is; " << glob << "\n\n" ;
	access_global();
	hide_global();
	cout << "In main() glob is; " << glob << "\n\n";
		
		change_global() ;
		cout << "In main() glob is; "<< glob << "\n\n" ;
		return 0;
}
void access_global()
{
	
	cout << "In access_globa 10 glob is; " << glob << "\n\n";
}
void hide_global()
{
	int glob = 0; //скрываем глобальную переменную glob
	cout << "In hide_global() glob is; " << glob << "\n\n";
}
void change_global()
{
	glob = -10; // изменяем глобальную переменную glob
	cout << "In change_global () glob is; " << glob << "\n\n";
}