#include <iostream>
#include <mutex>
#include <thread>

using namespace std;

mutex mtx;
void print(char ch) {
	// mtx.lock(); ≈сли забыть эту строчку, то потоки не будут синхронизированы

	//{ // „тобы не использовать lock() и unlock() в случае, если нам не нужно выполн€ть this_thread::sleep_for(chrono::milliseconds(1000)) в самом конце, можно использовать {} дл€ обозначени€ области видимости.
	lock_guard <mutex> guard(mtx); // автоматически расставл€ет lock и unlock в области видимости функции, но если код не нужно синхронизировать полностью, то придетс€ обойтись без lock_guard

	for (int i = 0; i < 5; ++i) {
		for (int j = 0; j < 10; ++j) {
			cout << ch;
			this_thread::sleep_for(chrono::milliseconds(20));
		}
		cout << endl;
	}
	cout << endl;
	//} //  огда объект lock_guard выйдет из области видимости, вызоветс€ его деструктор, что будет эквивалентно mtx.lock();
	//mtx.unlock(); ≈сли забыть эту строчку, то код не откроетс€ дл€ других потоков и он будет выполнен только в одном.

	this_thread::sleep_for(chrono::milliseconds(1000));
}

int main() {
	setlocale(LC_ALL, "ru");
	print('c');
	print('h');

	thread t1(print, '1');
	thread t2(print, '2');

	t1.join();
	t2.join();

	return 0;
}