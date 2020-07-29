#include <iostream>
#include <string>
using namespace std;

void prnt(int i) {
	if (i < 0) {
		throw "����� i < 0"; // ������������� ������ ���� char, �� ����� ��������� int � ������ ��� ������.
	}
	cout << "���������� i = " << i << endl;
}

void prnt_exception(int i) {
	if (i < 0) {
		throw exception("����� i < 0");
	}
	cout << "���������� i = " << i << endl;
}

int main() {
	setlocale(LC_ALL, "ru");
	try
	{
		prnt(-1);
	}
	catch (char const* str) // ������ ����� ��������� ��� ��������� �� ������ �������
	{
		cout << str << endl;
	}

	try
	{
		prnt_exception(-1);
	}
	catch (const exception& ex)
	{
		cout << ex.what() << endl;
	}

	return 0;
}