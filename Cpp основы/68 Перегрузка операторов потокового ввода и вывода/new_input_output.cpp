#include <iostream>
#include <string>

using namespace std;

class Point {
public:
	int x = 1;
	int y = 2;
	int z = 3;
	/* Если нужно получать доступ к private полям, то в классе можно определить дружественные функции

	*/
	friend ostream& operator<<(ostream& os, Point const& point);
	friend istream& operator>>(istream& is, Point& point);
};

//	OStream - output stream
ostream& operator<<(ostream& os, Point const& point) { // 1 параметр - cout или объект работы с файлами типа(fstream, ofstream) 2 параметр объект типа point

	os << point.x << ' ' << point.y << ' ' << point.z;
	return os;
}

// IStream - input stream
istream& operator>>(istream& is, Point& point) { // point неконстантный, поскольку данные мы помещаем в point. 1 параметр - (fstream, ifstream), 2 параметр - объект типа point
	is >> point.x >> point.y >> point.z;
	return is;
}

int main() {
	Point pnt;
	cout << pnt << endl; // Теперь можно выводить объект класса
	cin >> pnt;
	cout << pnt;
	return 0;
}