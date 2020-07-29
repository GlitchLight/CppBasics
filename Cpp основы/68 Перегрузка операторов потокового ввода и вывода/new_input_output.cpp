#include <iostream>
#include <string>

using namespace std;

class Point {
public:
	int x = 1;
	int y = 2;
	int z = 3;
	/* ���� ����� �������� ������ � private �����, �� � ������ ����� ���������� ������������� �������

	*/
	friend ostream& operator<<(ostream& os, Point const& point);
	friend istream& operator>>(istream& is, Point& point);
};

//	OStream - output stream
ostream& operator<<(ostream& os, Point const& point) { // 1 �������� - cout ��� ������ ������ � ������� ����(fstream, ofstream) 2 �������� ������ ���� point

	os << point.x << ' ' << point.y << ' ' << point.z;
	return os;
}

// IStream - input stream
istream& operator>>(istream& is, Point& point) { // point �������������, ��������� ������ �� �������� � point. 1 �������� - (fstream, ifstream), 2 �������� - ������ ���� point
	is >> point.x >> point.y >> point.z;
	return is;
}

int main() {
	Point pnt;
	cout << pnt << endl; // ������ ����� �������� ������ ������
	cin >> pnt;
	cout << pnt;
	return 0;
}