#include <iostream>
#include <cmath>
using namespace std;

class point {
public:
	void sqr() { // Метод класса - это просто функция, которая реализуется внутри класса
		x *= x;
		y *= y;
	}

	double distance(point const& p) {
		return sqrt((x - p.x) * (x - p.x) + (y - p.y) * (y - p.y));
	}

	int x;
	int y;
};

int main() {
	setlocale(LC_ALL, "ru");
	point p1;
	p1.x = 2;
	p1.y = 3;

	cout << "Точка до применения sqr():\t\t" << p1.x << '\t' << p1.y << endl;
	p1.sqr();
	cout << "Точка после применения функции sqr():\t" << p1.x << '\t' << p1.y << endl;

	point p2;
	p2.x = 1;
	p2.y = 1;
	cout << "Точка 1:\t" << p1.x << '\t' << p1.y << endl;
	cout << "Точка 2:\t" << p2.x << '\t' << p2.y << endl;
	cout << "Расстояние между точками p1 и p2:\t" << p1.distance(p2);
}