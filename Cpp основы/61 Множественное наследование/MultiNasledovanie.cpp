#include <iostream>
using namespace std;

class car {
public:
	car() {
		cout << "Тут был конструктор класса car" << endl;
	}

	~car() {
		cout << "Тут был деструктор класса car" << endl;
	}

	void drive() {
		cout << "Я еду" << endl;
	}
};

class flying {
public:
	flying() {
		cout << "Тут был конструктор класса flying" << endl;
	}

	~flying() {
		cout << "Тут был деструктор класса flying" << endl;
	}

	void fly() {
		cout << "Я лечу" << endl;
	}
};

class flying_car : public car, public flying {
public:
	flying_car() // Чтоб создать конструктор можно ввести ctor и нажать tab
	{
		cout << "Тут был конструктор класса flying_car" << endl;
	}

	~flying_car() // Чтоб создать деструктор можно ввести ctor, нажать tab и пририсовать тильду в начале
	{
		cout << "Тут был деструктор класса flying_car" << endl;
	}
};

int main() {
	setlocale(LC_ALL, "ru");
	flying_car fl_cr;
	fl_cr.drive();
	fl_cr.fly();


	return 0;
}