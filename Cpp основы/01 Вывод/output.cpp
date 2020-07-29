# include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian"); // вывод русских символов через coub в консоль
	cout << "ѕривет" << '\n';

	for (int i = -255; i < 255; i++) { // вывод всех возможных букв в диапазоне от -255 до 255 (мен€етс€ при отключении setlocale)
		cout << char(i);
	}
	cout << '\n';
	return 0;
}