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
		cout << "Берем зонт"<<endl;
	} else {
		cout << "Не берем зонт" << endl;
	}
	
	int n;
	cout << "Введите число n: ";
	cin >> n;
	cout << endl;
	if (n > 5){
		cout << "Число n больше 5" << endl;
	} else if (n == 5) {
		cout << "Число n равно 5" << endl;
	} else {
		cout << "Число n меньше 5" << endl;
	}
	
	if (n % 2 == 0){
		cout << n << " - четное" << endl;
	}else{
		cout << n << " - нечетное" << endl;		
	}
	
	system("pause");
	return 0;
}
