#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h> // Для того, чтобы можно было записывать русские символы в файл.
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	string path = "fstream.txt";

	fstream fs;
	fs.open(path, fstream::in | fstream::out | fstream::app); //Открытие файла и на чтение, на запись и дозапись содержимого файла
	if (!fs.is_open()) {
		cout << "Ошибка открытия файла" << endl;
	}
	else {
		cout << "Файл открыт" << endl;

		string str;
		int value;
		cout << "Введите 1 для записи в файл" << endl;
		cout << "Введите 2 для чтения из файла" << endl;
		cin >> value;

		if (value == 1) {
			cout << "Введите ваше сообщение: ";
			SetConsoleCP(1251); // Для корректного отображения русских символов
			cin >> str;
			fs << str;
			SetConsoleCP(866); // Такая кодировка была до ввода данных. Это нужно для того, чтобы корректно выводить данные в консоль в самой программе.
		}
		else if (value == 2) {
			cout << "Чтение данных из файла" << endl;
			while (!fs.eof()) { //eof - end of file
				str = "";
				fs >> str;
				cout << str << endl;
			}
		}
	}
	fs.close();
	return 0;
}