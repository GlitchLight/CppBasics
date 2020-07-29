#include <iostream>
using namespace std;

class parent {
public:
	parent() {
		cout << "Вызван конструктор класса parent." << endl;
	}
};

class child :public parent {
public:
	child() : parent() { // указать конструктор, который вызывается в родительском классе можно здесь через :
		cout << "Вызван конструктор класса child." << endl;
	}
};


int main() {
	setlocale(LC_ALL, "ru");
	child ch;

	return 0;
}