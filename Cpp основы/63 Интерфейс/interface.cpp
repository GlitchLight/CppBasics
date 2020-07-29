#include <iostream>
using namespace std;

/* �� ���������� ����� ������� ������ � �����. ���������� ������ ������, �� �� ���� ���� ���������� ���� �������. ��������� ��������� ������� ������ ���� ����.
*/
class IBycicle { //��������� I
public:
	void virtual TwistTheWheel() = 0;
	void virtual Ride() = 0;
};

class SimpleBycicle : public IBycicle {
	void TwistTheWheel() override {
		cout << "�� ������� ����������" << endl;
	}
	void Ride() override {
		cout << "�� ������� ����������" << endl;
	}
};

class PomoykaBycicle : public IBycicle {
	void TwistTheWheel() override {
		cout << "�� ���������� �� ����� � �����" << endl;
	}
	void Ride() override {
		cout << "�� ���������� �� ����� � �����" << endl;
	}
};

class Human {
public:
	void RideOn(IBycicle& bycicle) { // ��� ������ ���������� ����� ��������� ������ bycicle ������ ��� ����������
		cout << "������ ����" << endl;
		bycicle.TwistTheWheel();
		cout << "����" << endl;
		bycicle.Ride();
	}
};

int main() {
	setlocale(LC_ALL, "ru");
	SimpleBycicle sb;
	PomoykaBycicle pb;

	Human Igor;
	Igor.RideOn(pb);

	return 0;
}