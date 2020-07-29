#include <iostream>
#include <mutex>
#include <thread>

using namespace std;

mutex mtx;
mutex mtx2;
void print() { // ���� ������� ������� �������
	mtx2.lock(); // 1. �� ��������� ������ 2
	this_thread::sleep_for(chrono::milliseconds(1)); // ���� ���� ������� �� �����, �� ��� ����������.
	mtx.lock(); // 3. �� �� ����� ������������� ������ 1 � ��������� ���������� ���, ��������� �� ������������ � print2 � ��� ����� �����, ���� �� �����������.
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

void print2() { // ������ ������� ������� ������
	mtx.lock(); // 2. �� ��������� ������ 1.
	this_thread::sleep_for(chrono::milliseconds(1));
	mtx2.lock(); // 4. �� �� ����� ������������� ������ 2, ��������� �� ������������ � print � ��� ����� �����, ���� �� �����������. ��� �� �����, �� �� ������ ������������.
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

// ����� �������� �������� ����������, ����� � � print() � � print2() ��������� ���� � ��� �� ������� mutex;

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