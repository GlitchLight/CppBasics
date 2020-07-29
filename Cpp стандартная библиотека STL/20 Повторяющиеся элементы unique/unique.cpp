#include <iostream>
#include <algorithm>

#include <vector>
#include <deque>
#include <list>
using namespace std;

void print(vector <int> vec) {
	for (auto element : vec) {
		cout << element << ' ';
	}
	cout << endl;
}

int main() {
	setlocale(LC_ALL, "ru");
	vector <int> vec{ 1, 22, 22, -100, 6, 22 };
	print(vec);

	auto it = unique(vec.begin(), vec.end()); // ѕереносит в конец подр€д идущие повтор€ющиес€ элементы и возвращает итератор
	vec.erase(it, vec.end());
	print(vec);

	vector <int> vec_2;
	unique_copy(vec.begin(), vec.end(), back_inserter(vec_2));
	print(vec_2);

	return 0;
}