#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	setlocale(LC_ALL,"rus");
	int a = 1, b = 2, c = 0;

	//������� ���������
	a = -a;
	cout << a << endl;
	//�������� ���������
	cout << a << '+' << b << '=' << a + b << endl;
	cout << a << '-' << b << '=' << a - b << endl;
	cout << a << '*' << b << '=' << a * b << endl;
	cout << a << '/' << b << '=' << (float) a / b << endl;
	//�������� ���������
	cout << (a > b ? a : b) << endl;

	cin >> a >> b >> c;
	int sum = a + b + c;
	cout << "����� ����� sum = " << sum << endl;
	cout << "������������ ����� pr = " << a * b * c << endl;
	cout << "������� ����� aver = " << sum / 3 << endl;
	system("pause");
}
