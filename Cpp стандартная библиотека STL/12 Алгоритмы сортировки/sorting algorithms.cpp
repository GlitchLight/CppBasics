#include <iostream>

#include <deque>
#include <vector>
#include <list>

#include <algorithm>
using namespace std;

bool Greater(int a, int b) { // �������� � ����� ����������� �������� ��������
	return a > b; // ��� ������ ��������������� ������ ���� ����� � ������� ����� ����������� ����������� a > b;
}

void print(vector <int> massive) {
	for (int el : massive) { // �������� ������
		cout << el << ' ';
	}
	cout << endl;
}


int main() {
	vector <int> massive{ 6, 9, 23, 12, 3, 7 };

	print(massive);

	sort(massive.begin(), massive.end()); // ����������� ���������� �� �����������
	print(massive);

	sort(massive.begin(), massive.end(), Greater); // ���������� �� ��������.
	print(massive);

	sort(massive.begin(), massive.end(), [](int a, int b) {return a > b; }); // ����� �� �������� ������������ ���� ����� ������������ ��������� �������
	print(massive);

	return 0;
}