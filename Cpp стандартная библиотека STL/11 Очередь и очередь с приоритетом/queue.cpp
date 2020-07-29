#include <iostream>
#include <vector> // �������� ����������� ������ ������� ���������� vector, list � deque. � ���� ����� ������ ��������� � ������� ��������. ������ �������� � ���, ��� � ����������� ��������.
#include <list>
#include <deque>

#include <queue> // ������ �������� �������. ��� �������.
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	queue <int> FIFO; // ��� ��, ��� � ����, ������������ ���������� �������, ������ � ����. �� ���������, ������������ ���. ������� �� �������� � ��������.
	FIFO.emplace(3);
	FIFO.emplace(2);
	FIFO.emplace(1);
	FIFO.emplace(0);
	FIFO.pop();
	cout << "������ �������: " << FIFO.front() << endl;
	cout << "����� �������: " << FIFO.back() << endl;

	while (!FIFO.empty()) {
		cout << FIFO.front() << ' ';
		FIFO.pop();
	}
	cout << endl;

	priority_queue <int> new_queue; // ���������� ������ � ���. ������� � ����������� - ��� �������� ������: ���� ����.
	new_queue.emplace(12);
	new_queue.emplace(1);
	new_queue.emplace(23);

	while (!new_queue.empty()) { // 23 12 1
		cout << new_queue.top() << ' ';
		new_queue.pop();
	}
	cout << endl;


	return 0;
}