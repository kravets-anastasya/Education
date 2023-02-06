#pragma once
#include <iostream>
using namespace std;

//■ Функция добавления элемента в конец массива.
int* ElementToEnd(int array[], int size, int additional_number) {
	int* new_arr = new int[size + 1];

	for (size_t i = 0; i < size + 1; i++){
		new_arr[i] = array[i];
	}
	new_arr[size] = additional_number;
	return new_arr;
}

//■ Функция вставки элемента по указанному индексу.
int* InsertByIndex(int array[], int size, int index, int additional_number) {
	int* new_arr = new int[size + 1];
	for (size_t i = 0, j = 0; i <= size; i++) {
		if (j == index) {
			new_arr[j] = additional_number;
			i--;
		}
		else {
			new_arr[j] = array[i];
		}
		j++;
	}
	return new_arr;
}

//■ Функция удаления элемента по указанному индексу.
int* DeleteByIndex(int array[], int* size, int index) {
	int new_size = *size - 1;
	int* new_arr = new int[new_size];
	for (size_t i = 0, j = 0; i < *size; i++) {
		if (i == index) {
			continue;
		}
		else {
			new_arr[j] = array[i];
		}
		j++;
	}
	*size = new_size;
	return new_arr;
}

//■ Функция подсчета количества определённых чисел.
int CountingCertainNumbers(int array[], int size, int namber) {
	int amount_of_numbers = 0;
	for (int i = 0; i < size; i++) {
		if (array[i] == namber) {
			amount_of_numbers++;
		}
	}
	return amount_of_numbers;
}

//■ Функция удаления какого то числа из массива.
int* RemoveSomeNumbers(int array[], int size, int namber, int& size2) {
	int amount_of_numbers = CountingCertainNumbers(array, size, namber);
	size2 = size - amount_of_numbers;
	int* new_arr = new int[size2];
	
	for (size_t i = 0, j = 0; i < size; i++) {
		if (array[i] == namber) continue;

		new_arr[j] = array[i];
		j++;
	}
	return new_arr;
}