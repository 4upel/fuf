#include <iostream>
#include <locale>
using namespace std ;

int main() {

	setlocale(LC_ALL "Rus");

	cout << "Hello world!" << endl ;

	cout << "Привет мир!" ;
}