#include <iostream>
#include <string>
using namespace std;

class Apple; // ��������� ������� �������� Print, ��� ����� �������� ������ � Apple. �� ��������� ����� Print, ������� ������� ������ Apple;

//���� �������� ����� Print �����, �� �� �� ������ �������� ������ � ����� ������ Apple, ��������� ��� ��� �� ��� ��������.
class Print {
public:
	Print(Apple const& obj); // �� ���� ���, ����� Apple ���� � ��������, �� �� ���������, ������� ������� �������� ������������ Print � ������� ����������� ����� ������ Apple
};


class Apple {
public:
	Apple(int const& weight, string const& name) {
		this->weight = weight;
		this->name = name;
	}

private:
	int weight;
	string name;

	friend Print::Print(Apple const& obj);
};

Print::Print(Apple const& obj) { // ��� ����������� ������������ (��� ������ ������� ������) ������ Print
	cout << obj.weight << ' ' << obj.name << endl;
}

/* ���� �������� ����� Print �����, ����� Apple �� ������ ������� ������������� �����������(�����) ������ Print, ���� ������ �� ������� �������� ������ � ������.
class Print {
public:
	Print(Apple const& obj) {
		cout << obj.weight << ' ' << obj.name;
	}
};
*/

int main() {
	Apple obj(13, "Australian");
	Print prnt(obj);
}