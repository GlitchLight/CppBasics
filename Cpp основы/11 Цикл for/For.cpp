#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	setlocale(LC_ALL, "rus");

	cout << "���� � i++" << endl;
	for (int i = 0; i <= 10; i++) {
		cout << i << ' ';
	}
	cout << endl;
	cout << "���� � ++i" << endl;
	for (int i = 0; i <= 10; ++i) {
		cout << i << ' ';
	}
	cout << endl;



	int i = 0; // ����� ���������� ���������� i ��� �����, ����� ��� �� �������� ��� ��� ����������
	cout << "������ ����: " << endl;
	for (; i <= 10; ++i) {
		cout << i << ' ';
	}
	cout << endl;
	cout << "����������� ������ �����: " << endl;
	for (; i <= 20; ++i) {
		cout << i << ' ';
	}
	cout << endl;

	/* ���� ����� �������� �����.
	for (; ;){
		cout << "����� ���� ���������" << endl;
	}
	*/

	cout << "������������� ���������� ���������� � �����: " << endl;
	for (int i = 0, j = 0; i < 10; i++, j += 2) { // � ����� for ����� ������������ ��������� ����������
		cout << "i = " << i << ' ';
		cout << "j = " << j << endl;
	}
	cout << endl;

	cout << "����������� ����, ������� ��������������� �� i = 13 ��� ������ break: " << endl;
	i = 0;
	for (; ;) {
		++i;
		cout << i << ' ';
		if (i == 13) {
			break;
		}
	}
	cout << endl;

	system("pause");
	return 0;

}
