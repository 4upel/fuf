#include <iostream>
#include <locale>
using namespace std ;

int main() 
{
	string a;

	setlocale(LC_ALL, "Rus");//����� �������

	cout << "Hello world!" << endl;

	cout << "������ ���!" <<endl;// ��� ��������� ������


	cout << "Enter: ";
	cin >> a;

	cout << a << endl;
	
}