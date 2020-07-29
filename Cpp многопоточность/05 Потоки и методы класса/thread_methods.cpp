#include <iostream>

#include <thread>

using namespace std;

class simple_class {
public:
	int summator(int& a, int& b, int sum) { // Можно сделать метод static и тогда работать как с обычной функцией.
		this_thread::sleep_for(chrono::milliseconds(500));
		sum = a + b;
		return sum;
	}

	int multiplicator(int& a, int& b, int mul) {
		this_thread::sleep_for(chrono::milliseconds(500));
		mul = a * b;
		return mul;
	}

	void hello_world() {
		cout << "HELL" << endl;
	}
};
int main() {
	setlocale(LC_ALL, "ru");
	int a = 1, b = 2, sum = 0, mul = 1;
	simple_class obj;
	thread th([&]() {sum = obj.summator(a, b, sum); }); // Либо использовать лямбда функцию, передавая ей в контекст ссылки на используемые объекты. &a, &b, &sum, &obj
	thread th2(&simple_class::hello_world, obj); // 1 параметр метод класса, 2 параметр объект, класса, остальные параметры - это аргументы метода

	th.join();
	th2.join();
	std::cout << "sum = " << sum << endl;

	return 0;
}