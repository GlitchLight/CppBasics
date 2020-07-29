#include <iostream>
#include <ctime>
using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	srand(time(NULL));

	int a = 5;
	int* pa = &a; // Указатель pa указывает(хранит) на адрес ячейки памяти, в которой хранится переменная a;
	int* px = &a; // Он может быть не единственным
	cout << "pa = " << pa << endl << "px = " << px << endl;

	cout << "Переменная a до изменения содержимого ячейки памяти:\t" << a << endl;

	*pa = 2; // Разыменование * позволяет нам обратиться к содержимому ячейки памяти, в которой хранится переменная a и присвоить новое значение

	cout << "Переменная a после изменения содержимого ячейки памяти:\t" << a << endl;

	int const SIZE = 13;
	int arr[SIZE];
	for (int i = 0; i < SIZE; i++) {
		arr[i] = rand() % 100;
	}

	cout << "Вывод массива по указателю arr: " << endl;
	for (int i = 0; i < SIZE; i++) {
		cout << arr[i] << ' ';
	}
	cout << endl;

	cout << "Вывод массива по указателю parr: " << endl;
	int* parr = arr;
	for (int i = 0; i < SIZE; i++) {
		cout << *(parr + i) << ' ';
	}
	cout << endl;

	cout << "Вывод каждого байта, который занимает массив: " << endl;
	char* pchar_arr = (char*)parr;
	for (int i = 0; i < SIZE * 4; i++) {
		cout << (int)*(pchar_arr + i) << ' ';
	}
	cout << endl;

	return 0;
}