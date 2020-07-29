#include <iostream>
using namespace std;

class MyClass {
public:
	MyClass(int x) {
		cout << "�������� �����������: " << x << endl;
		int* pointer = new int(x);
		px = pointer;
	}

	~MyClass() { //���������� ����� ������ ��� ��������, ������� ��������� � ������������ ������
		cout << "�������� ����������: " << *px << endl;
		delete px;
	}

private:
	int* px;
};

void create_MyClass_obj() {
	MyClass obj(3);
} //� ������� ������ MyClass ���������� ���������� ����� ��������� �������, ���������, �� � ��� �� � ���������.

int main() {
	setlocale(LC_ALL, "ru");
	MyClass ex1(1);
	MyClass ex2(2);
	// ����������� ���������� � �������� ������� ����� �������� ������� ��������� �������.

	create_MyClass_obj();

	return 0;
}