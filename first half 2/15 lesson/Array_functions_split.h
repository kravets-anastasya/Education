#pragma once
#include <iostream>
using namespace std;

//■ Функция подсчета количества чисел в диапазоне для удаления.
int CountInRange(int array[], int size, int range_of, int range_to) {
	int amount_of_numbers = 0;
	for (int i = 0; i < size; i++) {
		if (i >= range_of && i <= range_to) {
			amount_of_numbers++;
		}
	}
	return amount_of_numbers;
}

//■ Функция удаления элементов в диапазоне указанных индексов.
int* RemovalInRange(int array[], int& size, int range_of, int range_to) {
	int new_size = size - CountInRange(array, size, range_of, range_to);
	int* new_arr = new int[new_size];
	for (size_t i = 0, j = 0; i < size; i++) {
		if (i < range_of || i > range_to) {
			new_arr[j] = array[i];
			j++;
		}
		else {
			continue;
		}
	}
	size = new_size;
	return new_arr;
}

//■ Функция подсчета количества чисел в диапазоне для копирования.
int CountInRangeCopy(int array[], int size, int range_of, int range_to) {
	int amount_of_numbers = 0;
	for (int i = 0; i < size; i++) {
		if (i < range_of || i > range_to) {
			amount_of_numbers++;
		}
	}
	return amount_of_numbers;
}

//■ Функция копирования элементов в диапазоне указанных индексов.
int* CopyFromArray(int array[], int& size, int range_of, int range_to) {
	int new_size = size - CountInRangeCopy(array, size, range_of, range_to);
	int* new_arr = new int[new_size];
	for (size_t i = 0, j = 0; i < size; i++) {
		if (i < range_of || i > range_to ) {
			continue;
		}
		else {
			new_arr[j] = array[i];
			j++;
		}
	}
	size = new_size;
	return new_arr;
}