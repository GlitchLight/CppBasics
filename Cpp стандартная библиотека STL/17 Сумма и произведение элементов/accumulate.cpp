#include <iostream>
#include <numeric> // Необходимо для использования accumulate

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

	int sum = accumulate(vec.begin(), vec.end(), 0); // сумма
	cout << sum << endl;;

	int mul = accumulate(vec.begin(), vec.end(), 1, [](int& result, int val)
		{
			result *= val;
			return result;
		}
	);
	cout << mul << endl;

	return 0;
}