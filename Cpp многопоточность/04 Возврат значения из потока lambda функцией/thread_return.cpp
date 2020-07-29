#include <iostream>

#include <thread>

using namespace std;

int summator(int& a, int& b, int sum) {
	this_thread::sleep_for(chrono::milliseconds(500));
	sum = a + b;
	return sum;
}

int main() {
	setlocale(LC_ALL, "ru");
	int a = 1, b = 2, sum = 0;
	thread th([&a, &b, &sum]() {sum = summator(a, b, sum); }); // Возвращать значения из потока нельзя, но можно использовать лямбда функции.

	int mul = a * b;
	std::cout << "a * b = " << mul << endl;

	th.join();
	std::cout << "sum = " << sum << endl;

	return 0;
}