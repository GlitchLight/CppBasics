#include <iostream>
#include <vector>
#include <list>
using namespace std;


int main() {
	setlocale(LC_ALL, "ru");
	list <int> MyList{ 15, 122, 253, 253, 253 };

	int arr[] = { 1, 2, 3, 4, 5 };

	// for_each ���� ����, ���� ��������, ��� �������� �� ���������� ����������

	/* ������������ �� �������������, �� � �� �������� ��
	for each (int variable in arr)
	{
		cout << variable;
	}
	*/

	for (int element : arr) { // range-based ���� ������������ � 11 ���������. � ������ ������, �� �������� �������� ���������, �� �� ���� ��������.
		cout << element << ' ';
	}
	cout << endl;

	for (int const& element : arr) { // ����� �������� ���� �������� �� ������, ����� ��������� & ����� ���� ������. ��� �� ���� ���� �������� � ������������ STL.
		cout << element << ' ';
	}
	cout << endl;

	return 0;
}