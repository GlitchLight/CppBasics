#include <iostream>
#include <cstdlib>

int main() {
	int a = 0;
	while (a <= 15) {
		a++;
	}
	std::cout << a << std::endl;

	a = 0;
	do {
		a++;
	} while (a <= 15);
	std::cout << a << std::endl;

	system("pause");
	return 0;
}
