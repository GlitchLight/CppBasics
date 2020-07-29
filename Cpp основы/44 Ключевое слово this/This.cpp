#include <iostream>
using namespace std;

class point {
public:
	point(int const& x, int const& y) {
		this->x = x; // Если не указывать ключевое слово this, компилятор возьмет значение x передаваемое в конструтор и присвоит его ему же.
		// Когда же мы используем слово this, мы обращаемся к полю объекта. Это всё равно, что написать в main point.x = value при условии, что все поля public;
		this->y = y;
		cout << "this содержит адрес точки (" << x << ", " << y << ") : " << this << endl;
	}

	int x;
	int y;
};

int main() {
	setlocale(LC_ALL, "ru");
	point p1(1, 1);
	point p2(2, 2);

	return 0;
}