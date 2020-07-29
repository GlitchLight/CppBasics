#include <iostream>
#include <vector>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	int arr[] = { 1, 2, 3 };
	vector <int> MyVector{ 1, 2, 3, 4, 5 };

	cout << arr[1] << endl; // [] - оператор возвращает значение int находящееся по адресу x + 1 * 4 байта
	cout << MyVector[1] << endl; // аналогично работает такой оператор для вектора, поскольку это тоже массив

	vector <int>::iterator MyVector_it; // Здесь написан синтаксис объявления итератора.
	MyVector_it = MyVector.begin(); // .begin() возвращает объект типа итератор. Он напоминает указатель на начало массива (вектора).

	*MyVector_it = 13;

	cout << *MyVector_it << endl; // И как с обычным указателем, данные можно получить через разыменование.
	cout << *(MyVector_it + 2) << endl; // У итератора перегружен оператор +. При прибавлении числа x к итератору, мы перемещаемся к элементу, который находится через x после текущего.
	// Чтобы сдвинуть итератор, можно использовать advance(MyVector_it, 2);

	for (vector <int>::iterator iter = MyVector.begin(); iter != MyVector.end(); ++iter) { // Для цикла с конца в начало вместо begin() можно делать rbegin(), а вместо end(), rend();
		// *iter = rand() % 10 - можно заменить значение на другое
		cout << *iter << ' ';
	}
	cout << endl;

	/* Предыдущий цикл позволяет нам менять значения, которые находятся в векторе, а этот - нет. cbegin - constant begin, cend - constant end. iterator - наследник const_iterator
	for (vector <int>::const_iterator iter = MyVector.сbegin(); iter != MyVector.сend(); ++iter) {
		cout << *iter << ' ';
	}
	cout << endl;
	*/

	MyVector.insert(MyVector_it, 3);

	for (vector <int>::iterator iter = MyVector.begin(); iter != MyVector.end(); ++iter) { // Для цикла с конца в начало вместо begin() можно делать rbegin(), а вместо end(), rend();
	// *iter = rand() % 10 - можно заменить значение на другое
		cout << *iter << ' ';
	}
	cout << endl;

	return 0;
}