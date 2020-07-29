#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	setlocale(LC_ALL,"rus");
	int a = 1, b = 2, c = 0;

	//Унарные операторы
	a = -a;
	cout << a << endl;
	//Бинарные операторы
	cout << a << '+' << b << '=' << a + b << endl;
	cout << a << '-' << b << '=' << a - b << endl;
	cout << a << '*' << b << '=' << a * b << endl;
	cout << a << '/' << b << '=' << (float) a / b << endl;
	//Тенарные операторы
	cout << (a > b ? a : b) << endl;

	cin >> a >> b >> c;
	int sum = a + b + c;
	cout << "Сумма чисел sum = " << sum << endl;
	cout << "Произведение чисел pr = " << a * b * c << endl;
	cout << "Среднее чисел aver = " << sum / 3 << endl;
	system("pause");
}
