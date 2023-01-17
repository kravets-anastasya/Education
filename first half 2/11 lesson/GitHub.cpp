// Кравец Анастасия Сергеевна
/*1. Сделать заголовочный файл с некоторыми математическими функциями.
2. Сделать заголовочный файл с функциями по разделению массива на 2 части.
3. Сделать программу, которая показывала бы работу функций из ваших заголовочных файлов.
4*. Выложить результаты на GitHub.*/

#include <iostream>
#include "Array split.h"
#include "Mathematical_functions.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	srand(time(nullptr));
	int const SIZE = 12;
	int const SIZE_2 = 6;
	int array[SIZE];
	int first_half[SIZE_2]; // Первое полугодие
	int second_half[SIZE_2]; // Второе полугодие

	ManualInputToArray(array, SIZE);
	system("cls");
	
	cout << "Весь год: ";
	Conclusion(array, SIZE);
	cout << "Первые пол года: ";
	ArraySplit_1_Half(array, first_half, SIZE_2);
	Conclusion(first_half, SIZE_2);
	cout << "Вторые пол года: ";
	ArraySplit_2_Half(array, second_half, SIZE_2);
	Conclusion(second_half, SIZE_2);

	int summa_1_array = Summa(first_half, SIZE_2);
	int summa_2_array = Summa(second_half, SIZE_2);
	int summa_array = Summa(array, SIZE);
	cout << "Сумма за год: " << summa_array << endl;
	cout << "За первоые пол года вы зарабротали: " << summa_1_array << endl;
	cout << "За вторые пол года вы зарабротали: " << summa_2_array << endl << endl;
	
	int average_value = AverageValue(summa_array, SIZE);
	cout << "Среднее за год: " << average_value << endl;
	average_value = AverageValue(summa_1_array, SIZE_2);
	cout << "Среднее за первые пол года: " << average_value << endl;
	average_value = AverageValue(summa_2_array, SIZE_2);
	cout << "Среднее за вторые пол года: " << average_value << endl;

	return 0;
}
