#include <iostream>
#include <cstdlib>
using namespace std;

// ����� �� ������������ ��� � ����������������.

int main() {
	setlocale(LC_ALL, "rus");
	cout << 1 << ' ';

	goto link; //��������� ������� � ����� link

	cout << 2;
	cout << 2;
	cout << 2;

	link: //����� link

	cout << 3 << endl;
	system("pause");
}