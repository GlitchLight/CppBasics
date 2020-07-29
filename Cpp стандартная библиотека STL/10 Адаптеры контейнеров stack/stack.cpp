#include <iostream>

#include <vector> // Адаптеры контейнеров просто урезают функционал vector, list и deque. В стек можно только добавлять и удалять элементы. Нельзя работать с ним, как с полноценным массивом.
#include <list>
#include <deque>

#include <stack>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");

	stack <int> STACK; // По умолчанию, контейнер, чей функционал режут - это deque. Но можно выбрать контейнер самостоятельно stack <int, list <int>> STACK;
	// auto ans = STACK._Get_container(); Раньше был такой метод и он возвращал deque. Таким образом можно было вернуть функционал deque.

	STACK.push(2); // Создает копию объекта и переносит в стек
	STACK.emplace(3); // Добавляет элемент без копирования. Работает быстрее. Добавлен в одном из новых стандартов.
	STACK.emplace(22);
	STACK.emplace(14);

	STACK.pop(); // Удаляет элемент с конца стека
	cout << STACK.top() << endl << endl; // Возвращает конечный элемент стека.

	// Выводит верхний элемент и удаляет его до тех пор, пока стек не окажется пустым.
	while (!STACK.empty()) {
		cout << STACK.top() << endl;
		STACK.pop();
	}


	return 0;
}