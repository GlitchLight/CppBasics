#include <iostream>
#include <vector>

typedef std::vector <int> int_vector; // typedef ����� ������ std::vector <int> � ��������� ������������ int_vector ������ ���. ������� typedef - ��� ���������.

int main() {
	setlocale(LC_ALL, "ru");
	std::vector <int> MyVector; // ��� ����, ����� �� ������ ��������� ��� ������, ����� ������������ typedef.
	int_vector MyVector2;

	return 0;
}