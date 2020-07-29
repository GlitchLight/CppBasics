#include <iostream>
#include <string>
using namespace std;

// https://www.youtube.com/watch?v=6udKffus77A&list=PLQOaTSbfxUtCrKs0nicOg2npJQYSPGO9r&index=115

class messages { // Только класс messages может обращаться к собственным private полям
public:
	string const pub = "public";
protected:
	string const prot = "protected";
private:
	string const priv = "private";
};

class access : public messages { //По умолчанию, вместо public наследования используется private 
public:

	string get_pub() {
		return pub;	// При public наследовании, поле pub остаётся public, при protected становится protected, при private становится private
	}

	string get_prot() {
		return prot; // При public и protected наследовании, поле prot остаётся protected, при private наследовании становится private 
	}

	/*
	string get_priv() {
		return priv; // При любом наследовании поле priv останется private
	}
	*/
};

int main() {
	access obj;

	cout << obj.get_pub() << endl;
	cout << obj.get_prot() << endl;
	cout << obj.pub << endl; // Можно обратиться к этому полю напрямую только через public наследование
}