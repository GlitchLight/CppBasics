#include <iostream>
using namespace std;

template <typename T>
class point {
public:
	point(T x, T y, T z) : x(x), y(y), z(z) {}

protected:
	T x;
	T y;
	T z;
};

template <typename T>
class child_of_point : public point <T> { // ��� ������������ �� ������������� ������, ���� ������������ ����� ���������, �� ����� ��������� ������ ��� ������ ��� ������ ��� ������������ � ������� �������
public:
	child_of_point(T const& x, T const& y, T const& z) : point <T>(x, y, z) { // �� �� �������� ��� ������ ������������. ��� ����� ���������� �� ����� ����������, ������� ������ �������� ��� ������.
	}

	void print() {
		cout << this->x << ' ' << this->y << ' ' << this->z << endl;
	}
};


int main() {
	child_of_point <int> ch(13, 22, 23);
	ch.print();

	return 0;
}