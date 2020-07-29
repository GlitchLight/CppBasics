#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	cout << "Привет" << '\n';
	cout << "Привет ->" << '\t' << "<- здесь был tab" << '\n';
	cout << "Привет\b" << '\n';
	cout << "Привет \\ \' \"" << '\n';
	return 0;
}