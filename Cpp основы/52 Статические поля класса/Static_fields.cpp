#include <iostream>
using namespace std;

// ����������� ����� - ��� �����, ������� ����� �������� ��� �������� � ������������� �������.

class counter {
public:

	counter() {
		count++;
		id = count;
	}

	int get_id() {
		return id;
	}

	static int get_count() { //���� �������� ����� ��� �����������, �� �� ����� �������� ������ �� ������������ ��������� ������, � ������� �� ��� ��������. � ����� ������, count.
		// � ���� ��, ����� ������� ���� ����� �� ��� obj1.get_count(), � ��� counter::get_count(), �� ���� � ����� ������ ��� �������� � �������
		return count;
	}

	//�������� �� ��, ��� ����������� ������ ����� ���������� ������ � static ����� ������, ����� ���������� � ����� �������, ���� �������� ������ � �������� ��������� �������
	static void change_id(counter& obj, int new_value) {
		obj.id = new_value;
	}

private:
	static int count;
	int id;
};

int counter::count = 0; //������ ������ ���������� �� ������������

int main() {
	setlocale(LC_ALL, "ru");
	counter obj1;
	counter obj2;
	counter obj3;
	counter obj4;
	counter obj5;

	// ������ ��� ��� �������� ������� ������ counter, ���� ������ count ������������� �� 1 ��� ���� �������� ����� ������.
	cout << "���� count � ������� ������� ������" << endl;
	cout << obj1.get_count() << ' ' << obj2.get_count() << ' ' << obj3.get_count() << ' ' << obj4.get_count() << ' ' << obj5.get_count() << endl << endl;

	// � ������� �� count, id ������ ���������� ���������
	cout << "���� id � ������� ������� ������" << endl;
	cout << obj1.get_id() << ' ' << obj2.get_id() << ' ' << obj3.get_id() << ' ' << obj4.get_id() << ' ' << obj5.get_id() << endl;

	//����������� ���� (� ������ ������, ������) ������ ��������� ���������� � ����� ������ ��� �������� �������. ��������, obj1.get_count();
	counter::get_count();
	counter::change_id(obj5, 13);
	cout << "�������� id 5 ������� �� 13: " << endl;
	cout << obj5.get_id() << endl;
}