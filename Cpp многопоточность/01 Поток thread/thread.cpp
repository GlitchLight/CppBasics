#include <iostream>
#include <thread> // ѕотоки позвол€ют выполн€ть параллельно несколько операций.

using namespace std;

void printer() {
	for (int i = 0; i < 10; ++i) {
		cout << "Printer thread ID: " << this_thread::get_id() << endl;
		this_thread::sleep_for(chrono::milliseconds(500));
	}

}

int main() {
	thread th(printer);

	/*
	Ќе имеет значени€, где использовать detach.
	th.detach();
	—начала выполнитс€ поток th, потом this_thread (main). Ёто не имеет никакого смысла, поскольку потоки нужны, чтобы параллельно выполн€ть операции.
	th.join();
	*/

	for (int i = 0; i < 10; ++i) {
		cout << "Main thread ID: " << this_thread::get_id() << endl;
		this_thread::sleep_for(chrono::milliseconds(500));
	}

	th.detach(); // ќстанавливает поток th, если текущий поток дойдЄт до return, но поток th всЄ еще будет активен.
	th.join(); // ∆дет окончани€ работы потока th и только потом идет дальше.

	// ≈сли не сделать ни одной из этих операций, тогда при возвращении значени€ функции main, поток th всЄ еще останетс€ активным, не заверша свою работу. Ёто приведет к ошибке.
	return 0;
}