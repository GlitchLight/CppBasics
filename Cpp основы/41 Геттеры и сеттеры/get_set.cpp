#include <iostream>
using namespace std;

class point {

public:

	void set(int x, int y) { // ������ - ��� �����, ������� ���������� �������� �������� ���� ��� �����������
		this->x = x;
		this->y = y;
	}

	int get_x() { // ������ - ��� �����, ������� �������� ������ �� �������� �����
		return x;
	}

	int get_y() {
		return y;
	}

	void print() {
		cout << "x = " << get_x() << endl;
		cout << "y = " << this->get_y() << endl;
	}

private:
	int x; //������������ - ������������� �������� ����������������� � private ������
	int y;
};

int main() {
	setlocale(LC_ALL, "ru");
	point p1;
	p1.set(1, 1);
	p1.print();

	return 0;
}