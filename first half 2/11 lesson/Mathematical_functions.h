#pragma once
//*1. Сделать заголовочный файл с некоторыми математическими функциями.
#include <iostream>
#include <clocale>
#include <stdlib.h>

using namespace std;

int Summa(int array[], int size) {
	size_t summa = 0;
	for (size_t i = 0; i < size; i++) {
		summa += array[i];
	}
	return summa;
}
int AverageValue(int summa_array, int size){
	int average_value = summa_array / size;
	return average_value;
}
