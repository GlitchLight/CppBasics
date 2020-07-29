#include <iostream>
using namespace std;
class point {
public:
	point(int x = 0, int y = 0) { // ����������� �������������� ���� ������. ��� ���� �������� ������������� � ������������� �������. ������������� ���. � private ���
// �������� ������.
		this->x = x;
		this->y = y;
	}

	point(double x, double y) { // �����������, ������ ����������� � ����������� �� ������ ������� ������
		cout << "���� ����� �������� ������ � �������������� �������, ������� � ���������� ����������� �� 0 0" << endl;
		this->x = 0;
		this->y = 0;
	}

	void print() {
		cout << x << ' ' << y << endl;
	}

private:
	int x;
	int y;
};


int main() {
	setlocale(LC_ALL, "ru");
	point p(1.1, 2.2);
	cout << "1 �����:" << endl;
	p.print();

	cout << endl;

	cout << "2 �����:" << endl;
	point p2(1, 2);
	p2.print();

	cout << endl;

	cout << "3 �����:" << endl;
	point p3; // point p3() ���� ���������� �� ����������, ������� ������ ��������� �� ����, ���������� ������ ������. � �������, int a ������� ��� ������ � �����.
	p3.print();

	return 0;
}