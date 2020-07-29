#include <iostream>
using namespace std;

class point {
public:
	point(int x = 0, int y = 0) : x(x), y(y) {}

	bool operator==(point const& other) {
		return ((this->x == other.x) and (this->y == other.y));
	}

	bool operator!=(point const& other) {
		return !(*this == other);
	}

	//Унарные операторы
	point operator+() {
		return *this;
	}

	point operator-() {
		int temp_x = -this->x;
		int temp_y = -this->y;
		return point(temp_x, temp_y);
	}

	point& operator++() {
		this->x++;
		this->y++;
		return *this;
	}

	point& operator++(int garbage) {
		point temp(*this);
		this->x++;
		this->y++;
		return temp;
	}

	point& operator--() {
		this->x--;
		this->y--;
		return *this;
	}

	point& operator--(int garbage) {
		point temp(*this);
		this->x--;
		this->y--;
		return temp;
	}

	//Бинарные операторы
	point operator+(point const& other) {
		int temp_x = this->x + other.x;
		int temp_y = this->y + other.y;
		return point(temp_x, temp_y);
	}

	point operator-(point const& other) {
		int temp_x = this->x - other.x;
		int temp_y = this->y - other.y;
		return point(temp_x, temp_y);
	}

	point operator*(point const& other) {
		int temp_x = this->x * other.x;
		int temp_y = this->y * other.y;
		return point(temp_x, temp_y);
	}

	point operator/(point const& other) {
		int temp_x = this->x / other.x;
		int temp_y = this->y / other.y;
		return point(temp_x, temp_y);
	}

	//============================================

	point& operator+=(point const& other) {
		this->x += other.x;
		this->y += other.y;
		return *this;
	}

	point& operator-=(point const& other) {
		this->x -= other.x;
		this->y -= other.y;
		return *this;
	}

	point& operator*=(point const& other) {
		this->x *= other.x;
		this->y *= other.y;
		return *this;
	}

	point& operator/=(point const& other) {
		this->x /= other.x;
		this->y /= other.y;
		return *this;
	}

	//Оператор присваивания
	point& operator=(point const& other) {
		this->x = other.x;
		this->y = other.y;
	}

	int& operator[](int a) {
		if (a == 1) {
			return this->x;
		}
		else {
			return this->y;
		}
	}

	/*
	Оператор вывода объекта на экран? Пока не знаю, как перегрузить.
	void operatorcout(){
		cout << this->x << ' ' << this->y << endl;
	}

	Как то перегружать?
	int operator<<(){
		return this->x, this->y;
	}
	*/

	int x;
	int y;
};

void operatorcout(point& const p) {
	cout << p.x << ' ' << p.y << endl;
}

int main() {
	setlocale(LC_ALL, "ru");
	point a(4, 4);
	point b(2, 2);
	cout << "Точки: " << endl;
	cout << "Т.1 :\t" << a.x << ' ' << a.y << endl;
	cout << "T.2 :\t" << b.x << ' ' << b.y << endl << endl;

	cout << "Операторы равенства: " << endl;
	cout << "a == b:\t" << (a == b) << endl;
	cout << "a != b:\t" << (a != b) << endl << endl;

	cout << "Арифметические операторы: " << endl;
	cout << "a + b:\t" << (a + b).x << ' ' << (a + b).y << endl;
	cout << "a - b:\t" << (a - b).x << ' ' << (a - b).y << endl;
	cout << "a * b:\t" << (a * b).x << ' ' << (a * b).y << endl;
	cout << "a / b:\t" << (a / b).x << ' ' << (a / b).y << endl;

	cout << endl;

	a += b;
	cout << "a += b:\t" << a.x << ' ' << a.y << endl;
	a -= b;

	a -= b;
	cout << "a -= b:\t" << a.x << ' ' << a.y << endl;
	a += b;

	a *= b;
	cout << "a *= b:\t" << a.x << ' ' << a.y << endl;
	a /= b;

	a /= b;
	cout << "a /= b:\t" << a.x << ' ' << a.y << endl;
	a *= b;

	cout << endl;

	cout << "Унарные операторы: " << endl;
	cout << "+a =\t" << +a.x << ' ' << +a.y << endl;
	cout << "-a =\t" << -a.x << ' ' << -a.y << endl;

	++a;
	cout << "++a =\t" << a.x << ' ' << a.y << endl;
	--a;

	a++;
	cout << "a++ =\t" << a.x << ' ' << a.y << endl;
	a--;

	--a;
	cout << "--a =\t" << a.x << ' ' << a.y << endl;
	++a;

	a--;
	cout << "a-- =\t" << a.x << ' ' << a.y << endl << endl;
	a++;

	//=============================================================================
	cout << "Оператор индексирования: " << endl;
	cout << "a[1] = " << a[1] << endl;
	cout << "a[2] = " << a[2] << endl;
}