// Кравец Анастасия Сергеевна
/*В одномерном массиве, состоящем из N вещественных
чисел вычислить:
■ Сумму отрицательных элементов.
■ Произведение элементов, находящихся между min и max
элементами.
■ Произведение элементов с четными номерами.
■ Сумму элементов, находящихся между первым и последним отрицательными элементами.*/

#include <iostream>
#include <clocale>
#include <stdlib.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	srand(time(nullptr));

	const short SIZE = 15;
	float namber[SIZE];
	float sum_of_negative = 0;
	size_t start_range=0;
	size_t end_range=0;
	float product_in_range = 1;
	float product_of_even_numbers = 1;

	cout << "Введите значение " << endl;
	for (size_t i = 0; i < SIZE; i++) {
		cout << i + 1 << ": ";
		cin >> namber[i];
	}
	system("cls");
	cout << "{";
	for (size_t i = 0; i < SIZE; i++) {
		cout << namber[i] << "; ";
	}
	cout << "}" << endl;
	for (size_t i = 0; i < SIZE; i++) {
		if (namber[i] < 0) {
			sum_of_negative += namber[i];
		}
	}
	cout << "1. Сумму отрицательных элементов: " << sum_of_negative  << endl;
	
	float max = namber[0];
	float min = namber[0];

	for (size_t i = 0; i < SIZE; i++) {
		if (max < namber[i]) {
			max = namber[i];
		}
		if (min > namber[i]) {
			min = namber[i];
		}
	}

	for (size_t i = 0; i < SIZE; i++) {
		if (namber[i] == min) {
			start_range = i;
		}
		if (namber[i] == max) {
			end_range = i;
		}
	}

	if (start_range < end_range) {
		for (size_t i = start_range; i <= end_range; i++) {
			product_in_range *= namber[i];
		}
	}
	else {
		for (size_t i = end_range ; i <= start_range; i++) {
			product_in_range *= namber[i];
		}
	}
	cout << "2. Произведение элементов, находящихся между min и max элементами: " << product_in_range  << endl;

	for (size_t i = 0; i < SIZE; i++) {
		if ((i % 2) == 0) {
			product_of_even_numbers *= namber[i];
		}
	}
	cout << "3. Произведение элементов с четными номерами: " << product_of_even_numbers  << endl;

	start_range = 0;
	end_range = 0;

	for(size_t i = 0; i < SIZE; i++){
		if (namber[i] < 0) {
			start_range = i;
			break;
		}
	}
	for (size_t i = 0; i < SIZE; i++) {
		if (namber[i] < 0) {
			end_range = i;
		}
	}

	product_in_range = 0;

	if (start_range < end_range) {
		for (size_t i = start_range; i <= end_range; i++) {
			product_in_range += namber[i];
		}
	}
	else {
		for (size_t i = end_range; i <= start_range; i++) {
			product_in_range += namber[i];
		}
	}
	cout << "4. Сумму элементов, находящихся между первым и последним отрицательными элементами : " << product_in_range  << endl;
	
	return 0;
}