#include <iostream>
using namespace std;

template <typename T>
class Point{
public:
	Point(T const& x, T const& y, T const& z) : x(x), y(y), z(z) {}
private:
	T x;
	T y;
	T z;
};

// ѕредназначение умного указател€ состоит в том, чтобы нам не приходилось заботитьс€ о том, чтобы освобождать пам€ть динамической пам€ти.
template <typename T>
class SmartPointer {
public:
	SmartPointer(T* ptr) {
		this->ptr = ptr;
	}

	~SmartPointer() {
		delete ptr;
	}

	T& operator*() {
		return *ptr;
	}

private:
	T* ptr;
};

int main() {
	Point <int> pt(2, 9, 18);

	SmartPointer <int> p_int = new int(5); // new возвращает указатель на область динамической пам€ти, выделенную под созданный объект
	SmartPointer <Point <int>> p_Point = new Point <int>(2, 9, 18); // ”меый указатель может работать с любым типом данных

	return 0;
}