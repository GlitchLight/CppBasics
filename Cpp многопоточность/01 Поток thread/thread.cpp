#include <iostream>
#include <thread> // ������ ��������� ��������� ����������� ��������� ��������.

using namespace std;

void printer() {
	for (int i = 0; i < 10; ++i) {
		cout << "Printer thread ID: " << this_thread::get_id() << endl;
		this_thread::sleep_for(chrono::milliseconds(500));
	}

}

int main() {
	thread th(printer);

	/*
	�� ����� ��������, ��� ������������ detach.
	th.detach();
	������� ���������� ����� th, ����� this_thread (main). ��� �� ����� �������� ������, ��������� ������ �����, ����� ����������� ��������� ��������.
	th.join();
	*/

	for (int i = 0; i < 10; ++i) {
		cout << "Main thread ID: " << this_thread::get_id() << endl;
		this_thread::sleep_for(chrono::milliseconds(500));
	}

	th.detach(); // ������������� ����� th, ���� ������� ����� ����� �� return, �� ����� th �� ��� ����� �������.
	th.join(); // ���� ��������� ������ ������ th � ������ ����� ���� ������.

	// ���� �� ������� �� ����� �� ���� ��������, ����� ��� ����������� �������� ������� main, ����� th �� ��� ��������� ��������, �� ������� ���� ������. ��� �������� � ������.
	return 0;
}