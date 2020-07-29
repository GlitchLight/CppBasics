#include <iostream>
using namespace std;

class car {
public:
	void use() {
		cout << "� ���" << endl;
	}
};

class flying {
public:
	void use() {
		cout << "� ����" << endl;
	}
};

class flying_car : public car, public flying {
public:
	int const field = 1;
};

int main() {
	setlocale(LC_ALL, "ru");
	flying_car fl_cr;
	// fl_cr.use(); � � car � flying ���� ����� use(). Flying_car ����������� � �� car � �� flying. ���������� �� ������ ����������, ����� �� ������� use() ������������.
	// ����� ��������� ����� �������� ����� ������������ ���������� �����. ���� flying_car 
	((car)fl_cr).use();
	// ��� ���������� ����� �� �� ������ ���������� � ����� ������ flying_car ((car)fl_cr).field;
	((flying)fl_cr).use();

	// ������� ����� �� ��������� ����, � ���������� � ������� ����� ������������ ���� �����������
	fl_cr.car::use();
	fl_cr.flying::use();

	return 0;
}