#include <iostream>
using namespace std;

class MyException : public exception {
public:
	MyException(char const* msg, int DataState) :exception(msg) {
		this->DataState = DataState;
	}

	int GetDataState() {
		return DataState;
	}

private:
	int DataState;
};

void prnt(int i) {
	if (i < 0) {
		throw "����� i < 0"; // ������������� ������ ���� char, �� ����� ��������� int � ������ ��� ������.
	}

	else if (i == 0) {
		throw MyException("����� i = 0", i); //����� ������������ ������ ������.
	}

	cout << "���������� i = " << i << endl;
}

int main() {
	setlocale(LC_ALL, "ru");
	try
	{
		prnt(0);
	}
	catch (MyException& ex) { // ������ catch ����� � ��� ������, ���� ���������� ��� ����������, ������� �� �����
		// ����� ������������ exception & ex ������ MyException & ex
		cout << "������� ����������: " << ex.what() << endl;
		cout << "�����, �� ������� ����� ���-�� �� ���: " << ex.GetDataState() << endl;
	}
	catch (exception& ex) { // ���������� ������������ ��� ������ ����� ��� ��, ��� ���������� catch, ��������� MyException - ��� ��������� ������ Exception
		// ������� ����� ����� ������ exception ������ ���� ����� �������� MyException
		cout << "������� ����������: " << ex.what() << endl;
	}

	//	��-�� ����, ��� ��� �������������� ���������� ����� ���� �����, ����� ������������ exception, ��� ��������

	return 0;
}