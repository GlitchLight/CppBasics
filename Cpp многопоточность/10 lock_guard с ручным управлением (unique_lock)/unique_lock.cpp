#include <iostream>
#include <mutex>
#include <thread>

using namespace std;

mutex mtx;
void print(char ch) {

	// unique_lock <mutex> ul(mtx, std::defer_lock); // defer_lock ����� ��� ����, ����� ������� ��������� ������� lock.

	this_thread::sleep_for(chrono::milliseconds(1000));

	unique_lock <mutex> ul(mtx); // �������� ��� lock_guard

	// ul.lock(); // �.�. ������� ��� �����, � �������.

	for (int i = 0; i < 5; ++i) {
		for (int j = 0; j < 10; ++j) {
			cout << ch;
			this_thread::sleep_for(chrono::milliseconds(20));
		}
		cout << endl;
	}
	cout << endl;

	ul.unlock(); // �� ��������� ������� ����� � �������

	this_thread::sleep_for(chrono::milliseconds(1000));
}

// ���� �� ��������� unique_lock �������, �� �� ����� ����� ���� ��� ��, ��� lock_guard;

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