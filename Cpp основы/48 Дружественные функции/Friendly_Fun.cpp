#include <iostream>
using namespace std;

class int_double {
public:
	int_double(int x, double y) {
		this->x = x;
		this->y = y;
	}

	void print() {
		cout << "x = " << x << ", y = " << y << endl;
	}

private:
	int x;
	double y;
	friend void change(int_double& obj); // �� �����, � ����� ������ ����� �������� �������. ��� ����� ��������� ��� � private, ��� � � public;
};

void change(int_double& obj) { // ��� �� ������� ����� ���� ������������� � ���������� �������. ��� ����� ������ ���������� ����� ������� ������ ������, � � ��� �������
// ������� ��������������� �������
	obj.x++;
	obj.y++;
}

int main() {
	setlocale(LC_ALL, "ru");
	int_double obj(13, 13.13);
	obj.print();
	change(obj);
	obj.print();

	return 0;
}