#include <iostream>
#include <string>
using namespace std;

/*Допустим, есть функции, которые должны написать коллеги с неизвестной реализацией. Чтобы не гадать о том, какая
именно она будет, можно в нашу функцию передать указатель на функцию коллеги.*/

string GetDataFromBD() {
	return "DataFromBD";
}

string GetDataFromWeb() {
	return "DataFromWeb";
}

void CoutData(string(*Fun_Pointer)()) {
	cout << Fun_Pointer() << endl;
}

int main() {
	CoutData(GetDataFromWeb);
}