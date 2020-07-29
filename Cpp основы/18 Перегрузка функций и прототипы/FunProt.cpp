#include <iostream>
using namespace std;

void increase_by(int& a, int& b); // ���� �������� ������� �� main, �� ���������� �� ����� � ����� ������ �����
double sum(double a, double b);
int sum(int& a, int& b);
int sum(int* a, int* b);


int main() {
	int a = 5;
	int b = 10;

	increase_by(a, b);
	cout << a << ' ' << b << endl;

	//��� ������� ����� ������� ���������� ���������.
	cout << sum(a / 1.0, b / 1.0) << endl;
	cout << sum(a, b) << endl;
	cout << sum(&a, &b) << endl;
}

void increase_by(int& a, int& b) { // � ��� ������� ���������� ������ �� ����������, ����� �� ��������� �� �����
	a += b;
}

double sum(double a, double b) { // � ��� ������� ���������� �������� ����������. ����� ��������� �� ����� � ������������ �������� �����
	return a + b;
}

int sum(int& a, int& b) { // � ��� ������� ���������� ���������� �� �������.
	return a + b;
}

int sum(int* a, int* b) { // � ��� ������� ���������� ��������� �� ���������� ���� int.
	return *a + *b; // *a - ��� ��������� ��������, ������������ �� ������ a
}