#include <iostream>
#include <ctime>
using namespace std;

/*
* изменить размер массива
* добавить элемент в массив
* удалить элемент массива
*/

void FillArray(int* const arr, const int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10;
	}
}

void ShowArray(const int* const arr, const int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

void push_back(int*& arr, int& size, const int value)
{
	int* newArray = new int[size + 1];

	for (int i = 0; i < size; i++)
	{
		newArray[i] = arr[i];
	}

	newArray[size] = value;

	size++;

	delete[] arr;

	arr = newArray;

}

void pop_back(int*& arr, int& size)
{
	size--;
	int* newArray = new int[size];
	for (int i = 0; i < size; i++)
	{
		newArray[i] = arr[i];
	}

	delete[] arr;

	arr = newArray;

}

void main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));

	int size = 5;

	int* arr = new int[size];

	cout << "Массив, заполненный случайными числами: " << endl;

	FillArray(arr, size);

	ShowArray(arr, size);

	cout << "Добавление элемента 13 в самый конец: " << endl;

	push_back(arr, size, 13);

	ShowArray(arr, size);

	cout << "Удаление элемента 13 с конца: " << endl;

	pop_back(arr, size);

	ShowArray(arr, size);

	delete[] arr;
}