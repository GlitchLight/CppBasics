#include <iostream>

#include <thread>

using namespace std;

void summator(int& a, int& b, int& sum) { // ¬ потоке нужно передавать значени€ по ссылке по-другому
	this_thread::sleep_for(chrono::milliseconds(500));
	sum = a + b;
}

int main() {
	setlocale(LC_ALL, "ru");
	int a = 1, b = 2, sum = 0;
	thread th(summator, std::ref(a), std::ref(b), std::ref(sum)); // std::ref() передает ссылку на переменную в функцию, котора€ должна выполнитьс€ в потоке th; 

	int mul = a * b;
	cout << "a * b = " << mul << endl;

	th.join();
	cout << "sum = " << sum;

	return 0;
}