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
	vector <int> vec{ 1, 23, -100, 6, 22 };
	print(vec);

	cout << "Минимальный элемент: " << *min_element(vec.begin(), vec.end()) << "\nМаксимальный элемент: " << *max_element(vec.begin(), vec.end()) << endl;

	return 0;
}