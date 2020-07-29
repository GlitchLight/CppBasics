#include <iostream>
using namespace std;

// Фуктор - это перегруженный оператор ()

class FUNCTOR {
public:
	void fun1() {
		cout << "fun 1" << endl;
	}

	void fun2() {
		cout << "fun 2" << endl;
	}

	void fun3() {
		cout << "fun 3" << endl;
	}

	void operator()() { // Перегрузка этого оператора позволяет использовать объект как функцию.
		fun1();
		fun2();
		fun3();
	}

};

int main() {
	setlocale(LC_ALL, "ru");
	FUNCTOR obj;
	obj(); // Например, как в этой строчке.

	return 0;
}