#include <iostream>
using namespace std;

class point {
public:
	point(int const& x, int const& y) {
		this->x = x; // ���� �� ��������� �������� ����� this, ���������� ������� �������� x ������������ � ���������� � �������� ��� ��� ��.
		// ����� �� �� ���������� ����� this, �� ���������� � ���� �������. ��� �� �����, ��� �������� � main point.x = value ��� �������, ��� ��� ���� public;
		this->y = y;
		cout << "this �������� ����� ����� (" << x << ", " << y << ") : " << this << endl;
	}

	int x;
	int y;
};

int main() {
	setlocale(LC_ALL, "ru");
	point p1(1, 1);
	point p2(2, 2);

	return 0;
}