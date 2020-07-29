#include <iostream>
#include <vector>

typedef std::vector <int> int_vector; // typedef берет запись std::vector <int> и позволяет использовать int_vector вместо нее. Коротко typedef - это псевдоним.

int main() {
	setlocale(LC_ALL, "ru");
	std::vector <int> MyVector; // Для того, чтобы не писать полностью имя класса, можно использовать typedef.
	int_vector MyVector2;

	return 0;
}