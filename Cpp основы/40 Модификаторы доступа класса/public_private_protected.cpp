#include <iostream>
using namespace std;

class modificators {
public:
	modificators() : PUBLIC("public"), PROTECTED("protected"), PRIVATE("private") {};
	void print() {
		cout << PUBLIC << '\n' << PROTECTED << '\n' << PRIVATE << endl;
	}

	string const PUBLIC;
protected:
	string const PROTECTED;
private:
	string const PRIVATE;
};

int main() {
	setlocale(LC_ALL, "ru");
	modificators mod;
	cout << mod.PUBLIC << endl << endl;

	/* � ������ ����� (���������) ������ ������ �������� ������. ��� � ���� ������������.
	cout << mod.PROTECTED << endl;
	cout << mod.PRIVATE << endl;

	��� �� �����, ���� ���������� public �����, ������� �������� � protected � private �������, �� �� ����� �������� ���������� � ����� ����� � ����������� ������.
	*/

	cout << "��������� ������ ���������� ������ public" << endl;
	mod.print();

	return 0;
}