#include <iostream>
#include <ctime>

#include <array> // Статический массив
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	srand(time(NULL));

	int const SIZE = 7;
	array <int, SIZE> arr{};
	cout << arr.at(0) << endl;
	// arr.front(), arr.back() Доступ к первому и последнему элементу
	arr.fill(rand() % 100); // заполняет массив случайным числом
	for (int el : arr) {
		cout << el << ' ';
	}
	cout << endl;

	return 0;
}