#include <iostream>
using namespace std;

/* ����� ������������ �������� �������� ���� �� �����, �� �������� ����� ���������� ���������. ����� �������� ����� ��������, ������������ ������������ ����. ����� �� ����� ����������� ��������
����������� ������������ ���� std*/
namespace NamespaceOne {
	void fun(int const& a, int const& b) {
		cout << a + b << endl;
	}
}

namespace NamespaceOne { // ����� � ������������ ������������ ���� ��������� ������ �������.
	void fun2(int const& a, int const& b) {
		cout << a - b << endl;
	}
}

namespace NamespaceTwo {
	void fun(int const& a, int const& b) {
		cout << a * b << endl;
	}


	namespace NamespaceOne { // ����� ������� ���� ������������ ���� � ������. ��� ����� ���������� ������� � ����� � ��� �� ������.
		void fun(int const& a, int const& b) {
			cout << a * b << endl;
		}
	}
}

// using namespace NamespaceOne; ����� ������������ ������������ ���� NamespaceOne, �� ����� ������� �� ���, ��� �� �� ���� ����������.

int main() {
	int a = 13, b = 13;
	NamespaceOne::fun(a, b);
	NamespaceOne::fun2(a, b);

	NamespaceTwo::fun(a, b);
	NamespaceTwo::NamespaceOne::fun(a, b);

	return 0;
}