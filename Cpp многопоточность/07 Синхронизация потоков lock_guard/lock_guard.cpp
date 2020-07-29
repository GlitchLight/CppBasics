#include <iostream>
#include <mutex>
#include <thread>

using namespace std;

mutex mtx;
void print(char ch) {
	// mtx.lock(); ���� ������ ��� �������, �� ������ �� ����� ����������������

	//{ // ����� �� ������������ lock() � unlock() � ������, ���� ��� �� ����� ��������� this_thread::sleep_for(chrono::milliseconds(1000)) � ����� �����, ����� ������������ {} ��� ����������� ������� ���������.
	lock_guard <mutex> guard(mtx); // ������������� ����������� lock � unlock � ������� ��������� �������, �� ���� ��� �� ����� ���������������� ���������, �� �������� �������� ��� lock_guard

	for (int i = 0; i < 5; ++i) {
		for (int j = 0; j < 10; ++j) {
			cout << ch;
			this_thread::sleep_for(chrono::milliseconds(20));
		}
		cout << endl;
	}
	cout << endl;
	//} // ����� ������ lock_guard ������ �� ������� ���������, ��������� ��� ����������, ��� ����� ������������ mtx.lock();
	//mtx.unlock(); ���� ������ ��� �������, �� ��� �� ��������� ��� ������ ������� � �� ����� �������� ������ � �����.

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