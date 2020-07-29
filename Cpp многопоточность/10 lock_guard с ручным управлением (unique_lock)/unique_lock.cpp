#include <iostream>
#include <mutex>
#include <thread>

using namespace std;

mutex mtx;
void print(char ch) {

	// unique_lock <mutex> ul(mtx, std::defer_lock); // defer_lock нужен дл€ того, чтобы вручную управл€ть методом lock.

	this_thread::sleep_for(chrono::milliseconds(1000));

	unique_lock <mutex> ul(mtx); // –аботает как lock_guard

	// ul.lock(); // “.е. вызвать его здесь, к примеру.

	for (int i = 0; i < 5; ++i) {
		for (int j = 0; j < 10; ++j) {
			cout << ch;
			this_thread::sleep_for(chrono::milliseconds(20));
		}
		cout << endl;
	}
	cout << endl;

	ul.unlock(); // Ќо открывать ресурсы можно и вручную

	this_thread::sleep_for(chrono::milliseconds(1000));
}

// ≈сли не управл€ть unique_lock вручную, то он будет вести себ€ так же, как lock_guard;

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