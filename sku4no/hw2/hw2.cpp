#include "iostream"
using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");
	int kol_simvolov;
	char simvol;
	char line_kuda;

	cout << "Введите количество символов:";
	cin >> kol_simvolov;
	cout << "Введите символ для линии:";
	cin >> simvol;
	cout << "Введите направление для линии (h - горизонтальная, v - вертикальная):";
	cin >> line_kuda;
	if (line_kuda == 'h')
	{
		for (int i = 0; i < kol_simvolov; i++)
		{
			cout << simvol << endl;
		}
	}
	if (line_kuda == 'v')
	{
		for (int i = 0; i < kol_simvolov; i++)
		{
			cout << simvol << endl;
		}
	}
	else
	{
		cout << "Неверные значения!";
	}
}