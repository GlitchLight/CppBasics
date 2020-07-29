#include <iostream>
using namespace std;
class point {
public:
	point(int x = 0, int y = 0) { // конструктор инициализирует поля класса. при этом отпадает необходимость в использовании сеттера. укорачивается код. В private его
// помещать нельзя.
		this->x = x;
		this->y = y;
	}

	point(double x, double y) { // полиморфизм, разный конструктор в зависимости от разных входных данных
		cout << "Этот класс работает только с целочисленными точками, поэтому её координаты установлены на 0 0" << endl;
		this->x = 0;
		this->y = 0;
	}

	void print() {
		cout << x << ' ' << y << endl;
	}

private:
	int x;
	int y;
};


int main() {
	setlocale(LC_ALL, "ru");
	point p(1.1, 2.2);
	cout << "1 точка:" << endl;
	p.print();

	cout << endl;

	cout << "2 точка:" << endl;
	point p2(1, 2);
	p2.print();

	cout << endl;

	cout << "3 точка:" << endl;
	point p3; // point p3() если параметров не передается, круглые скобки указывать не надо, компилятор выдаст ошибку. К примеру, int a пишется без скобок в конце.
	p3.print();

	return 0;
}