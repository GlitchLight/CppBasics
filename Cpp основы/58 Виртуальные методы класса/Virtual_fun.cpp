#include <iostream>
using namespace std;

class weapon {
public:
	virtual void use() = 0; // � ������ ����� virtual void use() {}. ����������� ����� ����� ��� ����, ����� �� �� ������ � ������� ����������� ��������� ����������������.
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
		����� player �� ����� ������������� �� ������ weapon.

		� ������ weapon ����� use ��������� ��� ������ �����������. ������ ����������� ����� ������ ����������� ���������������� � ������ ����������, ����� ����� ����� ������������ � ����������
		����� �������� ������. ������ ����������� ����� �� �����, ��� �� ����������. ��� ���� ��� ������ ������ ��������� ������������ ��� � �����������.

		��������� ����� �� ����� ���� ����������� ������ ������, ��������� � ������ ������ ������ ��������. ���� �� ����� �� ��� ������ �����������, �� player ��� �� �� ���� ��������������, � ��� ��������
		�� ������ ���������.

		��� �� �����, � ������ player ����� ���������� ���� ����� use.
	*/
public:
	void use(weapon* const wpn) {
		wpn->use();
	}

	/* ���� �� �� �� ������������� ����������� �����, ����� ��� �� �������� ������������� ���������� ��� ������� ������ use
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
	��������, ����� weapon ������������� � � ��� �������� �������� ���� char. � ������ ��� ����� ��������� ��� []

	���� ���� ����� ��������� submachinegun, � ������� �������� ��� int. � ������, ��������� smg ����� ��������� ��� []	[][][][], ��������� �� ������ ��� ������ ���� char, ��� � ������ ���� int;
	��� ��� ���� ����� ����� ���������� weapon : submachinegun, �� ���� ����� ����� �������� ��� ������� ������� ���� weapon, ��� � ������� ������� ���� submachinegun.

	c++ ��������� ������� ����� ���������� weapon : submachinegun ��� � ��������� �� ��� submachinegun, ��� � � ��������� �� ��� weapon;

	submachinegun smg;
	weapon * p_weapon = &smg;
	submachinegun * p_submachinegun = &smg;

	��� �������� ��������� �� ��� submachinegun �� ��� ������� ������ ���������� ��� � ����� ���� submachinegun, ��� � � ����� �������� (weapon).

	�� ����, ���� ������� ��������� �� ��� weapon, �� ��� ��������� � ����� ������� smg, ����� ���������� ������ � ����� ������ weapon, ��������� ��� weapon ��� �������� ������ �� ����� ��� �����
	�����������. ��� �� �����, ���� ������ ������ weapon �����������, �� ����� ��������� p_weapon, ����� ���������� ��� ����� ������ submachinegun, ��� � � ����� �������� (weapon).

	*/
	weapon* p_smg = &smg;

	player player1;
	player1.use(p_smg);



	return 0;
}