#include <iostream>
using namespace std;

void increase_by(int& a, int& b); // Если объявить функции до main, то определить их можно в любом другом месте
double sum(double a, double b);
int sum(int& a, int& b);
int sum(int* a, int* b);


int main() {
	int a = 5;
	int b = 10;

	increase_by(a, b);
	cout << a << ' ' << b << endl;

	//Все функции суммы выдадут одинаковый результат.
	cout << sum(a / 1.0, b / 1.0) << endl;
	cout << sum(a, b) << endl;
	cout << sum(&a, &b) << endl;
}

void increase_by(int& a, int& b) { // в эту функцию передаются ссылки на переменные, чтобы не создавать их копии
	a += b;
}

double sum(double a, double b) { // в эту функцию передаются значения переменных. здесь создаются их копии и возвращается значение суммы
	return a + b;
}

int sum(int& a, int& b) { // в эту функцию передаются переменные по ссылкам.
	return a + b;
}

int sum(int* a, int* b) { // в эту функцию передаются указатели на переменные типа int.
	return *a + *b; // *a - это получение значения, находящегося по адресу a
}