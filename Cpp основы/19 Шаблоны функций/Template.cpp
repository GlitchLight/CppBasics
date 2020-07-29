#include <iostream>
using namespace std;

/*
int sum (int a, int b){
	return a + b;
}

double sum (double a, double b){
	return a + b;
}

...

Для каждого нового типа данных приходится писать свою функцию sum, хотя она делает одно и то же.
Для того, чтобы этого избежать, можно использовать шаблон.
*/

template <typename T> //Вместо typename можно писать class
T sum(T a, T b) { //Имя шаблона T заменяется на тип, который присущ параметрам, передаваемым в функцию. Например, если a - int, то T - int;
	return a + b;
}

template <typename T1, typename T2>
T1 sum(T1 a, T2 b) {
	return a + b;
}


int main() {
	setlocale(LC_ALL, "ru");
	double a = 13.1, b = 169.3;
	cout << "Сложение double и double: ";
	cout << sum(a, b) << endl;
	int c = 12, d = 1;
	cout << "Сложение int и int: ";
	cout << sum(c, d) << endl;
	// Как видно, сумма вычислилась для разных типов данных.
	cout << "Сложение double и int: ";
	cout << sum(a, d) << endl;

	return 0;
}