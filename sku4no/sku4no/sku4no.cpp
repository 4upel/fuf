#include "iostream"
using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");
	float a, c;
	char b;


	cout << "Введите число:\n";
	cin >> a;
	cout << "Введите операцию: (+, -, *, /,):\n";
	cin >> b;
	cout << "Введите второе число:\n";
	cin >> c;

	switch (b)
	{
	case'+':
		cout << "Результат: " << a + c << endl;
		break;
	case'-':
		cout << "Результат: " << a - c << endl;
		break;
	case'*':
		cout << "Результат: " << a * c << endl;
		break;
	case'/':
		cout << "Результат: " << a / c << endl;
		break;

	default:
		cout << "Неверная операция";
		break;
	}
}