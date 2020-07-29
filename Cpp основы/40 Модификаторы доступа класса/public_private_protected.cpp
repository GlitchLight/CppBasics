#include <iostream>
using namespace std;

class modificators {
public:
	modificators() : PUBLIC("public"), PROTECTED("protected"), PRIVATE("private") {};
	void print() {
		cout << PUBLIC << '\n' << PROTECTED << '\n' << PRIVATE << endl;
	}

	string const PUBLIC;
protected:
	string const PROTECTED;
private:
	string const PRIVATE;
};

int main() {
	setlocale(LC_ALL, "ru");
	modificators mod;
	cout << mod.PUBLIC << endl << endl;

	/*   данным пол€м (атрибутам) класса нельз€ получить доступ. Ёто и есть инкапсул€ци€.
	cout << mod.PROTECTED << endl;
	cout << mod.PRIVATE << endl;

	“ем не менее, если определить public метод, который работает с protected и private данными, то он может спокойно обращатьс€ к любым пол€м в собственном классе.
	*/

	cout << "–езультат работы публичного метода public" << endl;
	mod.print();

	return 0;
}