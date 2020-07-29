#include <iostream>
#include <ctime>
using namespace std;

void incr(int* pa) {
	(*pa)++; // ���� ������ *a �� � �������, �� ������� ����� ����������� �������� ++
}

template <typename T>
void multi_incr(T* pa, T* pb, T* pc) {
	(*pa) += 13;
	(*pb) *= 13;
	(*pc) *= 169;
}

template <typename T>
void swap(T* pa, T* pb) {
	T temp = *pa;
	*pa = *pb;
	*pb = temp;
}

int main() {
	setlocale(LC_ALL, "ru");

	int a = 5;
	cout << "������ �������� a: " << a << endl;
	incr(&a);
	cout << "����� �������� a: " << a << endl;

	int b = a, c = a;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
	cout << "����� multi_incr: " << endl;
	multi_incr(&a, &b, &c);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
	cout << "�������� ������� a � b ��� ������ ����������: " << endl;
	cout << "a = " << a << "\t" << "b = " << b << endl;
	swap(&a, &b);
	cout << "a = " << a << "\t" << "b = " << b << endl;

	return 0;
}