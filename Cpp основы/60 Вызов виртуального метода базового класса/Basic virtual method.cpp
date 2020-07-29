#include <iostream>
using namespace std;

class parent {
public:
	virtual void print() {
		cout << "Родитель" << endl;
	}
};

class child :public parent {
public:
	void print() {
		::parent::print(); // Так вызывается виртуальный метод родителя
	}
};

int main() {
	setlocale(LC_ALL, "ru");
	child chil;
	chil.print();
	return 0;
}