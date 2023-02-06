// Кравец Анастасия Сергеевна
/*Написать функцию, которая получает указатель
на статический массив и его размер. Функция распределяет положительные, отрицательные и нулевые элементы
в отдельные динамические массивы.*/

#include <iostream>
#include <clocale>
#include <stdlib.h>

#include "../../Working with array creation.h"
#include "../../Functions in an array.h"
#include "Array_functions_split.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	srand(time(nullptr));
	int const size{20};
	int menu_selection{};
	int array[size];

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
	cout << "\n Ваш массив: \n";
	Conclusion(array, size);

	cout << "\n Положительные числа: \n";
	int positive_size{};
	int* positives = CopyPositiveNumbers(array, size, positive_size);
	Conclusion(positives, positive_size);

	cout << "\n Отрицательные числа: \n";
	int negative_size{};
	int* negatives = CopyNegativeNumbers(array, size, negative_size);
	Conclusion(negatives, negative_size);

	cout << "\n Нули: \n";
	int zeros_size{};
	int* zeros = CopyZeros(array, size, zeros_size);
	Conclusion(zeros, zeros_size);


	return 0;
}
