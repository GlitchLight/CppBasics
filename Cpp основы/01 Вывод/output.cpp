# include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian"); // ����� ������� �������� ����� coub � �������
	cout << "������" << '\n';

	for (int i = -255; i < 255; i++) { // ����� ���� ��������� ���� � ��������� �� -255 �� 255 (�������� ��� ���������� setlocale)
		cout << char(i);
	}
	cout << '\n';
	return 0;
}