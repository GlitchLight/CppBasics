#include <iostream>
#include <vector>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	int arr[] = { 1, 2, 3 };
	vector <int> MyVector{ 1, 2, 3, 4, 5 };

	cout << arr[1] << endl; // [] - �������� ���������� �������� int ����������� �� ������ x + 1 * 4 �����
	cout << MyVector[1] << endl; // ���������� �������� ����� �������� ��� �������, ��������� ��� ���� ������

	vector <int>::iterator MyVector_it; // ����� ������� ��������� ���������� ���������.
	MyVector_it = MyVector.begin(); // .begin() ���������� ������ ���� ��������. �� ���������� ��������� �� ������ ������� (�������).

	*MyVector_it = 13;

	cout << *MyVector_it << endl; // � ��� � ������� ����������, ������ ����� �������� ����� �������������.
	cout << *(MyVector_it + 2) << endl; // � ��������� ���������� �������� +. ��� ����������� ����� x � ���������, �� ������������ � ��������, ������� ��������� ����� x ����� ��������.
	// ����� �������� ��������, ����� ������������ advance(MyVector_it, 2);

	for (vector <int>::iterator iter = MyVector.begin(); iter != MyVector.end(); ++iter) { // ��� ����� � ����� � ������ ������ begin() ����� ������ rbegin(), � ������ end(), rend();
		// *iter = rand() % 10 - ����� �������� �������� �� ������
		cout << *iter << ' ';
	}
	cout << endl;

	/* ���������� ���� ��������� ��� ������ ��������, ������� ��������� � �������, � ���� - ���. cbegin - constant begin, cend - constant end. iterator - ��������� const_iterator
	for (vector <int>::const_iterator iter = MyVector.�begin(); iter != MyVector.�end(); ++iter) {
		cout << *iter << ' ';
	}
	cout << endl;
	*/

	MyVector.insert(MyVector_it, 3);

	for (vector <int>::iterator iter = MyVector.begin(); iter != MyVector.end(); ++iter) { // ��� ����� � ����� � ������ ������ begin() ����� ������ rbegin(), � ������ end(), rend();
	// *iter = rand() % 10 - ����� �������� �������� �� ������
		cout << *iter << ' ';
	}
	cout << endl;

	return 0;
}