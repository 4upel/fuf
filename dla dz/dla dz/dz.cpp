#include <iostream>
#include <locale>
using namespace std;


int main() {
	setlocale(LC_ALL, "Rus");
	double nomer1, nomer2, result;
	char operacia;

	cout << "Ведите число:\n";
	cin >> nomer1;

	cout << "Введите действие: +,-,*,/\n";
	cin >> operacia;

	cout << "Введите второе число:\n";
	cin >> nomer2;
	
	if (operacia == '*') {
		cout << nomer1 * nomer2;

	}

	if (operacia == '-') {
		cout << nomer1 - nomer2;

	}
	
	if (operacia == '/') {
		cout << nomer1 / nomer2;

	}
	
	if (operacia == '+') {
		cout << nomer1 + nomer2;

	}
}