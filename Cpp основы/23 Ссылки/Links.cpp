#include <iostream>
using namespace std;

template <typename T>
void Swap(T& a, T& b) {
	T temp = a;
	a = b;
	b = temp;
}

int main() {
	int a = 5, b = 10;
	cout << "a = " << a << "\t" << "b = " << b << endl;
	cout << "Swap" << endl;
	Swap(a, b);
	cout << "a = " << a << "\t" << "b = " << b << endl;
}