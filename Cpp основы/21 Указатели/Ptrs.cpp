#include <iostream>
#include <ctime>
using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	srand(time(NULL));

	int a = 5;
	int* pa = &a; // ��������� pa ���������(������) �� ����� ������ ������, � ������� �������� ���������� a;
	int* px = &a; // �� ����� ���� �� ������������
	cout << "pa = " << pa << endl << "px = " << px << endl;

	cout << "���������� a �� ��������� ����������� ������ ������:\t" << a << endl;

	*pa = 2; // ������������� * ��������� ��� ���������� � ����������� ������ ������, � ������� �������� ���������� a � ��������� ����� ��������

	cout << "���������� a ����� ��������� ����������� ������ ������:\t" << a << endl;

	int const SIZE = 13;
	int arr[SIZE];
	for (int i = 0; i < SIZE; i++) {
		arr[i] = rand() % 100;
	}

	cout << "����� ������� �� ��������� arr: " << endl;
	for (int i = 0; i < SIZE; i++) {
		cout << arr[i] << ' ';
	}
	cout << endl;

	cout << "����� ������� �� ��������� parr: " << endl;
	int* parr = arr;
	for (int i = 0; i < SIZE; i++) {
		cout << *(parr + i) << ' ';
	}
	cout << endl;

	cout << "����� ������� �����, ������� �������� ������: " << endl;
	char* pchar_arr = (char*)parr;
	for (int i = 0; i < SIZE * 4; i++) {
		cout << (int)*(pchar_arr + i) << ' ';
	}
	cout << endl;

	return 0;
}