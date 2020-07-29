#include <iostream>
#include <algorithm>

#include <vector>
#include <deque>
#include <list>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	int vec[]{ 0, 22, -100, 6, 22 };
	for_each(begin(vec), end(vec), [](int element) {cout << element << ' '; }); // for_each можно использовать для пробега по элементам как динамического, так и статического массива

	return 0;
}