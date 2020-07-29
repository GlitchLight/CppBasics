#include <iostream>
using namespace std;

class MyException : public exception {
public:
	MyException(char const* msg, int DataState) :exception(msg) {
		this->DataState = DataState;
	}

	int GetDataState() {
		return DataState;
	}

private:
	int DataState;
};

void prnt(int i) {
	if (i < 0) {
		throw "Число i < 0"; // Выбрасывается массив типа char, но можно выбросить int и другой тип данных.
	}

	else if (i == 0) {
		throw MyException("Число i = 0", i); //Можно закомментить первую строку.
	}

	cout << "Переменная i = " << i << endl;
}

int main() {
	setlocale(LC_ALL, "ru");
	try
	{
		prnt(0);
	}
	catch (MyException& ex) { // Второй catch нужен в том случае, если неизвестен тип исключения, который мы ловим
		// Можно использовать exception & ex вместо MyException & ex
		cout << "Поймано исключение: " << ex.what() << endl;
		cout << "Число, на котором пошло что-то не так: " << ex.GetDataState() << endl;
	}
	catch (exception& ex) { // Компилятор воспринимает эту запись точно так же, как предыдущий catch, поскольку MyException - это наследник класса Exception
		// Поэтому более общий случай exception должен быть после частного MyException
		cout << "Поймано исключение: " << ex.what() << endl;
	}

	//	Из-за того, что тип выбрасываемого исключения может быть любой, лучше использовать exception, как стандарт

	return 0;
}