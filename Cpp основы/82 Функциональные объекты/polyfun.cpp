#include <iostream>
#include <functional>
using namespace std;

void fun() {
	cout << "��������� �������" << endl;
}

int abrakadabra(int a, int b) {
	return a + b;
}

int main() {
	setlocale(LC_ALL, "ru");
	function <void()> side_function; // ��������� ������, �������� ����� ��������� ������ ������� � ���������� void();
	side_function = fun; // ������ ��������� ������� side_function ����� ��, ��� � � ������� fun;
	side_function();

	function <int(int a, int b)> sum;
	sum = abrakadabra;
	cout << sum(1, 3);

	return 0;
}