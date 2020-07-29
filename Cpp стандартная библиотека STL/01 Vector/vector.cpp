#include <iostream>
#include <vector> // ������ - ��� ���������������� ������������ ������ � ������
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");

	vector <int> MyVector; // vector <int> MyVector(32, 8) - �������� �������, �������� 32, ������������ ������� 8
	// ���������� �������� MyVector.resize(32). ���� ����� �������� ��� �����������, � � ������ ������ ��������� ��� ������
	MyVector.reserve(100); // ������� �������� ����������� ������� � ������ ��� ������ (������)
	// ���� �������� ������� ����� ������, ����� ������������ MyVector.shrink_to_fit(2) ��� ���������� capacity �� 2/
	MyVector.push_back(1); // ��������� ������� � ����� �������
	MyVector.push_back(2);

	cout << "���������� ��������� � �������: " << MyVector.size() << endl;
	// cout << MyVector[10] << endl; ��� ������ �� ������� �������, ��������� ����� ����� ��, ��� � � �������� �������, ������� ����� ������������ ����� at, �� �� ���������

	try
	{
		cout << MyVector.at(10) << endl;
	}
	catch (const std::out_of_range& ex)
	{
		cout << ex.what() << endl;
	}

	MyVector.pop_back(); // ������� ������� � ����� �������
	// MyVector.clear(); // ������� ��� �������� �� �������
	/* cout << MyVector.capacity() << endl // ���������� ����������� �������. � ������� �� size ���������� �� ��, ������� ��� ��������� ���������, � ������� ����� �����������. � ���������� �����������
	����� ������.
	MyVector.empty() - ������ true, ���� ������ ����
	*/

	cout << "������ ��������: " << MyVector[0] << endl;

	return 0;
}