#include <iostream>
using namespace std;

class car {
public:
	car() {
		cout << "��� ��� ����������� ������ car" << endl;
	}

	~car() {
		cout << "��� ��� ���������� ������ car" << endl;
	}

	void drive() {
		cout << "� ���" << endl;
	}
};

class flying {
public:
	flying() {
		cout << "��� ��� ����������� ������ flying" << endl;
	}

	~flying() {
		cout << "��� ��� ���������� ������ flying" << endl;
	}

	void fly() {
		cout << "� ����" << endl;
	}
};

class flying_car : public car, public flying {
public:
	flying_car() // ���� ������� ����������� ����� ������ ctor � ������ tab
	{
		cout << "��� ��� ����������� ������ flying_car" << endl;
	}

	~flying_car() // ���� ������� ���������� ����� ������ ctor, ������ tab � ����������� ������ � ������
	{
		cout << "��� ��� ���������� ������ flying_car" << endl;
	}
};

int main() {
	setlocale(LC_ALL, "ru");
	flying_car fl_cr;
	fl_cr.drive();
	fl_cr.fly();


	return 0;
}