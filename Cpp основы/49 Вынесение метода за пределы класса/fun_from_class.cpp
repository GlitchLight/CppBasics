#include <iostream>
using namespace std;

class MyClass // ����� ����� ������ ����� �������, ��� �� �������� ���������� ���� � ��������� ��� �� �����.
{
public:
	MyClass();
	~MyClass();
	void print(); //����� ������� �������� �������
};

MyClass::MyClass()
{
}

void MyClass::print() //� ����� � ����������
{
	cout << "I print HELLl" << endl;
}

MyClass::~MyClass()
{
}

int main() {
	MyClass obj;
	obj.print();

	return 0;
}