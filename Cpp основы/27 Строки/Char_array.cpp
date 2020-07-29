#include <iostream>
#include <string>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	char str[10];
	str[0] = 'L';
	str[1] = 'O';
	str[2] = 'H';
	str[3] = '\0';
	for (int i = 0; i < 4; ++i) {
		cout << str[i] << endl;
	}

	string str_string = "String Library";
	cout << str_string << endl;

	char str_multichar[] = "Multichar String";
	cout << str_multichar << endl;

	return 0;
}