#include <iostream>
using namespace std;

class Human {
public:
	Human(string const& name) {
		this->name = name;
		this->old = NULL;
		this->height = NULL;
	}

	Human(string const& name, int old) : Human(name) { // �� �������� ���������� �����������, ��������� � ���� ������ ���������
		// � ��� �� ����� ������ ����� this->name = name;
		this->old = old;
	}

	Human(string const& name, int old, int height) : Human(name, old) { // �� �������� ����������� Human(string const& name, int old), ��������� � ���� ������ ���������
		// � ��� �� ����� ������ this->name = name � this->old = old;
		this->height = height;
	}

	void print() {
		cout << name << ' ' << old << ' ' << height << endl;
	}

private:
	string name;
	int old;
	int height;
};



int main() {
	Human H1("Igor");
	Human H2("Igor", 24);
	Human H3("Igor", 24, 185);

	H1.print();
	H2.print();
	H3.print();
	return 0;
}