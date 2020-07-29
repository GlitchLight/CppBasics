#include <iostream>
#include <typeinfo>
using namespace std;

class point {
public:
	double x;
	double y;
	double z;
};

template <typename T> //������� ������� �������� ��� ������� � ��������
class TypeSize {
public:
	int size(T const& obj) {
		return sizeof(obj);
	}

	char const* info(T const& obj) {
		return typeid(obj).name();
	}
};

int main() {
	point p;
	p.x = 1.1;
	p.y = 2.6;
	p.z = 2.9;

	TypeSize <point> obj; //��� �������� ������� ������ ������ � ������� ������� <> ����� ��������� ���, ������� �������� T � ��������� ������.
	cout << obj.info(p) << endl;
	cout << obj.size(p) << endl;

	return 0;
}