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

	/* ѕо идее, можно перегружать operator, возвраща€ void, но в c++ есть такой синтаксис
		a = b = c
		—начала b присваиваетс€ c, потом a присваиваетс€ b;
		≈сли бы b = c возвращал void, тогда a не могло бы присвоить значение void, поскольку €вл€етс€ переменной другого типа

		ј вот если b = c возвращает ссылку на объект b, тогда b = c - это всЄ равно что b
	*/
	dinamic_array& operator=(dinamic_array const& other) { //a = b - это то же самое, что a.operator=(b) дл€ всех типов данных.
		if (this->data != other.data) {
			delete[] data; //ќператор присваивани€ примен€етс€ тогда, когда объект a уже создан. Ќаш конструктор построен таким образом, что поле data заполнено на момент
			//вызова конструктора копировани€.

			int* data = new int[other.size];
			for (int i = 0; i < other.size; ++i) {
				data[i] = other.data[i];
			}

			this->size = other.size;
			this->data = data;
		}

		return *this;
	}

	~dinamic_array() { // деструктор нужен дл€ освобождени€ пам€ти, выделенной под массив, если его не определить, удалитс€ только значение адреса в data
		delete[] data;
		data = nullptr; // значение указател€ мен€етс€ только в текущем объекте. если существуют копии, то в них значение указател€ будет ненулевое
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
	ѕо умолчанию существует не только конструктор копировани€, но и оператор присваивани€.  ак и в случае неправильного конструктора копировани€,
	в arr2.data просто по€витс€ значение из arr.data, но пам€ть под новый массив не выделитс€.
	*/
	dinamic_array arr2 = arr; //“.к. arr2 при создании ничем не инициализирован, вызываетс€ конструктор копировани€, а не оператор присваивани€ это всЄ равно, что arr2(arr)

	dinamic_array arr3(13);
	arr3 = arr;

	cout << "¬ывод исходного массива: " << endl;
	for (int i = 0; i < 10; ++i) {
		cout << arr.data[i] << ' ';
	}

	cout << endl << endl;

	cout << "¬ывод скопированного массива: " << endl;
	for (int i = 0; i < 10; ++i) {
		cout << arr3.data[i] << ' ';
	}

	cout << endl;

	return 0;
}