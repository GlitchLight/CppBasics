#include <iostream> // include - ������� �������������: ����� ���, � ����� �������� ��� � ��������� ����� �����������.
#define PI 3.14 // ��� ������ ��������� � ���� PI, ������������ 3.14;
#define tab "\t"
#define begin { // ����� ��� �� ������, �.�. ��� ����� ����� ���� ������ ��������.
#define end }
using namespace std;

int main() {
	cout << PI << tab << PI << endl;

	for (int i = 0; i < 13; ++i)
		begin
		cout << (i + 1) << ' ';
	end

		cout << endl;
	return 0;
}