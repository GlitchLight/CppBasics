#include <iostream>
#include <string>
using namespace std;

// „еловеку присущи такие параметры как рост и вес.

class Human {
public:
	Human(string const& name = "NoName", int const& height = 0, int const& weight = 0) : name(name), height(height), weight() {}
	string name;
	int height;
	int weight;
};

//  лассу студенты присущи те же параметры, что и человеку. “ем не менее, у студентов есть еще и номер группы

class Student : public Human { // ѕри public наследовании класс Student получает доступ ко всем public пол€м класса Human
public:
	Student(string const& name, int const& height, int const& weight, int const& group) { // Ќапример, можно вызвать конструктор класса Human и любой другой метод
		this->Human::Human(name, height, weight);
		this->group = group; // ” наследника есть уникальное поле group, которое нужно инициализировать
	}

	int group;
};

int main() {
	setlocale(LC_ALL, "ru");
	Student stud("Igor", 185, 80, 3326);
	cout << stud.group << endl;


	return 0;
}