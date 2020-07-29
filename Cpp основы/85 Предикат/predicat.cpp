#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool GreaterThanZero(int a) { // Функция, которая возвращает да или нет называется предикатом. Она выделена в отдельный раздел потому, что используется в STL.
	return a > 0;
}

int main() {
	setlocale(LC_ALL, "ru");
	vector <int> v = { 1, 2, 3, 4, -5, -9 };
	// Проверить, сколько чисел в векторе больше, чем 0.
	cout << count_if(v.begin(), v.end(), GreaterThanZero); // Начальный счетчик 0. Добавляет к счетчику 1, если выполняется условие GreaterThanZero


	return 0;
}