#include <iostream> // include - команда препроцессора: найти код, а затем встроить его в программу перед компиляцией.
#define PI 3.14 // При каждом появлении в коде PI, использовать 3.14;
#define tab "\t"
#define begin { // ЛУЧШЕ ТАК НЕ ДЕЛАТЬ, т.к. это слово может быть занято функцией.
#define end }
using namespace std;

int main() {
	cout << PI << tab << PI << endl;

	for (int i = 0; i < 13; ++i)
		begin
		cout << (i + 1) << ' ';
	end

		cout << endl;
	return 0;
}