#include <iostream>
#include <algorithm>

#include <vector>
#include <deque>
#include <list>
using namespace std;

void print(vector <int> vec) {
	for (auto element : vec) {
		cout << element << ' ';
	}
	cout << endl;
}

int main() {
	vector <int> vec{ 1, 23, 5, 6, 22 };
	print(vec);

	vector <int> ::iterator it = remove(vec.begin(), vec.end(), 5); // remove ���������� ������� � ����� ������� � ���������� ��������, ����������� �� ����
	vec.erase(it);
	print(vec);

	it = remove_if(vec.begin(), vec.end(), [](int val) {return val > 6; }); // remove ���������� ������� � ����� ������� ���� ����������� ������� � ���������� ��������, ����������� �� ������ ������������ �������.
	vec.erase(it, vec.end());
	print(vec);

	return 0;
}