#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	double a = 13.13;
	int b = (int)a;
	cout << "a = " << a << "\tb = (int) a = " << b << endl;

	for (int i = 0; i <= 255; i++) {
		cout << "code: " << i << "\tsym: " << (char)i << endl;
	}
	return 0;
}