#include <iostream>
//#define DEBUG // Вместо дебаг может быть что угодно. Если он определен, можно выводить отладочную информацию.
#define NewDebug 12
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");

#ifdef DEBUG
	cout << "Начало цикла: " << endl;
#else
	cout << "Режим дебага отключен" << endl;
#endif

	for (int i = 0; i < 13; i++) {
		cout << i + 1 << ' ';
	}
	cout << endl;

#ifdef DEBUG
	cout << endl << "Конец цикла: " << endl;
#endif

#if NewDebug == 13
	cout << "NewDebug = " << 13 << ' ' << endl;
#elif NewDebug < 13;
	cout << "NewDebug = " << NewDebug << endl;
#endif
}
