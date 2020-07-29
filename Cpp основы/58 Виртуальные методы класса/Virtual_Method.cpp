#include <iostream>
using namespace std;

class parent {
public:
	virtual void vrt() {
		cout << "Здесь был невиртуальный метод класса parent" << endl;
	}
};

class child : public parent {
public:
	void vrt() {
		cout << "Здесь был невиртуальный метод класса child" << endl;
	}
};

int main() {
	setlocale(LC_ALL, "ru");
	parent par;
	child chil;

	parent* ptr_par = &par;
	child* ptr_chil = &chil;
	parent* ptr_par_chil = &chil; // Мы берем адрес наследника и записываем его в указатель на объект (переменную) типа parent;

	/*
	child* ptr_chil_par = &par; Мы не можем записать в указатель на наследника адрес объекта родителя, т.к. родитель ничего не знает о наследнике и наследник занимает больше места
	*/

	ptr_par->vrt();
	ptr_chil->vrt();
	ptr_par_chil->vrt(); // Если обратиться к методу non_vrt, то мы обратимся к методу того объекта, который соответствует типу ОБЪЕКТА, то есть child.

	return 0;
}