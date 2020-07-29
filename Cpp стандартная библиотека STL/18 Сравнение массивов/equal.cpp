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
	vector <int> vec{ 0, 22, -100, 6, 22 };
	vector <int> vec2{ 1, 22, -100, 6, 22 };
	print(vec);
	print(vec2);

	bool result = equal(++vec.begin(), vec.end(), ++vec2.begin(), vec2.end());
	cout << result << endl;

	result = equal(++vec.begin(), vec.end(), ++vec2.begin(), vec2.end(), [](int val1, int val2) {return val1 <= val2; });
	cout << result << endl;

	pair <vector <int>::iterator, vector <int>::iterator> pair = mismatch(vec.begin(), vec.end(), vec2.begin(), vec2.end());
	cout << *pair.first << ' ' << *pair.second << endl;

	return 0;
}