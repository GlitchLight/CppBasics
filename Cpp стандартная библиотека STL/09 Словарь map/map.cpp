#include <iostream>
#include <map>

#include <string>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	pair <int, string> key_value(1, "один"); // Пара связывает 2 различных элементов и является элементом контейнера map (dict). По ключу строится бинарное дерево.
	cout << key_value.first << endl;
	cout << key_value.second << endl;

	map <int, string> dict;
	dict[5] = "Пять"; // Если ключа не существует, он создается.

	// Вставка элемента принимает параметром пару элементов, но такая запись неудобна.
	dict.insert(key_value);
	dict.insert(make_pair(2, "два"));
	dict.insert(pair <int, string>(3, "Три"));

	// В 11 стандарте добавился метод emplace, который короче для записи и быстрее.
	dict.emplace(4, "Четыре");


	for (pair <int, string> element : dict) { // Словарь всегда упорядочен, как и множество.
		cout << element.first << ' ' << element.second << endl;
	}

	cout << dict[2] << endl; // В квадратные скобки передается ключ.

	// Добавить новый элемент с существующим ключом нельзя, как и в обычном множестве.

	multimap <int, string> multidict; // Позволяет хранить повторяющиеся ключи. Нет метода at(). Нет оператора [], т.к. не понятно, к какому из элементу с повторяющимся ключем обращаться

	return 0;
}