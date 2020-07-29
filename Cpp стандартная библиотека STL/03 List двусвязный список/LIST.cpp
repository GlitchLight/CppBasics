#include <iostream>
#include <list>
using namespace std;

template <typename T>
void PrintList(list <T> const& lst) {
	for (auto el : lst) {
		cout << el << ' ';
	}
	cout << endl;
}

int main() {
	setlocale(LC_ALL, "ru");
	list <int> MyList{ 15, 122, 253, 253, 253 };

	MyList.push_back(2); // Добавить в конец списка.
	MyList.push_front(1); // Добавить в начало списка.

	list <int>::iterator list_iterator = MyList.begin(); // auto list_iterator = MyList.begin();

	cout << "MyList[0] = " << *list_iterator << endl; // Тем не менее, для MyList оператор [] не перегружен в отличие от вектора

	while (list_iterator != MyList.end()) {
		cout << *list_iterator++ << ' ';
	}
	cout << endl;

	for (auto i = MyList.begin(); i != MyList.end(); ++i) {
		cout << *i << ' ';
	}
	cout << endl;

	MyList.sort();
	cout << "Отсортированный список: " << endl;
	PrintList(MyList);

	MyList.pop_back();
	MyList.pop_front();
	cout << "Список с удаленным первым и последним элементом: " << endl;
	PrintList(MyList);

	cout << "Объединение последовательно идущих одинаковых элементов: " << endl;
	MyList.unique();
	PrintList(MyList);

	cout << "Разворот списка в обратную сторону: " << endl;
	MyList.reverse();
	PrintList(MyList);

	list_iterator = MyList.begin(); // В результате одного из предыдущих циклов итератор указывает на конец списка, поэтому передвинем
	// его обратно в начало.
	advance(list_iterator, 1); // Сдвигает итератор на int число вправо.
	MyList.insert(list_iterator, 13); // После вставки, итератор указывает не на 13, а на число, которое стояло на той позиции вместо 13
	list_iterator--; // Поэтому, чтобы вернуться с позиции 2 на позицию 1, необходимо отнять у итератора единицу.
	cout << "Вставка элемента на позицию 1: " << endl;
	PrintList(MyList);
	MyList.erase(list_iterator);
	cout << "Удаление элемента с позиции 1: " << endl;
	PrintList(MyList);

	cout << "Поиск и удаление элемента 253: " << endl;
	MyList.remove(253);
	PrintList(MyList);

	cout << "Удаление всех элементов и добавление 10 элементов 222: " << endl;
	MyList.assign(10, 222); // New_List.assign(List.begin(), List.end()); - так можно скопировать в новый лист все значения старого
	PrintList(MyList);

	cout << "Размер списка до удаления элементов: size = " << MyList.size() << endl;
	MyList.clear();
	cout << "Размер списка после удаления элементов: size = " << MyList.size() << endl;

	return 0;
}