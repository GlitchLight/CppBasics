// https://www.youtube.com/watch?v=m3WgGSVmNcs&list=PLQOaTSbfxUtCrKs0nicOg2npJQYSPGO9r&index=181
// https://www.youtube.com/watch?v=bP5GJN3-zIo&list=PLQOaTSbfxUtCrKs0nicOg2npJQYSPGO9r&index=179
#include <iostream>
#include <functional>
#include <ctime>
#include <vector>
using namespace std;

// Функции even_print, div_by_3 и div_by_13 захламляют пространство имен. Они нам нужны только в функции property printer
void even_print(int i) {
	if ((i % 2) == 0) {
		cout << "even |" << ' ';
	}
}

void div_by_3(int i) {
	if ((i % 3) == 0) {
		cout << "div_by_3 |" << ' ';
	}
}

void div_by_13(int i) {
	if ((i % 13) == 0) {
		cout << "div_by_13 |" << ' ';
	}
}

void property_printer(vector <int> vec, vector <function<void(int)>> arr_of_fun) { // Вместо vector, можно просто перечислить анонимные функции с тем функционалом, которые дают 3 предыдущие функции.
	for (int el : vec) {
		cout << el << " | ";
		for (auto fun : arr_of_fun) {
			fun(el);
		}
		cout << endl;
	}
}

void anon_realiser(vector <int> vec, function<void(int)> fun) {
	for (int el : vec) {
		fun(el);
	}
}

int main() {
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	[]() {}; /* lambda функция {} - это фигурные скобки, которые обозначают тело функции. () - это место, в котором указываются принимаемые функцией параметры. [] изолирует функцию от внешнего мира.
	Тип возвращаемого значения определяется автоматически*/

	vector <function<void(int)>> arr_of_fun{ even_print, div_by_3, div_by_13 }; // В массиве могут быть любые объекты, в том числе и функции.
	vector <int> vec{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20 };
	property_printer(vec, arr_of_fun);

	function <void(int)> f;
	// f ссылается на анонимную функцию
	f = [](int a) { // функция называется анонимной потому, что у нее нет имени. Т.е. []. Ее нельзя просто вызвать, но можно присвоить её переменной и передать в качестве параметра.
		cout << "Вызвана анонимная функция с параметром: " << a << endl;
	};

	anon_realiser(vec, [](int a) { cout << "Вызвана анонимная функция с параметром: " << a << endl; }); // можно не присваивать анонимную функцию объекту класса функция, а сразу передать её параметром.

	int p = 0;
	[&p]() { // Если не передать ничего в [], то мы ничего не сможем сделать с переменными, которые находятся вне функции, но в [] можно указать, с какими внешними переменными она будет работать
		p = 5;
	};

	auto funct = [&p]() {p = 5; }; // В 14 стандарте можно создать переменную типа функции, которая определяет тип автоматически. Ей можно присвоить анонимную функцию.

	return 0;
}