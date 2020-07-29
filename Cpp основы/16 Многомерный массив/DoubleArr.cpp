#include <iostream>
#include <ctime>
using namespace std;

int main() {
	// Многомерный массив.

	int const ROWS = 3; // строки
	int const COLS = 3; // колонки
	int arr[ROWS][COLS];

	/*	Можно не указывать количество строк
	arr[][COLS] = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8} Последнее значение заполнится нулём
	}
	Или можно инициализировать массив нулями.
	arr[ROWS][COLS]{};
	*/

	for (int i = 0; i < ROWS; ++i) {
		for (int j = 0; j < COLS; ++j) {
			arr[i][j] = rand() % 100;
			cout << arr[i][j] << ' ';
		}
		cout << endl;
	}

	return 0;
}