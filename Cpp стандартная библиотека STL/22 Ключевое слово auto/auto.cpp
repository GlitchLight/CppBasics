#include <iostream>
#include <vector>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	auto int_val = 10; // auto автоматически определяет тип rvalue, но использовать его нежелательно, поскольку это ухудшает читабельность кода
	auto double_val = 1.1;
	// auto val; но нельзя не объявлять переменную, поскольку тип rvalue неизвестен. Компилятор не знает, сколько памяти выделить под новую переменную. 

	// но это ключевое слово всё же имеет полезное применение.

	vector <int> MyVector{ 2, 3, 4 };

	vector <int>::iterator it = MyVector.begin(); // Для того, чтобы создать итератор, нужно сделать довольно длинную запись
	auto it2 = MyVector.begin(); // Поскольку итератор автоматически определяет тип rvalue, vector <int>::iterator можно заменить на
	// auto

	for (auto it = MyVector.begin(); it != MyVector.end(); ++it) {
		cout << *it << ' ';
	}
	cout << endl;

	for (auto el : MyVector) {
		cout << el << ' ';
	}
	cout << endl;

	return 0;
}