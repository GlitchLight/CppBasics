#include <iostream>
#include <ctime>
using namespace std;

int main() {
	// ����������� ������.

	int const ROWS = 3; // ������
	int const COLS = 3; // �������
	int arr[ROWS][COLS];

	/*	����� �� ��������� ���������� �����
	arr[][COLS] = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8} ��������� �������� ���������� ����
	}
	��� ����� ���������������� ������ ������.
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