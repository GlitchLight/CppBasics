#include <iostream>
using namespace std;

class MyClass // Класс нужно делать таким образом, что бы повысить читаемость кода и разбивать его на файлы.
{
public:
	MyClass();
	~MyClass();
	void print(); //Здесь пишется прототип функции
};

MyClass::MyClass()
{
}

void MyClass::print() //А здесь её реализация
{
	cout << "I print HELLl" << endl;
}

MyClass::~MyClass()
{
}

int main() {
	MyClass obj;
	obj.print();

	return 0;
}