// Кравец Анастасия Сергеевна
/*Написать следующие функции для работы
с динамическим массивом:
■ Функция добавления элемента в конец массива.
■ Функция вставки элемента по указанному индексу.
■ Функция удаления элемента по указанному индексу.*/

#include <iostream>
#include "Working with array creation.h"
#include "Functions in an array.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int size{};
	int additional_number{};
	int index{};
	int menu_selection{};
	cout << "Введите, количество элементов \n";
	cin >> size;
	int* array = new int[size];

	cout << "Выберете: 1- ввенсти вручную, 2- рандомные числа.\n";
	cin >> menu_selection;
	if(menu_selection == 2){
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

	cout << "\nВыберете, что вы хотите сделать с массивом:\n";
	cout << "1. Добавления элемента в конец массива.\n";
	cout << "2. Вставки элемента по указанному индексу.\n";
	cout << "3. Удаления элемента по указанному индексу.\n\n";
	cin >> menu_selection;

	if (menu_selection == 1) {
	//■ Функция добавления элемента в конец массива.
	cout << "Введите значение, которое хотите внести в конец массива\n";
	cin >> additional_number;
	int* new_arr = Element_to_end(array, size, additional_number);
	Conclusion(new_arr, size + 1);

	}else if(menu_selection == 2){
	//■ Функция вставки элемента по указанному индексу.
	cout << "Введите индекс, по которому хотите внести элемент в массив\n";
	cin >> index;
	cout << "Введите значение, которое хотите внести в массив по данному элементу\n";
	cin >> additional_number;
	int* new_arr = Insert_by_index(array, size, index, additional_number);
	Conclusion(new_arr, size + 1);

	}else if(menu_selection == 3){
	//■ Функция удаления элемента по указанному индексу.
	cout << "Введите индекс, по которому хотите удалить элемент в массив\n";
	cin >> index;
	int* new_arr = Delete_by_index(array, &size, index);
	Conclusion(new_arr, size);
	}

	return 0;
}
