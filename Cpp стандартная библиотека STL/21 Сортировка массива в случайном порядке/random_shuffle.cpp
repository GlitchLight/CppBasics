#include <iostream>
#include <ctime> // Нужно как для rand, так и для random_shuffle;
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
	srand(time(NULL));

	vector <int> vec{ 1, 22, 22, -100, 6, 22 };
	random_shuffle(vec.begin(), vec.end());
	print(vec);

	return 0;
}