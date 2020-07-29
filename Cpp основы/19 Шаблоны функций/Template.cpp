#include <iostream>
using namespace std;

/*
int sum (int a, int b){
	return a + b;
}

double sum (double a, double b){
	return a + b;
}

...

��� ������� ������ ���� ������ ���������� ������ ���� ������� sum, ���� ��� ������ ���� � �� ��.
��� ����, ����� ����� ��������, ����� ������������ ������.
*/

template <typename T> //������ typename ����� ������ class
T sum(T a, T b) { //��� ������� T ���������� �� ���, ������� ������ ����������, ������������ � �������. ��������, ���� a - int, �� T - int;
	return a + b;
}

template <typename T1, typename T2>
T1 sum(T1 a, T2 b) {
	return a + b;
}


int main() {
	setlocale(LC_ALL, "ru");
	double a = 13.1, b = 169.3;
	cout << "�������� double � double: ";
	cout << sum(a, b) << endl;
	int c = 12, d = 1;
	cout << "�������� int � int: ";
	cout << sum(c, d) << endl;
	// ��� �����, ����� ����������� ��� ������ ����� ������.
	cout << "�������� double � int: ";
	cout << sum(a, d) << endl;

	return 0;
}