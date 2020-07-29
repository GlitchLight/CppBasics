#include <iostream>
using namespace std;

class point {

public:

	void set(int x, int y) { // Сеттер - это метод, который определяет значения зыкрытым поля как конструктор
		this->x = x;
		this->y = y;
	}

	int get_x() { // Геттер - это метод, который получает данные из закрытых полей
		return x;
	}

	int get_y() {
		return y;
	}

	void print() {
		cout << "x = " << get_x() << endl;
		cout << "y = " << this->get_y() << endl;
	}

private:
	int x; //Инкапсуляция - невозможность напрямую взаимодействовать с private полями
	int y;
};

int main() {
	setlocale(LC_ALL, "ru");
	point p1;
	p1.set(1, 1);
	p1.print();

	return 0;
}