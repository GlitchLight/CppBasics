#include <iostream>
#include <ctime>

#include <array> // ����������� ������
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	srand(time(NULL));

	int const SIZE = 7;
	array <int, SIZE> arr{};
	cout << arr.at(0) << endl;
	// arr.front(), arr.back() ������ � ������� � ���������� ��������
	arr.fill(rand() % 100); // ��������� ������ ��������� ������
	for (int el : arr) {
		cout << el << ' ';
	}
	cout << endl;

	return 0;
}