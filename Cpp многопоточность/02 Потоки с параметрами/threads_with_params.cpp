#include <iostream>

#include <thread>

using namespace std;

void summator(int a, int b) {
	this_thread::sleep_for(chrono::milliseconds(500));
	cout << "SUMMATOR STARTED" << endl;
	this_thread::sleep_for(chrono::milliseconds(500));
	cout << "a + b = " << a + b << endl;
	this_thread::sleep_for(chrono::milliseconds(500));
	cout << "SUMMMATOR ENDED" << endl;
}

int main() {
	setlocale(LC_ALL, "ru");
	int a = 1, b = 2;
	thread th(summator, a, b); // При передаче в thread указателя на функцию с параметрами, параметры пишутся через запятую.


	int mul = a * b;
	cout << "Первый поток выполнился быстрее. a * b = " << mul << endl;

	th.join();

	return 0;
}