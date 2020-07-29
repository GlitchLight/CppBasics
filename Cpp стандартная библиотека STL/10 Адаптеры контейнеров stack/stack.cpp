#include <iostream>

#include <vector> // �������� ����������� ������ ������� ���������� vector, list � deque. � ���� ����� ������ ��������� � ������� ��������. ������ �������� � ���, ��� � ����������� ��������.
#include <list>
#include <deque>

#include <stack>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");

	stack <int> STACK; // �� ���������, ���������, ��� ���������� ����� - ��� deque. �� ����� ������� ��������� �������������� stack <int, list <int>> STACK;
	// auto ans = STACK._Get_container(); ������ ��� ����� ����� � �� ��������� deque. ����� ������� ����� ���� ������� ���������� deque.

	STACK.push(2); // ������� ����� ������� � ��������� � ����
	STACK.emplace(3); // ��������� ������� ��� �����������. �������� �������. �������� � ����� �� ����� ����������.
	STACK.emplace(22);
	STACK.emplace(14);

	STACK.pop(); // ������� ������� � ����� �����
	cout << STACK.top() << endl << endl; // ���������� �������� ������� �����.

	// ������� ������� ������� � ������� ��� �� ��� ���, ���� ���� �� �������� ������.
	while (!STACK.empty()) {
		cout << STACK.top() << endl;
		STACK.pop();
	}


	return 0;
}