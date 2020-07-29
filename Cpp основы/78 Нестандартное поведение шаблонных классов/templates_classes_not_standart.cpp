#include <iostream>
#include <string>
using namespace std;

template <typename T>
class point {
public:
	point(T const & x, T const & y, T const & z) {
		this->x = x;
		this->y = y;
		this->z = z;
	}
	T x;
	T y;
	T z;
};

// ������������� ��������� ������� ������ - ��� ����������� ���������� ��������� ��� ��������� ���� ������
template <>
class point <string> { // � ����� ������, string
public:
	point(string const& x, string const& y, string const& z) { // ��������, �� ����� ������� ������ ����� �� ��������� ����� ������.
		cout << "�� ����� �����? �� ����� ������ ������� �����!" << endl;
	}
};


int main() {
	setlocale(LC_ALL, "ru");
	point <string> pt("���", "�����", "�������");


	return 0;
}