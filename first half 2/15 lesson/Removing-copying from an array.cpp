// Кравец Анастасия Сергеевна
/*Написать функцию по удалению(копированию) из массива группы элементов.
Значения индексов диапазона удаляемых(копируемых) элементов задаются пользователем.
Удаляемые(копируемые) элементы должны распологаться рядом, без разрывов.*/

#include <iostream>
#include "Array_functions_split.h"
#include "Working with array creation.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int size{};
	int range_of{};
	int range_to{};
	int menu{};

	cout << "Введите количество элементов: ";
	cin >> size;
	int* array = new int[size];

	cout << "Выберете: 1- ввенсти вручную, 2- рандомные числа.\n";
	cin >> menu;
	if (menu == 2) {
		NumberGenerator(array, size);
	}
	else if (menu == 1) {
		ManualInputToArray(array, size);
	}
	else {
		cout << "Вы ввели неверное число!";
		return -1;
	}
	PrintArray(array, size);

	cout << "Введите индекс ОТ:";
	cin >> range_of;
	cout << "Введите индекс ДО:";
	cin >> range_to;

	cout << "Выбирете что хотите сделать с этим диапазоном (включительно): \n";
	cout << "1. Удалить. \n";
	cout << "2. Копировать. \n";
	cin >> menu;

	system("cls");
	system("color 70");
	cout << "Исходный массив: ";
	PrintArray(array, size);
	cout << "\nДиапазон от " << range_of << " до " << range_to << endl;
	cout << "\nПолучившийся массив: ";
	if (menu == 1) {
		int* new_arr = RemovalInRange(array, size, range_of, range_to);
		PrintArray(new_arr, size);
	}
	else if (menu == 2) {
		int* new_arr = CopyFromArray(array, size, range_of, range_to);
		PrintArray(new_arr, size);
	}
	else {
		cout << "Вы ввели неверное число! \n";
		return -1;
	}

	return 0;
}
