//Кравец Анастасия Сергеевна
/*Написать функцию, которая получает указатель на динамический массив и его размер. Функция
должна удалить из массива какие то числа и вернуть
указатель на новый динамический массив.*/

#include <iostream>
#include "Working with array creation.h"
#include "Functions in an array.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int size{};
	int menu_selection{};
	int namber{};
	cout << "Введите количество элементов: ";
	cin >> size;
	int* array = new int[size];

	cout << "Выберете: 1- ввенсти вручную, 2- рандомные числа.\n";
	cin >> menu_selection;
	if (menu_selection == 2) {
		NumberGenerator(array, size);
	}
	else if (menu_selection == 1) {
		ManualInputToArray(array, size);
	}
	else {
		cout << "Вы ввели неверное число!";
		return -1;
	}
	Conclusion(array, size);
	cout << "Введите какое число удалить:";
	cin >> namber;
	
	int size2{};
	int* new_arr = RemoveSomeNumbers(array, size, namber, size2);
	Conclusion(new_arr, size2);

	return 0;
}