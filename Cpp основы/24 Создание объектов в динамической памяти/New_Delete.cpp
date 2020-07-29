#include <iostream>
#include <ctime>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	// ¬ыделение динамической пам€ти дл€ переменной.
	cout << "ѕеременна€:\t";
	int * a = new int;
	*a = 13;
	cout << a << endl;
	delete a;
	a = nullptr; // nullptr нужен дл€ того, чтобы delete не срабатывал повторно (в старых программах вместо nullptr стоит 0 или NULL)

	// ¬ыделение динамической пам€ти дл€ одномерного массива.
	cout << "ќдномерный массив:\n";
	int size = 13;
	int * arr = new int[size];
	for (int i = 0; i < size; i++) {
		a[i] = rand() % 100;
	}

	for (int i = 0; i < size; i++) {
		cout << *(a + i);
	}
	cout << endl;
	delete[] arr;
	arr = nullptr;

	/*
	¬ыделение динамической пам€ти дл€ многомерного массива. 1 —пособ (плохой). —оздать массив указателей, а затем дл€ каждого из них
	выделить пам€ть под строку в динамической пам€ти и присвоить указателю адрес на начало этой строки. Ётот способ плох тем, что
	выделенна€ пам€ть дл€ всего массива не будет непрерывной, и если кому-то нужно будет выделить непрерывный кусок пам€ти под
	объект в будущем, может возникнуть така€ ситуаци€, что свободны только слишком маленькие куски пам€ти, несмотр€ на то, что их много.
	*/
	cout << "ƒвумерный массив:\n";
	int rows = 3;
	int cols = 3;
	int** multi_arr = new int* [rows];
	for (int i = 0; i < rows; i++) {
		multi_arr[i] = new int [cols];
	}

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; i++) {
			multi_arr[i][j] = rand() % 100;
			cout << multi_arr[i][j];
		}
		cout << endl;
	}
	cout << endl;
	for (int i = 0; i < rows; i++) {
		delete [] multi_arr[i];
		multi_arr[i] = nullptr;
	}

	delete[] multi_arr;
	multi_arr = nullptr;

	/*
	2 способ - выделить пам€ть под массив указателей на строки, а затем выделить непрерывный кусок пам€ти под весь массив (rows * cols);
	*/
	multi_arr = new int* [rows];
	int * multi_arr_memory = new int[rows * cols];
	for (int i = 0; i < rows; i++) {
		multi_arr[i] = &multi_arr_memory[i * cols];
	}

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			multi_arr[i][j] = rand();
			cout << multi_arr[i][j];
		}
		cout << endl;
	}

	for (int i = 0; i < rows; i++) {
		delete [] multi_arr[i];
		multi_arr[i] = nullptr;
	}
	delete[] multi_arr;
	return 0;
}