#include <iostream>
#include <ctime>
using namespace std;

void array_fill(int arr[], int const size) {
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 100;
	}
}

void array_out(int  arr[], int const size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << ' ';
	}
	cout << endl;
}

int main() {
	setlocale(LC_ALL, "rus");
	srand(time(NULL));

	int const SIZE = 10;
	int arr2[10]{};
	cout << "Массив заполненный нулями:" << endl;
	array_out(arr2, SIZE);
	array_fill(arr2, SIZE);
	cout << "Массив заполненный случайными числами:" << endl;
	array_out(arr2, SIZE);
	return 0;
}