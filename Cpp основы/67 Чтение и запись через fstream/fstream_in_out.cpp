#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h> // ��� ����, ����� ����� ���� ���������� ������� ������� � ����.
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	string path = "fstream.txt";

	fstream fs;
	fs.open(path, fstream::in | fstream::out | fstream::app); //�������� ����� � �� ������, �� ������ � �������� ����������� �����
	if (!fs.is_open()) {
		cout << "������ �������� �����" << endl;
	}
	else {
		cout << "���� ������" << endl;

		string str;
		int value;
		cout << "������� 1 ��� ������ � ����" << endl;
		cout << "������� 2 ��� ������ �� �����" << endl;
		cin >> value;

		if (value == 1) {
			cout << "������� ���� ���������: ";
			SetConsoleCP(1251); // ��� ����������� ����������� ������� ��������
			cin >> str;
			fs << str;
			SetConsoleCP(866); // ����� ��������� ���� �� ����� ������. ��� ����� ��� ����, ����� ��������� �������� ������ � ������� � ����� ���������.
		}
		else if (value == 2) {
			cout << "������ ������ �� �����" << endl;
			while (!fs.eof()) { //eof - end of file
				str = "";
				fs >> str;
				cout << str << endl;
			}
		}
	}
	fs.close();
	return 0;
}