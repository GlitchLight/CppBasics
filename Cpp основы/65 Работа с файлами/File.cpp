#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//fstream чтение и запись ifstream чтение из файла ofstream запись из файла

int main() {
	setlocale(LC_ALL, "ru");

	string path = "MyFile.txt";
	ofstream fout;
	fout.open(path); //можно сохранять не в текстовом, а в бинарном виде. Что бы записывать данные не сверху, а дополнять их надо сделать fout.open(path, ofstream::app);

	if (!fout.is_open()) { //если файл не открыт, но он создается и открывается, если его нет, так что проверка не обязательна
		cout << "Ошибка открытия файла" << endl;
	}
	else
	{
		fout << "Здесь были данные!";
	}

	fout.close();

	ifstream fin;
	fin.open(path);

	if (!fin.is_open()) { //если файл не открыт
		cout << "Ошибка открытия файла" << endl;
	}
	else
	{
		string str;
		while (!fin.eof()) { //Возвращает true пока не наступит конец файла
			// str = "";
			getline(fin, str); //fin.getline(str, количество символов, которые нужно считать) - это неудобный метод.
			// fin >> str; // Считывает строку до первого пробела.
			cout << str << endl;
		}

		cout << endl;

		char ch;
		while (fin.get(ch)) {
			cout << ch;
		}

		cout << endl;
	}

	fin.close();

	cout << endl;
	return 0;
}