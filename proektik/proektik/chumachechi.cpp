#include <iostream>
#include <locale>
using namespace std ;

int main() 
{
	string a;

	setlocale(LC_ALL, "Rus");//забыл зап€тую

	cout << "Hello world!" << endl;

	cout << "ѕривет мир!" <<endl;// все остальное хорошо


	cout << "Enter: ";
	cin >> a;

	cout << a << endl;
	
}