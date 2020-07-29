#include <iostream>
#include <set>
#include <ctime>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	set <int> SET; // Множество - это двоичное дерево. Меньшие элементы идут влево, большие вправо.
	while (SET.size() < 13) {
		SET.insert(rand() % 100);
	}

	// При переборе элементов можно увидеть, что они упорядочены по возрастанию. Более того, множество не хранит в себе повторы.
	for (auto element : SET) {
		cout << element << ' ';
	}
	cout << endl;

	int value;
	cin >> value;

	if (SET.find(value) != SET.end()) {
		cout << value << " : число найдено" << endl;
	}
	else {
		cout << value << " : число не найдено" << endl;
	}

	// В множестве нельзя заменить элемент. Если есть множество 1 2 3 4 и мы заменим 1 на 5, получится 5 2 3 4. Но можно удалить элемент и вставить. erase(), insert()

	// Чтобы можно было добавлять повторы, нужно использовать multiset multiset <int> multi_set;

	return 0;
}