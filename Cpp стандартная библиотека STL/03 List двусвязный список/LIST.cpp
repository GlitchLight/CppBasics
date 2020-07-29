#include <iostream>
#include <list>
using namespace std;

template <typename T>
void PrintList(list <T> const& lst) {
	for (auto el : lst) {
		cout << el << ' ';
	}
	cout << endl;
}

int main() {
	setlocale(LC_ALL, "ru");
	list <int> MyList{ 15, 122, 253, 253, 253 };

	MyList.push_back(2); // �������� � ����� ������.
	MyList.push_front(1); // �������� � ������ ������.

	list <int>::iterator list_iterator = MyList.begin(); // auto list_iterator = MyList.begin();

	cout << "MyList[0] = " << *list_iterator << endl; // ��� �� �����, ��� MyList �������� [] �� ���������� � ������� �� �������

	while (list_iterator != MyList.end()) {
		cout << *list_iterator++ << ' ';
	}
	cout << endl;

	for (auto i = MyList.begin(); i != MyList.end(); ++i) {
		cout << *i << ' ';
	}
	cout << endl;

	MyList.sort();
	cout << "��������������� ������: " << endl;
	PrintList(MyList);

	MyList.pop_back();
	MyList.pop_front();
	cout << "������ � ��������� ������ � ��������� ���������: " << endl;
	PrintList(MyList);

	cout << "����������� ��������������� ������ ���������� ���������: " << endl;
	MyList.unique();
	PrintList(MyList);

	cout << "�������� ������ � �������� �������: " << endl;
	MyList.reverse();
	PrintList(MyList);

	list_iterator = MyList.begin(); // � ���������� ������ �� ���������� ������ �������� ��������� �� ����� ������, ������� ����������
	// ��� ������� � ������.
	advance(list_iterator, 1); // �������� �������� �� int ����� ������.
	MyList.insert(list_iterator, 13); // ����� �������, �������� ��������� �� �� 13, � �� �����, ������� ������ �� ��� ������� ������ 13
	list_iterator--; // �������, ����� ��������� � ������� 2 �� ������� 1, ���������� ������ � ��������� �������.
	cout << "������� �������� �� ������� 1: " << endl;
	PrintList(MyList);
	MyList.erase(list_iterator);
	cout << "�������� �������� � ������� 1: " << endl;
	PrintList(MyList);

	cout << "����� � �������� �������� 253: " << endl;
	MyList.remove(253);
	PrintList(MyList);

	cout << "�������� ���� ��������� � ���������� 10 ��������� 222: " << endl;
	MyList.assign(10, 222); // New_List.assign(List.begin(), List.end()); - ��� ����� ����������� � ����� ���� ��� �������� �������
	PrintList(MyList);

	cout << "������ ������ �� �������� ���������: size = " << MyList.size() << endl;
	MyList.clear();
	cout << "������ ������ ����� �������� ���������: size = " << MyList.size() << endl;

	return 0;
}