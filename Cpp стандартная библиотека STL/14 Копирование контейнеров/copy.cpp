#include <iostream>
#include <algorithm>

#include <vector>
#include <deque>
#include <list>
#define int_it	vector<int>::iterator
using namespace std;

int main() {
	vector <int> v{ 1, 2, 3, 4, 5, 6, 7, 8 };
	vector <int> v_2;

	copy(v.begin(), v.end(), back_inserter(v_2));
	vector <int> ::iterator it = v_2.begin();
	while (it != v_2.end()) {
		cout << *it << ' ';
		++it;
	}
	cout << endl;

	vector <int> v_3;
	copy_if(v.begin(), v.end(), back_inserter(v_3), [](int val) {return !(val % 2); });

	for (int_it it = v_3.begin(); it != v_3.end(); ++it) {
		cout << *it << ' ';
	}
	cout << endl;

	return 0;
}