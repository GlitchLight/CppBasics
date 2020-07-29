#include <iostream>
#include <string>
using namespace std;

template <typename T>
class point {
public:
	point(T const & x, T const & y, T const & z) {
		this->x = x;
		this->y = y;
		this->z = z;
	}
	T x;
	T y;
	T z;
};

// Нестандартное поведение шаблона класса - это определение отдельного поведения при отдельном типе данных
template <>
class point <string> { // В нашем случае, string
public:
	point(string const& x, string const& y, string const& z) { // Например, не очень логично делать точку из строковых типов данных.
		cout << "Ты дурак штоле? Из строк нельзя сделать точку!" << endl;
	}
};


int main() {
	setlocale(LC_ALL, "ru");
	point <string> pt("Это", "точка", "отвечаю");


	return 0;
}