#include <iostream>
#include <functional>
using namespace std;

void fun() {
	cout << "Вызвалась функция" << endl;
}

int abrakadabra(int a, int b) {
	return a + b;
}

int main() {
	setlocale(LC_ALL, "ru");
	function <void()> side_function; // Создается объект, которому можно присвоить объект функции с сигнатурой void();
	side_function = fun; // Теперь поведение объекта side_function Такое же, как и у функции fun;
	side_function();

	function <int(int a, int b)> sum;
	sum = abrakadabra;
	cout << sum(1, 3);

	return 0;
}