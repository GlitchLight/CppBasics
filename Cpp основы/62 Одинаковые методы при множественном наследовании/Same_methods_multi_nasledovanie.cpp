#include <iostream>
using namespace std;

class car {
public:
	void use() {
		cout << "я еду" << endl;
	}
};

class flying {
public:
	void use() {
		cout << "я лечу" << endl;
	}
};

class flying_car : public car, public flying {
public:
	int const field = 1;
};

int main() {
	setlocale(LC_ALL, "ru");
	flying_car fl_cr;
	// fl_cr.use(); и в car и flying есть метод use(). Flying_car наследуетс€ и от car и от flying.  омпил€тор не сможет определить, какой из методов use() использовать.
	// „тобы разрешить такой конфликт можно использовать приведение типов. ≈сли flying_car 
	((car)fl_cr).use();
	// ѕри приведении типов мы не сможем обращатьс€ к пол€м класса flying_car ((car)fl_cr).field;
	((flying)fl_cr).use();

	// ѕоэтому можно не приводить типы, а обращатьс€ к методам через пространства имен наследников
	fl_cr.car::use();
	fl_cr.flying::use();

	return 0;
}