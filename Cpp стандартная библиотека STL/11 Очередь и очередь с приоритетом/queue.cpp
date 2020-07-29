#include <iostream>
#include <vector> // Адаптеры контейнеров просто урезают функционал vector, list и deque. В стек можно только добавлять и удалять элементы. Нельзя работать с ним, как с полноценным массивом.
#include <list>
#include <deque>

#include <queue> // Первый входящий выходит. Это очередь.
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	queue <int> FIFO; // Так же, как и стек, ограничивает функционал вектора, списка и дека. По умолчанию, используется дек. Очередь не работает с вектором.
	FIFO.emplace(3);
	FIFO.emplace(2);
	FIFO.emplace(1);
	FIFO.emplace(0);
	FIFO.pop();
	cout << "Начало очереди: " << FIFO.front() << endl;
	cout << "Конец очереди: " << FIFO.back() << endl;

	while (!FIFO.empty()) {
		cout << FIFO.front() << ' ';
		FIFO.pop();
	}
	cout << endl;

	priority_queue <int> new_queue; // Использует вектор и дек. Очередь с приоритетом - это бинарное дерево: макс куча.
	new_queue.emplace(12);
	new_queue.emplace(1);
	new_queue.emplace(23);

	while (!new_queue.empty()) { // 23 12 1
		cout << new_queue.top() << ' ';
		new_queue.pop();
	}
	cout << endl;


	return 0;
}