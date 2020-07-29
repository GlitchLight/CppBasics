#include <iostream>
#include <string>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	char str1[255] = "HELL ";
	char str2[255] = "IS THERE";
	cout << "Склеивание строк в C стиле: \n";
	cout << "str1:\t" << str1 << endl;
	cout << "str2:\t" << str2 << endl;
	strcat_s(str1, str2);
	cout << "str1 + str2:\t" << str1 << endl;

	cout << "Склеивание строк в C++ стиле: \n";
	string str_string1 = "HELL ";
	string str_string2 = "IS THERE";
	cout << "str 1:\t" << str_string1 << "\nstr 2:\t" << str_string2 << endl;
	cout << "str 1 + str 2:\t" << str_string1 + str_string2 << endl;
	return 0;
}