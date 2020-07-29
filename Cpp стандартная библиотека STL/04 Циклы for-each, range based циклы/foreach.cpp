#include <iostream>
#include <vector>
#include <list>
using namespace std;


int main() {
	setlocale(LC_ALL, "ru");
	list <int> MyList{ 15, 122, 253, 253, 253 };

	int arr[] = { 1, 2, 3, 4, 5 };

	// for_each есть цикл, есть алгоритм, это алгоритм из библиотеки алгоритмов

	/* Использовать не рекомендуется, да и не работает он
	for each (int variable in arr)
	{
		cout << variable;
	}
	*/

	for (int element : arr) { // range-based цикл используется с 11 стандарта. В данном случае, мы получаем значения элементов, но не сами элементы.
		cout << element << ' ';
	}
	cout << endl;

	for (int const& element : arr) { // Чтобы получать сами элементы по ссылке, нужно указывать & после типа данных. Так же этот цикл работает с контейнерами STL.
		cout << element << ' ';
	}
	cout << endl;

	return 0;
}