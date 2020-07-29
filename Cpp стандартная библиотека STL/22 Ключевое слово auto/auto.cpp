#include <iostream>
#include <vector>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	auto int_val = 10; // auto ������������� ���������� ��� rvalue, �� ������������ ��� ������������, ��������� ��� �������� ������������� ����
	auto double_val = 1.1;
	// auto val; �� ������ �� ��������� ����������, ��������� ��� rvalue ����������. ���������� �� �����, ������� ������ �������� ��� ����� ����������. 

	// �� ��� �������� ����� �� �� ����� �������� ����������.

	vector <int> MyVector{ 2, 3, 4 };

	vector <int>::iterator it = MyVector.begin(); // ��� ����, ����� ������� ��������, ����� ������� �������� ������� ������
	auto it2 = MyVector.begin(); // ��������� �������� ������������� ���������� ��� rvalue, vector <int>::iterator ����� �������� ��
	// auto

	for (auto it = MyVector.begin(); it != MyVector.end(); ++it) {
		cout << *it << ' ';
	}
	cout << endl;

	for (auto el : MyVector) {
		cout << el << ' ';
	}
	cout << endl;

	return 0;
}