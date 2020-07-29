#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	setlocale(LC_ALL, "rus");

	cout << "÷икл с i++" << endl;
	for (int i = 0; i <= 10; i++) {
		cout << i << ' ';
	}
	cout << endl;
	cout << "÷икл с ++i" << endl;
	for (int i = 0; i <= 10; ++i) {
		cout << i << ' ';
	}
	cout << endl;



	int i = 0; // можно определить переменную i вне цикла, тогда она не исчезнет при его выполнении
	cout << "ѕервый цикл: " << endl;
	for (; i <= 10; ++i) {
		cout << i << ' ';
	}
	cout << endl;
	cout << "ѕродолжение работы цикла: " << endl;
	for (; i <= 20; ++i) {
		cout << i << ' ';
	}
	cout << endl;

	/* ÷икл будет работать вечно.
	for (; ;){
		cout << "«десь было сообщение" << endl;
	}
	*/

	cout << "»спользование нескольких переменных в цикле: " << endl;
	for (int i = 0, j = 0; i < 10; i++, j += 2) { // в цикле for можно использовать несколько переменных
		cout << "i = " << i << ' ';
		cout << "j = " << j << endl;
	}
	cout << endl;

	cout << "Ѕесконечный цикл, который останавливаетс€ на i = 13 при помощи break: " << endl;
	i = 0;
	for (; ;) {
		++i;
		cout << i << ' ';
		if (i == 13) {
			break;
		}
	}
	cout << endl;

	system("pause");
	return 0;

}
