#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class point {
public:
	int x = 13;
	int y = 13;
	int z = 13;
};


int main() {
	setlocale(LC_ALL, "ru");
	string path = "FileObj.txt";

	point p;
	ofstream fout;
	fout.open(path, ofstream::app);

	if (!fout.is_open()) { //���� ���� �� ������, �� �� ��������� � �����������, ���� ��� ���, ��� ��� �������� �� �����������
		cout << "������ �������� �����" << endl;
	}
	else
	{
		//������ �������� - ������ �� ������ ���� char, ������ ������ ������� � ������. ������ ����� ������������ � ���� ���������.
		fout.write((char*)&p, sizeof(p));
	}

	fout.close();

	fstream fin;

	fin.open(path);

	if (!fin.is_open()) {
		cout << "������ �������� �����" << endl;
	}
	else
	{
		point pnt;
		while (fin.read((char*)&pnt, sizeof(point))) {
			cout << pnt.x << ' ' << pnt.y << ' ' << pnt.z << endl;
		}
	}

	fin.close();

	return 0;
}