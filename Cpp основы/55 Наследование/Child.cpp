#include <iostream>
#include <string>
using namespace std;

// �������� ������� ����� ��������� ��� ���� � ���.

class Human {
public:
	Human(string const& name = "NoName", int const& height = 0, int const& weight = 0) : name(name), height(height), weight() {}
	string name;
	int height;
	int weight;
};

// ������ �������� ������� �� �� ���������, ��� � ��������. ��� �� �����, � ��������� ���� ��� � ����� ������

class Student : public Human { // ��� public ������������ ����� Student �������� ������ �� ���� public ����� ������ Human
public:
	Student(string const& name, int const& height, int const& weight, int const& group) { // ��������, ����� ������� ����������� ������ Human � ����� ������ �����
		this->Human::Human(name, height, weight);
		this->group = group; // � ���������� ���� ���������� ���� group, ������� ����� ����������������
	}

	int group;
};

int main() {
	setlocale(LC_ALL, "ru");
	Student stud("Igor", 185, 80, 3326);
	cout << stud.group << endl;


	return 0;
}