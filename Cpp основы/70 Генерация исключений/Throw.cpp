#include <iostream>
#include <string>
using namespace std;

void prnt(int i) {
	if (i < 0) {
		throw "Число i < 0"; // Выбрасывается массив типа char, но можно выбросить int и другой тип данных.
	}
	cout << "Переменная i = " << i << endl;
}

void prnt_exception(int i) {
	if (i < 0) {
		throw exception("Число i < 0");
	}
	cout << "Переменная i = " << i << endl;
}

int main() {
	setlocale(LC_ALL, "ru");
	try
	{
		prnt(-1);
	}
	catch (char const* str) // Массив чаров передаётся как указатель на первый элемент
	{
		cout << str << endl;
	}

	try
	{
		prnt_exception(-1);
	}
	catch (const exception& ex)
	{
		cout << ex.what() << endl;
	}

	return 0;
}