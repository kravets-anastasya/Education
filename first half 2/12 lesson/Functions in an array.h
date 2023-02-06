#pragma once
#include <iostream>
using namespace std;

//■ Функция добавления элемента в конец массива.
int* Element_to_end(int array[], int size, int additional_number) {
	int* new_arr = new int[size + 1];

	for (size_t i = 0; i < size + 1; i++){
		new_arr[i] = array[i];
	}
	new_arr[size] = additional_number;
	return new_arr;
}

//■ Функция вставки элемента по указанному индексу.
int* Insert_by_index(int array[], int size, int index, int additional_number) {
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
int* Delete_by_index(int array[], int* size, int index) {
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