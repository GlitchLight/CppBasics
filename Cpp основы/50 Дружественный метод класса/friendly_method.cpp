#include <iostream>
#include <string>
using namespace std;

class Apple; // Поскольку сначала объявлен Print, ему нужно получить доступ к Apple. Он определен после Print, поэтому сделаем шаблон Apple;

//Если объявить класс Print здесь, то он не сможет получить доступ к полям класса Apple, поскольку тот еще не был объявлен.
class Print {
public:
	Print(Apple const& obj); // Но даже так, класс Apple хоть и объявлен, но не определен, поэтому сделаем прототип конструктора Print и вынесем определение после класса Apple
};


class Apple {
public:
	Apple(int const& weight, string const& name) {
		this->weight = weight;
		this->name = name;
	}

private:
	int weight;
	string name;

	friend Print::Print(Apple const& obj);
};

Print::Print(Apple const& obj) { // Это определение конструктора (или любого другого метода) класса Print
	cout << obj.weight << ' ' << obj.name << endl;
}

/* Если объявить класс Print здесь, тогда Apple не сможет сделать дружественным конструктор(метод) класса Print, если только не сделать прототип класса в начале.
class Print {
public:
	Print(Apple const& obj) {
		cout << obj.weight << ' ' << obj.name;
	}
};
*/

int main() {
	Apple obj(13, "Australian");
	Print prnt(obj);
}