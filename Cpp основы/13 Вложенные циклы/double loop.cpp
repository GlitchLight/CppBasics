#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	int m, n;
	cout << "������� ������ ��������������: ";
	cin >> m;
	cout << "������� ����� ��������������: ";
	cin >> n;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << '*' << ' ';
		}
		cout << endl;
	}
	system("pause");
}