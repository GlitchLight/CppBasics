#include <iostream>
#include <string>
using namespace std;

/* ��������� ������ ������ � ������ - ��� ��������� ��� ����������. ��������� ��������� ������������ ���������� ����� � � ������ ������. ���������� �� ��������� � ������ ���������� ����� ������ ���
��������� �����. */

class KEPKA { // ����� ����� ������������ �������� �� ��������, � ������, � ������� �� ��������. ��� �������� �������� ���������.
public:
	string get_color(){
		return color;
	}

private:
	string color = "red";
};

class Human {
public:
	void think() { // ����� "������" �������� ����� ��������� Brain "������". ��� ���������� ������������� � �������� ����� �� ��������� ��������������.
		brain.think();
	}

	void chek_the_KEPKA() {
		cout << "� ���� ����� �����: " << cap.get_color() << endl;
	}

private:
	class Brain { // ������ ����������, ���� �� ����� ������������ ��� ��������.
	public:
		void think() {
			cout << "� �����" << endl;
		}
	};

	Brain brain;
	KEPKA cap;
};

int main() {
	setlocale(LC_ALL, "ru");
	Human human;
	human.think();
	human.chek_the_KEPKA();

	KEPKA kepka; //�� �������� ����� ������� ������ ������ kepka � ���������� � ��� �����.
	kepka.get_color();

	//Human::Brain test_brain; � ��� ��� ������� � ������ Brain, � ��� �� � ��� �����������������, ����� ������� ������� ������ ������ Human
}