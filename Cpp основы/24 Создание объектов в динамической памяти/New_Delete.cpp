#include <iostream>
#include <ctime>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	// ��������� ������������ ������ ��� ����������.
	cout << "����������:\t";
	int * a = new int;
	*a = 13;
	cout << a << endl;
	delete a;
	a = nullptr; // nullptr ����� ��� ����, ����� delete �� ���������� �������� (� ������ ���������� ������ nullptr ����� 0 ��� NULL)

	// ��������� ������������ ������ ��� ����������� �������.
	cout << "���������� ������:\n";
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
	��������� ������������ ������ ��� ������������ �������. 1 ������ (������). ������� ������ ����������, � ����� ��� ������� �� ���
	�������� ������ ��� ������ � ������������ ������ � ��������� ��������� ����� �� ������ ���� ������. ���� ������ ���� ���, ���
	���������� ������ ��� ����� ������� �� ����� �����������, � ���� ����-�� ����� ����� �������� ����������� ����� ������ ���
	������ � �������, ����� ���������� ����� ��������, ��� �������� ������ ������� ��������� ����� ������, �������� �� ��, ��� �� �����.
	*/
	cout << "��������� ������:\n";
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
	2 ������ - �������� ������ ��� ������ ���������� �� ������, � ����� �������� ����������� ����� ������ ��� ���� ������ (rows * cols);
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