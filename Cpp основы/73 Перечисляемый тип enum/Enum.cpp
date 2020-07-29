#include <iostream>
using namespace std;

/* ����� ������� ����� �� MIN � �������, ����� �������� �� ��� ����������. �� ���������, ��� 1, 2, 3... �� ����� ������ ���� ��������, ����� ����������� ���������.
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
	pc.SetState(PC::SLEEP); // ���� ���������� PCState ��� ������ PC, ����� ������ ������ ON;

	switch (pc.GetState())
	{
		// ���� �� � ��� ��� �� ������������� ���, ����� �������� �� ������ � case 1, 2 � 3. ��������� ����������� �� ������� ��, ��� �������� ��� �����.
	case PC::PCState::OFF: // ���� ���������� PCState ��� ������ PC, ����� ������ ������ PCState::OFF;
		cout << "��������" << endl;
		break;
	case PC::PCState::ON: // ���� ���������� PCState ��� ������ PC, ����� ������ ������ PCState::ON;
		cout << "�������" << endl;
		break;
	case PC::PCState::SLEEP: // ���� ���������� PCState ��� ������ PC, ����� ������ ������ PCState::SLEEP;
		cout << "����" << endl;
		break;
	default:
		break;
	}

	return 0;
}