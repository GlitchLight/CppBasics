#include <iostream>
using namespace std;

class parent {
public:
	void non_vrt() {
		cout << "����� ��� ������������� ����� ������ parent" << endl;
	}
};

class child : public parent {
public:
	void non_vrt() {
		cout << "����� ��� ������������� ����� ������ child" << endl;
	}
};

int main() {
	setlocale(LC_ALL, "ru");
	parent par;
	child chil;

	parent* ptr_par = &par;
	child* ptr_chil = &chil;
	parent* ptr_par_chil = &chil; // �� ����� ����� ���������� � ���������� ��� � ��������� �� ������ (����������) ���� parent;

	/*
	child* ptr_chil_par = &par; �� �� ����� �������� � ��������� �� ���������� ����� ������� ��������, �.�. �������� ������ �� ����� � ���������� � ��������� �������� ������ �����
	*/

	ptr_par->non_vrt();
	ptr_chil->non_vrt();
	ptr_par_chil->non_vrt(); // ���� ���������� � ������ non_vrt, �� �� ��������� � ������ ���� �������, ������� ������������� ���� ���������, �� ���� parent.

	return 0;
}