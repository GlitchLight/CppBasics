#include <iostream>
#include <ctime>
using namespace std;

int main() {
	setlocale(LC_ALL, "rus");

	/*
	rand возвращает псевдослучайное число, т.е. каждый раз при новом запуске программы будут появляться одни и те же числа.
	так происходит потому, что для вычисления случайного числа существует какая-то отправная точка. Эту точку можно задавать самому,
	используя функцию srand()

	функция time с параметром null отсчитывает, сколько секунд прошло с 1 января 1970 года, поэтому значение в srand всегда будет другим.
	*/
	srand(time(NULL));
	int const SIZE = 10;
	int arr[SIZE];

	for (int i = 0; i < SIZE;) {
		arr[i] = rand() % 20;
		for (int j = 0; j < i; j++) {
			if (arr[j] == arr[i]) {
				continue;
			}
		}
		i++;
	}

	for (int i = 0; i < SIZE; i++) {
		cout << arr[i] << ' ';
	}

	cout << endl;

	int min = arr[0];
	for (int i = 1; i < SIZE; i++) {
		if (arr[i] < min) {
			min = arr[i];
		}
	}

	cout << "Минимальный элемент -> " << min << endl;

	return 0;
}