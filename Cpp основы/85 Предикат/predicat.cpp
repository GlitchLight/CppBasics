#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool GreaterThanZero(int a) { // �������, ������� ���������� �� ��� ��� ���������� ����������. ��� �������� � ��������� ������ ������, ��� ������������ � STL.
	return a > 0;
}

int main() {
	setlocale(LC_ALL, "ru");
	vector <int> v = { 1, 2, 3, 4, -5, -9 };
	// ���������, ������� ����� � ������� ������, ��� 0.
	cout << count_if(v.begin(), v.end(), GreaterThanZero); // ��������� ������� 0. ��������� � �������� 1, ���� ����������� ������� GreaterThanZero


	return 0;
}