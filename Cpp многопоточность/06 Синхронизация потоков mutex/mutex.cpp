#include <iostream>
#include <mutex>
#include <thread>

using namespace std;

mutex mtx;
void print(char ch) {
	mtx.lock();
	// Ётот участок кода может использоватьс€ одновременно только одним потоком.
	for (int i = 0; i < 5; ++i) {
		for (int j = 0; j < 10; ++j) {
			cout << ch;
			this_thread::sleep_for(chrono::milliseconds(20));
		}
		cout << endl;
	}
	cout << endl;
	// —инхронизаци€ нужна только дл€ критически важных участков кода.
	mtx.unlock();

	this_thread::sleep_for(chrono::milliseconds(1000)); //   примеру, этот участок будет выполн€тьс€ обоими потоками одновременно. ≈сли исполн€ть его в немногопоточном режиме, то это займет 2с, а не 1.
}

int main() {
	setlocale(LC_ALL, "ru");
	print('c');
	print('h');

	thread t1(print, '1');
	thread t2(print, '2');

	/*  орректно было бы сначала печатать таблицу из 1, затем таблицу из 2. Ќо при работе в параллельном режиме без синхронизации мы получаем следующее:
	212
	2111212121
	2121121212
	221121
	21212212121
	*/

	t1.join();
	t2.join();

	return 0;
}