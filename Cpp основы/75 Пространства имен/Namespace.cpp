#include <iostream>
using namespace std;

/* Когда программисты работают отдельно друг от друга, их фукнкции могут называться одинаково. Чтобы избежать такой проблемы, используются пространства имен. Одним из таких пространств является
стандартное пространство имен std*/
namespace NamespaceOne {
	void fun(int const& a, int const& b) {
		cout << a + b << endl;
	}
}

namespace NamespaceOne { // Можно в существующее пространство имен добавлять другие функции.
	void fun2(int const& a, int const& b) {
		cout << a - b << endl;
	}
}

namespace NamespaceTwo {
	void fun(int const& a, int const& b) {
		cout << a * b << endl;
	}


	namespace NamespaceOne { // Можно вложить одно пространство имен в другое. Так можно определять функции с одним и тем же именем.
		void fun(int const& a, int const& b) {
			cout << a * b << endl;
		}
	}
}

// using namespace NamespaceOne; Можно использовать пространство имен NamespaceOne, но нужно следить за тем, что бы не было конфликтов.

int main() {
	int a = 13, b = 13;
	NamespaceOne::fun(a, b);
	NamespaceOne::fun2(a, b);

	NamespaceTwo::fun(a, b);
	NamespaceTwo::NamespaceOne::fun(a, b);

	return 0;
}