#include <iostream>
#include <string>
using namespace std;

/* Включение одного класса в другой - это агрегация или композиция. Агрегация позволяет использовать включенный класс и в других местах. Композиция не позволяет и делает внутренний класс только для
служебных целей. */

class KEPKA { // Кепка может существовать отдельно от человека, и висеть, к примеру на манекене. Это является примером агрегации.
public:
	string get_color(){
		return color;
	}

private:
	string color = "red";
};

class Human {
public:
	void think() { // Метод "думать" вызывает метод подкласса Brain "думать". Это называется делегирование и является одним из паттернов проектирования.
		brain.think();
	}

	void chek_the_KEPKA() {
		cout << "Я ношу кепку цвета: " << cap.get_color() << endl;
	}

private:
	class Brain { // Пример композиции, мозг не может существовать без человека.
	public:
		void think() {
			cout << "Я думаю" << endl;
		}
	};

	Brain brain;
	KEPKA cap;
};

int main() {
	setlocale(LC_ALL, "ru");
	Human human;
	human.think();
	human.chek_the_KEPKA();

	KEPKA kepka; //Мы спокойно можем создать объект класса kepka и обращаться к его полям.
	kepka.get_color();

	//Human::Brain test_brain; У нас нет доступа к классу Brain, и что бы с ним взаимодействовать, нужно сначала создать объект класса Human
}