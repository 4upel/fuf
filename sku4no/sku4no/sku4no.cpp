#include "iostream"
using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");
	float a, c;
	char b;


	cout << "������� �����:\n";
	cin >> a;
	cout << "������� ��������: (+, -, *, /,):\n";
	cin >> b;
	cout << "������� ������ �����:\n";
	cin >> c;

	switch (b)
	{
	case'+':
		cout << "���������: " << a + c << endl;
		break;
	case'-':
		cout << "���������: " << a - c << endl;
		break;
	case'*':
		cout << "���������: " << a * c << endl;
		break;
	case'/':
		cout << "���������: " << a / c << endl;
		break;

	default:
		cout << "�������� ��������";
		break;
	}
}