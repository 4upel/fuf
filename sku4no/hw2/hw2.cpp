#include "iostream"
using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");

	cout << "������� �����:\n";
	int a;
	cin >> a;
	if (a > 0)
	{
		cout << "�������������";
	}
	if (a < 0)
	{
		cout << "�������������";
	}
	else
	{
		cout << "0";
	}
}