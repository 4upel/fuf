#include <iostream>
#include <locale>
using namespace std ;

int main() 
{

	setlocale(LC_ALL, "Rus");//забыл зап€тую

	cout << "Hello world!" << endl ;

	cout << "ѕривет мир!" ;// все остальное хорошо
}