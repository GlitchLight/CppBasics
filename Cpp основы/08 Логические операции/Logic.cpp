#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	setlocale(LC_ALL,"rus");
	int a = 3, b = 3;
	cout << true<<endl;
	cout << false<<endl;
	cout << (a == b)  << endl;
	cout << (a > b) << endl;
	cout << ((a == 3) && (a == b)) << endl;
	
	bool isRain = true;
	if (isRain){
		cout << "����� ����"<<endl;
	} else {
		cout << "�� ����� ����" << endl;
	}
	
	int n;
	cout << "������� ����� n: ";
	cin >> n;
	cout << endl;
	if (n > 5){
		cout << "����� n ������ 5" << endl;
	} else if (n == 5) {
		cout << "����� n ����� 5" << endl;
	} else {
		cout << "����� n ������ 5" << endl;
	}
	
	if (n % 2 == 0){
		cout << n << " - ������" << endl;
	}else{
		cout << n << " - ��������" << endl;		
	}
	
	system("pause");
	return 0;
}
