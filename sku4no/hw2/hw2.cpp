#include "iostream"
using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");

	cout << "¬ведите число:\n";
	int a;
	cin >> a;
	if (a > 0)
	{
		cout << "положительное";
	}
	if (a < 0)
	{
		cout << "отрицательное";
	}
	else
	{
		cout << "0";
	}
}