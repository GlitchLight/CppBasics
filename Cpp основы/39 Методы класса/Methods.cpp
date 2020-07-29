#include <iostream>
#include <cmath>
using namespace std;

class point {
public:
	void sqr() { // ����� ������ - ��� ������ �������, ������� ����������� ������ ������
		x *= x;
		y *= y;
	}

	double distance(point const& p) {
		return sqrt((x - p.x) * (x - p.x) + (y - p.y) * (y - p.y));
	}

	int x;
	int y;
};

int main() {
	setlocale(LC_ALL, "ru");
	point p1;
	p1.x = 2;
	p1.y = 3;

	cout << "����� �� ���������� sqr():\t\t" << p1.x << '\t' << p1.y << endl;
	p1.sqr();
	cout << "����� ����� ���������� ������� sqr():\t" << p1.x << '\t' << p1.y << endl;

	point p2;
	p2.x = 1;
	p2.y = 1;
	cout << "����� 1:\t" << p1.x << '\t' << p1.y << endl;
	cout << "����� 2:\t" << p2.x << '\t' << p2.y << endl;
	cout << "���������� ����� ������� p1 � p2:\t" << p1.distance(p2);
}