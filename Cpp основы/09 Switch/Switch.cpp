#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	double a, b;
	char op;
	cout << "������� a: ";
	cin >> a;
	cout << endl << "������� b: ";
	cin >> b;
	cout << endl << "������� �������� ����� ����� ������� (+ - * /): ";
	cin >> op;
	cout << endl;
	switch (op) {
	case '+':
		cout << a + b << endl;
		break;
	case '-':
		cout << a - b << endl;
		break;
	case '*':
		cout << a * b << endl;
		break;
	case '/':
		cout << a / b << endl;
		break;
	default:
		cout << "����� �������� �� ����������" << endl;
	}

	system("pause");
	return 0;
}
