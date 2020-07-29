#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	int arr[5]{};
	arr[4] = 10;
	cout << arr[4] << endl;
	//cout << arr[5] << endl; здесь может лежать любое значение. ситуации обращения и переопределения нужно избегать, чтобы не портить стек.

	int arr2[] = { 1, 2, 3, 4, 5 };
	for (int i = 0; i < 5; ++i) {
		cout << arr2[i] << ' ';
	}

	cout << endl;

	int const SIZE = 13; // константа нужна для того, чтобы к ней могли обращаться многие массивы
	int arr3[SIZE] = {};
	for (int i = 0; i < SIZE; ++i) {
		arr3[i] = i;
		cout << arr3[i] << ' ';
	}
	cout << endl;

	cout << (sizeof(arr3) / sizeof(int)) << endl; // sizeof показывает, сколько байт выделилось объект (тип объекта) в памяти
	cout << (sizeof(arr3) / sizeof(arr3[0])) << endl;

	return 0;
}