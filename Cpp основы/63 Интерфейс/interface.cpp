#include <iostream>
using namespace std;

/* На велосипеде можно крутить педали и ехать. Велосипеды бывают разные, но во всех есть реализация этих методов. Интерфейс позволяет сделать своего рода меню.
*/
class IBycicle { //Интерфейс I
public:
	void virtual TwistTheWheel() = 0;
	void virtual Ride() = 0;
};

class SimpleBycicle : public IBycicle {
	void TwistTheWheel() override {
		cout << "На простом велосипеде" << endl;
	}
	void Ride() override {
		cout << "На простом велосипеде" << endl;
	}
};

class PomoykaBycicle : public IBycicle {
	void TwistTheWheel() override {
		cout << "На велосипеде из говна и палок" << endl;
	}
	void Ride() override {
		cout << "На велосипеде из говна и палок" << endl;
	}
};

class Human {
public:
	void RideOn(IBycicle& bycicle) { // При помощи интерфейса можно поместить вместо bycicle любого его наследника
		cout << "Крутим руль" << endl;
		bycicle.TwistTheWheel();
		cout << "Едем" << endl;
		bycicle.Ride();
	}
};

int main() {
	setlocale(LC_ALL, "ru");
	SimpleBycicle sb;
	PomoykaBycicle pb;

	Human Igor;
	Igor.RideOn(pb);

	return 0;
}