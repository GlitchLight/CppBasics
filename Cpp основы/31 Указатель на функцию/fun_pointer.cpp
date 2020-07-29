#include <iostream>
using namespace std;

void Fun1() {
	cout << "void Foo1()" << endl;
}

void Fun2() {
	cout << "void Foo2()" << endl;
}

template <typename T>
T sum(T const& a, T const& b) {
	return a + b;
}

int main() {
	void(*VoidFunPointer)();
	VoidFunPointer = Fun2;
	VoidFunPointer();

	int(*IntFunPointer)(int const& a, int const& b);
	IntFunPointer = sum;
	cout << (IntFunPointer(5, 8)) << endl;
}