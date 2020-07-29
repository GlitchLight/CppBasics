#include <iostream>
#include <cstdlib>
using namespace std;

// лучше не использовать это в программировании.

int main() {
	setlocale(LC_ALL, "rus");
	cout << 1 << ' ';

	goto link; //позволяет перейти к метке link

	cout << 2;
	cout << 2;
	cout << 2;

	link: //метка link

	cout << 3 << endl;
	system("pause");
}