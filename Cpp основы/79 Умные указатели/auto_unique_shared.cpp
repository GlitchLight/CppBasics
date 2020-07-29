#include <iostream>
#include <string>
#include <memory>
using namespace std;

template <typename T>
class SmartPointer {
public:
	SmartPointer(T* ptr) {
		this->ptr = ptr;
	}

	~SmartPointer() {
		delete ptr;
	}

	T& operator*() {
		return *ptr;
	}

private:
	T* ptr;
};

int main() {
	setlocale(LC_ALL, "ru");

	SmartPointer <int> ptr = new int(13);
	/* SmartPointer <int> ptr_2 = ptr; У обычного SmartPointer есть проблема. Если создать другой указатель, в который записывается значение из предыдущей строчки, то деструктор вызовется 2 раза
	для одной и той же области памяти, но ее нельзя освободить 2 раза*/

	auto_ptr <int> ptr (new int(14));

	return 0;
}