#include <iostream>
using namespace std;

class weapon {
public:
	virtual void use() = 0; // В теории можно virtual void use() {}. Виртуальный метод нужен для того, чтобы те же методы в классах наследниках корректно переопределялись.
};

class knife :public weapon {
public:
	void use() override {
		cout << "Stab" << endl;
	}
};

class gun :public weapon {
public:
	void use() override {
		cout << "Bang!" << endl;
	}
};

class submachinegun :public weapon {
public:
	void use() override {
		cout << "Tratatatata!" << endl;
	}
};

class bazooka :public weapon {
public:
	void use() override {
		cout << "EXPLOSION!!!" << endl;
	}
};

class player {
	/*
		Класс player не может наследоваться от класса weapon.

		В классе weapon метод use определен как чистый виртуальный. Чистый виртуальный метод должен обязательно переопределяться в классе наследнике, иначе можно будет использовать в наследнике
		метод базового класса. Чистый виртуальный метод всё равно, что не существует. Сам факт его записи просто обязывает переопредять его в наследниках.

		Логически игрок не может быть наследником класса оружия, поскольку у игрока совсем другие свойства. Если бы метод не был Чистым виртуальным, то player мог бы от него унаследоваться, а это нарушило
		бы логику программы.

		Тем не менее, в классе player можно определить свой метод use.
	*/
public:
	void use(weapon* const wpn) {
		wpn->use();
	}

	/* Если бы мы не реализовывали виртуальный метод, тогда нам бы пришлось реализовывать перегрузки для каждого метода use
	void use(knife & knf) {
		knf->use();
	}

	void use(gun & gn) {
		gn->use();
	}

	void use(submachinegun & smg) {
		smg->use();
	}

	void use(bazooka & bzk){
		bzk->use();
	}
*/

};


int main() {
	submachinegun smg;

	/*
	Допустим, класс weapon неабстрактный и в нем хранится значение типа char. В памяти оно будет выглядеть так []

	Если есть класс наследник submachinegun, в котором хранится тип int. В памяти, наследник smg будет выглядеть так []	[][][][], поскольку он хранит как объект типа char, так и объект типа int;
	Так вот если взять адрес наследника weapon : submachinegun, то этот адрес будет являться как началом объекта типа weapon, так и началом объекта типа submachinegun.

	c++ позволяет хранить адрес наследника weapon : submachinegun как в указателе на тип submachinegun, так и в указателе на тип weapon;

	submachinegun smg;
	weapon * p_weapon = &smg;
	submachinegun * p_submachinegun = &smg;

	При создании указателя на тип submachinegun мы без проблем сможем обращаться как к полям типа submachinegun, так и к полям родителя (weapon).

	По идее, если создать указатель на тип weapon, то при обращении к полям объекта smg, можно обращаться только к полям класса weapon, поскольку что weapon как родитель ничего не знает про своих
	наследников. Тем не менее, если методы класса weapon виртуальные, то через указатель p_weapon, можно обращаться как полям класса submachinegun, так и к полям родителя (weapon).

	*/
	weapon* p_smg = &smg;

	player player1;
	player1.use(p_smg);



	return 0;
}