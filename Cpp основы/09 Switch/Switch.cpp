#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	double a, b;
	char op;
	cout << "Введите a: ";
	cin >> a;
	cout << endl << "Введите b: ";
	cin >> b;
	cout << endl << "Введите операцию между этими числами (+ - * /): ";
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
		cout << "Такой операции не существует" << endl;
	}

	system("pause");
	return 0;
}
