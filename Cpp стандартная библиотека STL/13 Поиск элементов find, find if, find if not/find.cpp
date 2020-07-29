#include <iostream>
#include <algorithm>

#include <vector>
#include <deque>
#include <list>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	vector <int> v{ 6,2,5,88,1,23 };
	vector<int>::iterator it = v.begin();

	find(it, v.end(), 5); // ¬озвращаетс€ итератор (указатель), который соответствует элементу "5". ≈сли элемент не найден, итератор будет = v.end();

	while (it != v.end()) {
		it = find_if(it, v.end(), [](int num) {return num > 10; }); //find_if принимает 3-м параметром не число, а предикат. find_if_not инвертирует значение, возвращаемое предикатом.
		if (it != v.end()) {
			cout << *it << ' ';
			it++;
		}
	}

	return 0;
}