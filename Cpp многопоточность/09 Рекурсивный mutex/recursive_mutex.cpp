#include <iostream>
#include <mutex>
#include <thread>

using namespace std;

recursive_mutex rec_mtx;

void fun(int val) {
	rec_mtx.lock();

	this_thread::sleep_for(chrono::milliseconds(300));
	cout << val << ' ';

	if (val < 1) {
		cout << endl;
		rec_mtx.unlock();
		return;
	}

	val--;
	fun(val);

	rec_mtx.unlock();
}

int main() {
	setlocale(LC_ALL, "ru");

	/*
	rec_mtx.lock(); // mtx.lock() ����� ������ ������ ���� ��� ������.
	rec_mtx.lock();
	rec_mtx.lock();

	rec_mtx.unlock(); // ����������� mutex ���������� ��������� ������� ���, ������� �� ��� ������.
	rec_mtx.unlock();
	rec_mtx.unlock();
	*/

	thread t1(fun, 10);
	thread t2(fun, 10);

	t1.join();
	t2.join();

	return 0;
}