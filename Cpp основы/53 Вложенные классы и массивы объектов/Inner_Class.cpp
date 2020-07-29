#include <iostream>
#include <string>
using namespace std;

class image {
public:
	/* Конструктор не может изменить константное поле
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
	static int const SIZE = 5; // Если сделать это поле неконстантным, то его можно задать в конструкторе, однако нельзя использовать для создания массива объектов pixel
	// Чтобы задать массив объектов pixel, необходимо сделать это поле константным

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
		pixel img[this->SIZE] мы не можем указать в квадратных скобках this->SIZE или просто SIZE. Похоже, что SIZE ищется не в объекте image, а в объекте pixel, поэтому
		если объявить (не)переменную SIZE как static, каждое поле класса image получит доступ к SIZE, а значит и поле pixel img, принадлежащее этому же классу image тоже.
		Помимо этого компилятор требует константный SIZE;

		Таким образом, поле size должно быть статическим и константным.
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