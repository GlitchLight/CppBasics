#include <iostream>
#include <set>
#include <ctime>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	set <int> SET; // ��������� - ��� �������� ������. ������� �������� ���� �����, ������� ������.
	while (SET.size() < 13) {
		SET.insert(rand() % 100);
	}

	// ��� �������� ��������� ����� �������, ��� ��� ����������� �� �����������. ����� ����, ��������� �� ������ � ���� �������.
	for (auto element : SET) {
		cout << element << ' ';
	}
	cout << endl;

	int value;
	cin >> value;

	if (SET.find(value) != SET.end()) {
		cout << value << " : ����� �������" << endl;
	}
	else {
		cout << value << " : ����� �� �������" << endl;
	}

	// � ��������� ������ �������� �������. ���� ���� ��������� 1 2 3 4 � �� ������� 1 �� 5, ��������� 5 2 3 4. �� ����� ������� ������� � ��������. erase(), insert()

	// ����� ����� ���� ��������� �������, ����� ������������ multiset multiset <int> multi_set;

	return 0;
}