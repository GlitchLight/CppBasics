#include <iostream>
#include <ctime>
using namespace std;

template <typename T>
T* copy(T const* const arr, int const SIZE) {
	T* arr_copy = new T[SIZE];
	for (int i = 0; i < SIZE; ++i) {
		arr_copy[i] = arr[i];
	}
	return arr_copy;
}

template <typename T>
void out(T const* const arr, int const SIZE) {
	for (int i = 0; i < SIZE; ++i) {
		cout << arr[i] << ' ';
	}
	cout << endl;
}

int main() {
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	int size = 13;
	int* arr = new int[size];
	for (int i = 0; i < size; ++i) {
		arr[i] = rand();
	}

	int* arr_copy = copy(arr, size);

	cout << "Вывод первого массива" << endl;
	out(arr, size);
	cout << "Вывод второго массива" << endl;
	out(arr_copy, size);

	delete[] arr;
	delete[] arr_copy;
	return 0;
}