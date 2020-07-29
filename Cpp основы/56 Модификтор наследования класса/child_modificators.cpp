#include <iostream>
#include <string>
using namespace std;

// https://www.youtube.com/watch?v=6udKffus77A&list=PLQOaTSbfxUtCrKs0nicOg2npJQYSPGO9r&index=115

class messages { // ������ ����� messages ����� ���������� � ����������� private �����
public:
	string const pub = "public";
protected:
	string const prot = "protected";
private:
	string const priv = "private";
};

class access : public messages { //�� ���������, ������ public ������������ ������������ private 
public:

	string get_pub() {
		return pub;	// ��� public ������������, ���� pub ������� public, ��� protected ���������� protected, ��� private ���������� private
	}

	string get_prot() {
		return prot; // ��� public � protected ������������, ���� prot ������� protected, ��� private ������������ ���������� private 
	}

	/*
	string get_priv() {
		return priv; // ��� ����� ������������ ���� priv ��������� private
	}
	*/
};

int main() {
	access obj;

	cout << obj.get_pub() << endl;
	cout << obj.get_prot() << endl;
	cout << obj.pub << endl; // ����� ���������� � ����� ���� �������� ������ ����� public ������������
}