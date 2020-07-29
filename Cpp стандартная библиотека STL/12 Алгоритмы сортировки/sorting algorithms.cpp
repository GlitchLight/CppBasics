#include <iostream>

#include <deque>
#include <vector>
#include <list>

#include <algorithm>
using namespace std;

bool Greater(int a, int b) { // Предикат с двумя параметрами является бинарным
	return a > b; // Для каждой последовательно идущей пары чисел в массиве будет выполняться неравенство a > b;
}

void print(vector <int> massive) {
	for (int el : massive) { // исходный массив
		cout << el << ' ';
	}
	cout << endl;
}


int main() {
	vector <int> massive{ 6, 9, 23, 12, 3, 7 };

	print(massive);

	sort(massive.begin(), massive.end()); // стандартная сортировка по возрастанию
	print(massive);

	sort(massive.begin(), massive.end(), Greater); // сортировка по убыванию.
	print(massive);

	sort(massive.begin(), massive.end(), [](int a, int b) {return a > b; }); // Чтобы не засорять пространство имен нужно использовать анонимную функцию
	print(massive);

	return 0;
}