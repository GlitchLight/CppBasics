#include <iostream>
using namespace std;

class parent {
public:
	parent() {
		cout << "������ ����������� ������ parent." << endl;
	}
};

class child :public parent {
public:
	child() : parent() { // ������� �����������, ������� ���������� � ������������ ������ ����� ����� ����� :
		cout << "������ ����������� ������ child." << endl;
	}
};


int main() {
	setlocale(LC_ALL, "ru");
	child ch;

	return 0;
}