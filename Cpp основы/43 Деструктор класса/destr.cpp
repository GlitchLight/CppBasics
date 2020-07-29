#include <iostream>
using namespace std;

class MyClass {
public:
	MyClass(int x) {
		cout << "Вызвался конструктор: " << x << endl;
		int* pointer = new int(x);
		px = pointer;
	}

	~MyClass() { //Деструктор нужен только для объектов, которые находятся в динамической памяти
		cout << "Вызвался деструктор: " << *px << endl;
		delete px;
	}

private:
	int* px;
};

void create_MyClass_obj() {
	MyClass obj(3);
} //У объекта класса MyClass вызывается деструктор после окончания функции, поскольку, он в ней же и создается.

int main() {
	setlocale(LC_ALL, "ru");
	MyClass ex1(1);
	MyClass ex2(2);
	// Деструкторы вызываются в обратном порядке когда покидают область видимости функции.

	create_MyClass_obj();

	return 0;
}