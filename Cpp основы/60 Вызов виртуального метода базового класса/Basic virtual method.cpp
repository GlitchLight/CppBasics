#include <iostream>
using namespace std;

class parent {
public:
	virtual void print() {
		cout << "��������" << endl;
	}
};

class child :public parent {
public:
	void print() {
		::parent::print(); // ��� ���������� ����������� ����� ��������
	}
};

int main() {
	setlocale(LC_ALL, "ru");
	child chil;
	chil.print();
	return 0;
}