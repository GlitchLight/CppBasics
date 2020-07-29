#include <iostream>
using namespace std;

class parent {
public:
	virtual void vrt() {
		cout << "����� ��� ������������� ����� ������ parent" << endl;
	}
};

class child : public parent {
public:
	void vrt() {
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

	ptr_par->vrt();
	ptr_chil->vrt();
	ptr_par_chil->vrt(); // ���� ���������� � ������ non_vrt, �� �� ��������� � ������ ���� �������, ������� ������������� ���� �������, �� ���� child.

	return 0;
}