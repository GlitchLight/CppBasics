#include <iostream>
#include <mutex>
#include <thread>

using namespace std;

mutex mtx;
mutex mtx2;
void print() { // ќдин скрипач схватил скрипку
	mtx2.lock(); // 1. ћы блокируем ресурс 2
	this_thread::sleep_for(chrono::milliseconds(1)); // ≈сли этой строчки не будет, то код отработает.
	mtx.lock(); // 3. ћы не можем заблокировать ресурс 1 и выполн€ть дальнейший код, поскольку он заблокирован в print2 и нам нужно ждать, пока он освободитс€.
	for (int i = 0; i < 5; ++i) {
		for (int j = 0; j < 10; ++j) {
			cout << '*';
			this_thread::sleep_for(chrono::milliseconds(10));
		}
		cout << endl;
	}
	cout << endl;
	mtx.unlock();

	mtx2.unlock();

}

void print2() { // ƒругой скрипач схватил смычок
	mtx.lock(); // 2. ћы блокируем ресурс 1.
	this_thread::sleep_for(chrono::milliseconds(1));
	mtx2.lock(); // 4. ћы не можем заблокировать ресурс 2, поскольку он заблокирован в print и нам нужно ждать, пока он освободитс€. “ем не менее, он не сможет освободитьс€.
	for (int i = 0; i < 5; ++i) {
		for (int j = 0; j < 10; ++j) {
			cout << '#';
			this_thread::sleep_for(chrono::milliseconds(10));
		}
		cout << endl;
	}
	cout << endl;
	mtx2.unlock();

	mtx.unlock();

}

// „тобы избежать взаимной блокировки, нужно и в print() и в print2() соблюдать один и тот же пор€док mutex;

int main() {
	setlocale(LC_ALL, "ru");
	print();
	print2();

	thread t1(print, '1');
	thread t2(print2, '2');

	t1.join();
	t2.join();

	return 0;
}