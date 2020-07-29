#include <iostream>
#include <string>
using namespace std;

class Apple; // ������ Apple � Orange ���������� ����� Fruit. ��� ����������� ����������, Fruit �� �� ���� � �� �������������.
class Orange;

class Fruit {
public:
	Fruit(string const& str) {
		fruit_name = str;
	}

private:
	string fruit_name;

	friend Apple; // ��� ������������� ��� Fruit ������. ������ �� �������������� ������������, �.�. ���������� ������������, �.�. ��� ����� ��������������� ������ �� ���� fruit_name;
	friend Orange;
};

class Apple {
public:
	Apple(string const& str) {
		this->name = str;
	}

	void print() {
		cout << Fruit(this->name).fruit_name << endl; //Fruit(this->name) �������� ������� ������ Fruit � .fruit_name - ��������� ������� � private ���� ����� �������
	}

	string name;
};

class Orange {
public:
	Orange(string const& str) {
		this->name = str;
	}

	void print() {
		cout << Fruit(this->name).fruit_name << endl;
	}

	string name;
};

int main() {
	Apple apple("Apple");
	apple.print();

	Orange orange("Orange");
	orange.print();

	return 0;
}