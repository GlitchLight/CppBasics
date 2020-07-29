#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	string path = "fstream.tx";

	ifstream fin;
	fin.exceptions(ifstream::badbit | ifstream::failbit); // ��� ���� ������� ���������� �������������� �����������

	try
	{
		cout << "������� ������� ����!" << endl;
		fin.open(path);
		cout << "���� ������� ������" << endl;
	}
	catch (const ifstream::failure& ex)
	{
		cout << ex.what() << endl;
		cout << ex.code() << endl;
		cout << "������ �������� �����!" << endl;
	}

	return 0;
}