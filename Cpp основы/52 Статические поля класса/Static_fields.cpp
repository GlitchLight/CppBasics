#include <iostream>
using namespace std;

// Статический метод - это метод, который может работать без привязки к определенному объекту.

class counter {
public:

	counter() {
		count++;
		id = count;
	}

	int get_id() {
		return id;
	}

	static int get_count() { //Если объявить метод как статический, то он может работать только со статическими объектами класса, в котором он был объявлен. В нашем случае, count.
		// К тому же, можно вызвать этот метод не как obj1.get_count(), а как counter::get_count(), то есть у этого метода нет привязки к объекту
		return count;
	}

	//Несмотря на то, что статические методы могут обращаться только к static полям класса, можно обращаться к полям объекта, если передать объект в качестве параметра функции
	static void change_id(counter& obj, int new_value) {
		obj.id = new_value;
	}

private:
	static int count;
	int id;
};

int counter::count = 0; //Внутри класса переменная не определяется

int main() {
	setlocale(LC_ALL, "ru");
	counter obj1;
	counter obj2;
	counter obj3;
	counter obj4;
	counter obj5;

	// Каждый раз при создании объекта класса counter, поле класса count увеличивается на 1 ДЛЯ ВСЕХ ОБЪЕКТОВ этого класса.
	cout << "Поле count у каждого объекта класса" << endl;
	cout << obj1.get_count() << ' ' << obj2.get_count() << ' ' << obj3.get_count() << ' ' << obj4.get_count() << ' ' << obj5.get_count() << endl << endl;

	// В отличии от count, id должен получиться различным
	cout << "Поле id у каждого объекта класса" << endl;
	cout << obj1.get_id() << ' ' << obj2.get_id() << ' ' << obj3.get_id() << ' ' << obj4.get_id() << ' ' << obj5.get_id() << endl;

	//Статические поля (в данном случае, методы) класса позволяют обращаться к полям класса без указания объекта. Например, obj1.get_count();
	counter::get_count();
	counter::change_id(obj5, 13);
	cout << "Поменяем id 5 объекта на 13: " << endl;
	cout << obj5.get_id() << endl;
}