#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	string path = "fstream.tx";

	ifstream fin;
	fin.exceptions(ifstream::badbit | ifstream::failbit); // Без этой строчки исключения обрабатываются некорректно

	try
	{
		cout << "Попытка открыть файл!" << endl;
		fin.open(path);
		cout << "Файл успешно открыт" << endl;
	}
	catch (const ifstream::failure& ex)
	{
		cout << ex.what() << endl;
		cout << ex.code() << endl;
		cout << "Ошибка открытия файла!" << endl;
	}

	return 0;
}