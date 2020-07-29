#include <iostream>
#include <string>
using namespace std;

class image {
public:
	/* ����������� �� ����� �������� ����������� ����
	image(int const & SIZE){
		this->size = SIZE;
	}
	*/

	string str() {
		string temp = "";
		for (int i = 0; i < SIZE; ++i) {
			temp += to_string(this->img[i].r) + ' ' + to_string(this->img[i].g) + ' ' + to_string(this->img[i].b) + '\n';
		}

		return temp;
	}

private:
	static int const SIZE = 5; // ���� ������� ��� ���� �������������, �� ��� ����� ������ � ������������, ������ ������ ������������ ��� �������� ������� �������� pixel
	// ����� ������ ������ �������� pixel, ���������� ������� ��� ���� �����������

	class pixel {
	public:
		pixel(int r, int g, int b) : r(r), g(g), b(b) {}
	private:
		int r;
		int g;
		int b;

		friend string image::str();
	};

	pixel img[SIZE]{ /*
		pixel img[this->SIZE] �� �� ����� ������� � ���������� ������� this->SIZE ��� ������ SIZE. ������, ��� SIZE ������ �� � ������� image, � � ������� pixel, �������
		���� �������� (��)���������� SIZE ��� static, ������ ���� ������ image ������� ������ � SIZE, � ������ � ���� pixel img, ������������� ����� �� ������ image ����.
		������ ����� ���������� ������� ����������� SIZE;

		����� �������, ���� size ������ ���� ����������� � �����������.
		*/
		pixel(1, 1, 1),
		pixel(2, 2, 2),
		pixel(3, 3, 3),
		pixel(4, 4, 4),
		pixel(5, 5, 5)
	};

};

int main() {
	image img;
	cout << img.str();

	return 0;
}