#include <iostream>
#include <typeinfo>
using namespace std;

class point {
public:
	double x;
	double y;
	double z;
};

template <typename T> //Шаблоны классов работают как шаблоны в функциях
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

	TypeSize <point> obj; //При создании объекта такого класса в угловых скобках <> нужно указывать тип, который подменит T в шаблонном классе.
	cout << obj.info(p) << endl;
	cout << obj.size(p) << endl;

	return 0;
}