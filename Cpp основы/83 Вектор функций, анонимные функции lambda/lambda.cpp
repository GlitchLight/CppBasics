// https://www.youtube.com/watch?v=m3WgGSVmNcs&list=PLQOaTSbfxUtCrKs0nicOg2npJQYSPGO9r&index=181
// https://www.youtube.com/watch?v=bP5GJN3-zIo&list=PLQOaTSbfxUtCrKs0nicOg2npJQYSPGO9r&index=179
#include <iostream>
#include <functional>
#include <ctime>
#include <vector>
using namespace std;

// ������� even_print, div_by_3 � div_by_13 ���������� ������������ ����. ��� ��� ����� ������ � ������� property printer
void even_print(int i) {
	if ((i % 2) == 0) {
		cout << "even |" << ' ';
	}
}

void div_by_3(int i) {
	if ((i % 3) == 0) {
		cout << "div_by_3 |" << ' ';
	}
}

void div_by_13(int i) {
	if ((i % 13) == 0) {
		cout << "div_by_13 |" << ' ';
	}
}

void property_printer(vector <int> vec, vector <function<void(int)>> arr_of_fun) { // ������ vector, ����� ������ ����������� ��������� ������� � ��� ������������, ������� ���� 3 ���������� �������.
	for (int el : vec) {
		cout << el << " | ";
		for (auto fun : arr_of_fun) {
			fun(el);
		}
		cout << endl;
	}
}

void anon_realiser(vector <int> vec, function<void(int)> fun) {
	for (int el : vec) {
		fun(el);
	}
}

int main() {
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	[]() {}; /* lambda ������� {} - ��� �������� ������, ������� ���������� ���� �������. () - ��� �����, � ������� ����������� ����������� �������� ���������. [] ��������� ������� �� �������� ����.
	��� ������������� �������� ������������ �������������*/

	vector <function<void(int)>> arr_of_fun{ even_print, div_by_3, div_by_13 }; // � ������� ����� ���� ����� �������, � ��� ����� � �������.
	vector <int> vec{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20 };
	property_printer(vec, arr_of_fun);

	function <void(int)> f;
	// f ��������� �� ��������� �������
	f = [](int a) { // ������� ���������� ��������� ������, ��� � ��� ��� �����. �.�. []. �� ������ ������ �������, �� ����� ��������� � ���������� � �������� � �������� ���������.
		cout << "������� ��������� ������� � ����������: " << a << endl;
	};

	anon_realiser(vec, [](int a) { cout << "������� ��������� ������� � ����������: " << a << endl; }); // ����� �� ����������� ��������� ������� ������� ������ �������, � ����� �������� � ����������.

	int p = 0;
	[&p]() { // ���� �� �������� ������ � [], �� �� ������ �� ������ ������� � �����������, ������� ��������� ��� �������, �� � [] ����� �������, � ������ �������� ����������� ��� ����� ��������
		p = 5;
	};

	auto funct = [&p]() {p = 5; }; // � 14 ��������� ����� ������� ���������� ���� �������, ������� ���������� ��� �������������. �� ����� ��������� ��������� �������.

	return 0;
}