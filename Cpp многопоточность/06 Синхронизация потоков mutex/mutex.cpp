#include <iostream>
#include <mutex>
#include <thread>

using namespace std;

mutex mtx;
void print(char ch) {
	mtx.lock();
	// ���� ������� ���� ����� �������������� ������������ ������ ����� �������.
	for (int i = 0; i < 5; ++i) {
		for (int j = 0; j < 10; ++j) {
			cout << ch;
			this_thread::sleep_for(chrono::milliseconds(20));
		}
		cout << endl;
	}
	cout << endl;
	// ������������� ����� ������ ��� ���������� ������ �������� ����.
	mtx.unlock();

	this_thread::sleep_for(chrono::milliseconds(1000)); // � �������, ���� ������� ����� ����������� ������ �������� ������������. ���� ��������� ��� � ��������������� ������, �� ��� ������ 2�, � �� 1.
}

int main() {
	setlocale(LC_ALL, "ru");
	print('c');
	print('h');

	thread t1(print, '1');
	thread t2(print, '2');

	/* ��������� ���� �� ������� �������� ������� �� 1, ����� ������� �� 2. �� ��� ������ � ������������ ������ ��� ������������� �� �������� ���������:
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