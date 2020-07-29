#include <iostream>
#include <ctime>
using namespace std;

int str_len(char const* const str) {
	int i = 0, size = 0;
	while (str[i] != '\0') {
		size++;
		++i;
	}
	return size;
}

int main() {
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	int i = 0;

	int size = 13;
	char* str = new char[size];
	for (int i = 0; i < size - 1; ++i) {
		str[i] = (char)(rand() % 255); // 97 - 122 английские буквы
	}
	str[size - 1] = '\0';

	cout << "str = " << str << " ";
	cout << "Моя str_len:\t" << str_len(str) << endl;
	cout << "Встроенная str_len:\t" << strlen(str) << endl;

	delete[] str;
	return 0;
}