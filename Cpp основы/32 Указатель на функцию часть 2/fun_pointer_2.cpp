#include <iostream>
#include <string>
using namespace std;

/*��������, ���� �������, ������� ������ �������� ������� � ����������� �����������. ����� �� ������ � ���, �����
������ ��� �����, ����� � ���� ������� �������� ��������� �� ������� �������.*/

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