#include <iostream>
using namespace std;

/* Можно навести мышку на MIN и увидеть, какое значение за ним закреплено. По умолчанию, это 1, 2, 3... но можно задать свои значения, чтобы отслеживать состояния.
enum Speed{
	MIN = 150,
	RECCOMEND = 600,
	MAX = 800;
};
*/

class PC {
public:

	enum PCState {
		OFF,
		ON,
		SLEEP
	};

	PCState const& GetState() {
		return pcstate;
	}

	void SetState(PCState const& pcstate) {
		this->pcstate = pcstate;
	}

private:
	PCState pcstate;
};

int main() {
	setlocale(LC_ALL, "ru");
	PC pc;
	pc.SetState(PC::SLEEP); // Если определить PCState вне класса PC, можно писать просто ON;

	switch (pc.GetState())
	{
		// Если бы у нас был не перечисляемый тип, тогда пришлось бы писать в case 1, 2 и 3. Сторонний программист не понимал бы, что означают эти цифры.
	case PC::PCState::OFF: // Если определить PCState вне класса PC, можно писать просто PCState::OFF;
		cout << "Выключен" << endl;
		break;
	case PC::PCState::ON: // Если определить PCState вне класса PC, можно писать просто PCState::ON;
		cout << "Включен" << endl;
		break;
	case PC::PCState::SLEEP: // Если определить PCState вне класса PC, можно писать просто PCState::SLEEP;
		cout << "Спит" << endl;
		break;
	default:
		break;
	}

	return 0;
}