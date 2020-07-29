#include <iostream>
#include <map>

#include <string>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	pair <int, string> key_value(1, "����"); // ���� ��������� 2 ��������� ��������� � �������� ��������� ���������� map (dict). �� ����� �������� �������� ������.
	cout << key_value.first << endl;
	cout << key_value.second << endl;

	map <int, string> dict;
	dict[5] = "����"; // ���� ����� �� ����������, �� ���������.

	// ������� �������� ��������� ���������� ���� ���������, �� ����� ������ ��������.
	dict.insert(key_value);
	dict.insert(make_pair(2, "���"));
	dict.insert(pair <int, string>(3, "���"));

	// � 11 ��������� ��������� ����� emplace, ������� ������ ��� ������ � �������.
	dict.emplace(4, "������");


	for (pair <int, string> element : dict) { // ������� ������ ����������, ��� � ���������.
		cout << element.first << ' ' << element.second << endl;
	}

	cout << dict[2] << endl; // � ���������� ������ ���������� ����.

	// �������� ����� ������� � ������������ ������ ������, ��� � � ������� ���������.

	multimap <int, string> multidict; // ��������� ������� ������������� �����. ��� ������ at(). ��� ��������� [], �.�. �� �������, � ������ �� �������� � ������������� ������ ����������

	return 0;
}