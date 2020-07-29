#include <iostream>
#include <string>
using namespace std;

class Apple; // Классы Apple и Orange определены после Fruit. Без определения прототипов, Fruit бы не знал о их существовании.
class Orange;

class Fruit {
public:
	Fruit(string const& str) {
		fruit_name = str;
	}

private:
	string fruit_name;

	friend Apple; // Это дружественные для Fruit классы. Делать их дружественными нежелательно, т.к. нарушается инкапсуляция, т.е. они могут непосредственно влиять на поле fruit_name;
	friend Orange;
};

class Apple {
public:
	Apple(string const& str) {
		this->name = str;
	}

	void print() {
		cout << Fruit(this->name).fruit_name << endl; //Fruit(this->name) создание объекта класса Fruit и .fruit_name - получение доступа к private полю этого объекта
	}

	string name;
};

class Orange {
public:
	Orange(string const& str) {
		this->name = str;
	}

	void print() {
		cout << Fruit(this->name).fruit_name << endl;
	}

	string name;
};

int main() {
	Apple apple("Apple");
	apple.print();

	Orange orange("Orange");
	orange.print();

	return 0;
}