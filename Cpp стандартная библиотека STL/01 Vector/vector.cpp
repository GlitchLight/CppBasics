#include <iostream>
#include <vector> // Вектор - это оптимизированный динамический массив с фичами
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");

	vector <int> MyVector; // vector <int> MyVector(32, 8) - создание вектора, размером 32, заполненного цифрами 8
	// Аналогично работает MyVector.resize(32). Этот метод работает как конструктор, и в данном случае заполняет все нулями
	MyVector.reserve(100); // Заранее выделяет непрерывную область в памяти под массив (вектор)
	// Если выделено слишком много памяти, можно использовать MyVector.shrink_to_fit(2) для уменьшения capacity до 2/
	MyVector.push_back(1); // Добавляет элемент в конец вектора
	MyVector.push_back(2);

	cout << "Количество элементов в векторе: " << MyVector.size() << endl;
	// cout << MyVector[10] << endl; при выходе за пределы массива, поведение точно такое же, как и у обычного массива, поэтому можно использовать метод at, но он медленнее

	try
	{
		cout << MyVector.at(10) << endl;
	}
	catch (const std::out_of_range& ex)
	{
		cout << ex.what() << endl;
	}

	MyVector.pop_back(); // Удаляет элемент с конца вектора
	// MyVector.clear(); // Удаляет все элементы из вектора
	/* cout << MyVector.capacity() << endl // Показывает вместимость вектора. В отличие от size показывает не то, сколько там находится элементов, а сколько может поместиться. В выделенном непрерывном
	куске памяти.
	MyVector.empty() - вернет true, если вектор пуст
	*/

	cout << "Первый элеммент: " << MyVector[0] << endl;

	return 0;
}