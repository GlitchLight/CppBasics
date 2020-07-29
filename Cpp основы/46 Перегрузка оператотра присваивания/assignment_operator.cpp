#include <iostream>
#include <ctime>
using namespace std;

class dinamic_array {
public:
	dinamic_array(int size) {
		int* data = new int[size];
		for (int i = 0; i < size; ++i) {
			data[i] = rand();
		}

		this->size = size;
		this->data = data;
	}

	dinamic_array(dinamic_array const& other) {
		int* data = new int[other.size];
		for (int i = 0; i < other.size; ++i) {
			data[i] = other.data[i];
		}

		this->size = other.size;
		this->data = data;
	}

	/* �� ����, ����� ����������� operator, ��������� void, �� � c++ ���� ����� ���������
		a = b = c
		������� b ������������� c, ����� a ������������� b;
		���� �� b = c ��������� void, ����� a �� ����� �� ��������� �������� void, ��������� �������� ���������� ������� ����

		� ��� ���� b = c ���������� ������ �� ������ b, ����� b = c - ��� �� ����� ��� b
	*/
	dinamic_array& operator=(dinamic_array const& other) { //a = b - ��� �� �� �����, ��� a.operator=(b) ��� ���� ����� ������.
		if (this->data != other.data) {
			delete[] data; //�������� ������������ ����������� �����, ����� ������ a ��� ������. ��� ����������� �������� ����� �������, ��� ���� data ��������� �� ������
			//������ ������������ �����������.

			int* data = new int[other.size];
			for (int i = 0; i < other.size; ++i) {
				data[i] = other.data[i];
			}

			this->size = other.size;
			this->data = data;
		}

		return *this;
	}

	~dinamic_array() { // ���������� ����� ��� ������������ ������, ���������� ��� ������, ���� ��� �� ����������, �������� ������ �������� ������ � data
		delete[] data;
		data = nullptr; // �������� ��������� �������� ������ � ������� �������. ���� ���������� �����, �� � ��� �������� ��������� ����� ���������
	}

	int size;
	int* data;
};

int main() {
	setlocale(LC_ALL, "ru");
	srand(time(NULL));

	int size = 10;
	dinamic_array arr(size);
	/*
	dinamic_array arr2;
	arr2 = arr;
	�� ��������� ���������� �� ������ ����������� �����������, �� � �������� ������������. ��� � � ������ ������������� ������������ �����������,
	� arr2.data ������ �������� �������� �� arr.data, �� ������ ��� ����� ������ �� ���������.
	*/
	dinamic_array arr2 = arr; //�.�. arr2 ��� �������� ����� �� ���������������, ���������� ����������� �����������, � �� �������� ������������ ��� �� �����, ��� arr2(arr)

	dinamic_array arr3(13);
	arr3 = arr;

	cout << "����� ��������� �������: " << endl;
	for (int i = 0; i < 10; ++i) {
		cout << arr.data[i] << ' ';
	}

	cout << endl << endl;

	cout << "����� �������������� �������: " << endl;
	for (int i = 0; i < 10; ++i) {
		cout << arr3.data[i] << ' ';
	}

	cout << endl;

	return 0;
}