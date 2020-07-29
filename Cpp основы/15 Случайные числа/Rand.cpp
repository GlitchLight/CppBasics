#include <iostream>
#include <ctime>
using namespace std;

int main() {
	setlocale(LC_ALL, "rus");

	/*
	rand ���������� ��������������� �����, �.�. ������ ��� ��� ����� ������� ��������� ����� ���������� ���� � �� �� �����.
	��� ���������� ������, ��� ��� ���������� ���������� ����� ���������� �����-�� ��������� �����. ��� ����� ����� �������� ������,
	��������� ������� srand()

	������� time � ���������� null �����������, ������� ������ ������ � 1 ������ 1970 ����, ������� �������� � srand ������ ����� ������.
	*/
	srand(time(NULL));
	int const SIZE = 10;
	int arr[SIZE];

	for (int i = 0; i < SIZE;) {
		arr[i] = rand() % 20;
		for (int j = 0; j < i; j++) {
			if (arr[j] == arr[i]) {
				continue;
			}
		}
		i++;
	}

	for (int i = 0; i < SIZE; i++) {
		cout << arr[i] << ' ';
	}

	cout << endl;

	int min = arr[0];
	for (int i = 1; i < SIZE; i++) {
		if (arr[i] < min) {
			min = arr[i];
		}
	}

	cout << "����������� ������� -> " << min << endl;

	return 0;
}