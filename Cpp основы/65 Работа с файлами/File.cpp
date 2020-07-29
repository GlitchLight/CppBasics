#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//fstream ������ � ������ ifstream ������ �� ����� ofstream ������ �� �����

int main() {
	setlocale(LC_ALL, "ru");

	string path = "MyFile.txt";
	ofstream fout;
	fout.open(path); //����� ��������� �� � ���������, � � �������� ����. ��� �� ���������� ������ �� ������, � ��������� �� ���� ������� fout.open(path, ofstream::app);

	if (!fout.is_open()) { //���� ���� �� ������, �� �� ��������� � �����������, ���� ��� ���, ��� ��� �������� �� �����������
		cout << "������ �������� �����" << endl;
	}
	else
	{
		fout << "����� ���� ������!";
	}

	fout.close();

	ifstream fin;
	fin.open(path);

	if (!fin.is_open()) { //���� ���� �� ������
		cout << "������ �������� �����" << endl;
	}
	else
	{
		string str;
		while (!fin.eof()) { //���������� true ���� �� �������� ����� �����
			// str = "";
			getline(fin, str); //fin.getline(str, ���������� ��������, ������� ����� �������) - ��� ��������� �����.
			// fin >> str; // ��������� ������ �� ������� �������.
			cout << str << endl;
		}

		cout << endl;

		char ch;
		while (fin.get(ch)) {
			cout << ch;
		}

		cout << endl;
	}

	fin.close();

	cout << endl;
	return 0;
}