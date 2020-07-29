#include <iostream>
#include <algorithm>

#include <vector>
#include <deque>
#include <list>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	vector <int> v{ 6,2,5,88,1,23 };
	vector<int>::iterator it = v.begin();

	find(it, v.end(), 5); // ������������ �������� (���������), ������� ������������� �������� "5". ���� ������� �� ������, �������� ����� = v.end();

	while (it != v.end()) {
		it = find_if(it, v.end(), [](int num) {return num > 10; }); //find_if ��������� 3-� ���������� �� �����, � ��������. find_if_not ����������� ��������, ������������ ����������.
		if (it != v.end()) {
			cout << *it << ' ';
			it++;
		}
	}

	return 0;
}